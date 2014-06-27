//  This file is part of Qt Bitcion Trader
//      https://github.com/JulyIGHOR/QtBitcoinTrader
//  Copyright (C) 2013-2014 July IGHOR <julyighor@gmail.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  In addition, as a special exception, the copyright holders give
//  permission to link the code of portions of this program with the
//  OpenSSL library under certain conditions as described in each
//  individual source file, and distribute linked combinations including
//  the two.
//
//  You must obey the GNU General Public License in all respects for all
//  of the code used other than OpenSSL. If you modify file(s) with this
//  exception, you may extend this exception to your version of the
//  file(s), but you are not obligated to do so. If you do not wish to do
//  so, delete this exception statement from your version. If you delete
//  this exception statement from all source files in the program, then
//  also delete it here.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "exchange_indacoin.h"
#include "main.h"
#include <QDateTime>
#include <string>
#include <openssl/ec.h>
#include <openssl/ecdsa.h>
#include <openssl/bn.h>
#include <openssl/sha.h>

static const std::string base64_chars = 
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789+/";


Exchange_Indacoin::Exchange_Indacoin(QByteArray pRestSign, QByteArray pRestKey) 
	: Exchange()
{
	calculatingFeeMode=1;
	baseValues.exchangeName="Indacoin";
	baseValues.currentPair.name="BTC/USD";
	baseValues.currentPair.setSymbol("BTCUSD");
	baseValues.currentPair.currRequestPair="btc_usd";
	baseValues.currentPair.priceDecimals=3;
	minimumRequestIntervalAllowed=600;
	baseValues.currentPair.priceMin=qPow(0.1,baseValues.currentPair.priceDecimals);
	baseValues.currentPair.tradeVolumeMin=0.01;
	baseValues.currentPair.tradePriceMin=0.1;
	lastTickerDate=0;
	lastFetchTid=0;
	depthAsks=0;
	depthBids=0;
	forceDepthLoad=false;
	julyHttp=0;
	isApiDown=false;
	tickerOnly=false;
	privateRestSign=pRestSign;
	privateRestKey=pRestKey;
	moveToThread(this);

	currencyMapFile="Indacoin"; //Resources/Exchangec/Indacoin.ini
	defaultCurrencyParams.currADecimals=8;
	defaultCurrencyParams.currBDecimals=8;
	defaultCurrencyParams.currABalanceDecimals=8;
	defaultCurrencyParams.currBBalanceDecimals=8;
	defaultCurrencyParams.priceDecimals=3;
	defaultCurrencyParams.priceMin=qPow(0.1,baseValues.currentPair.priceDecimals);

	supportsLoginIndicator=false;
	supportsAccountVolume=false;
	supportsExchangeLag=false;

	authRequestTime.restart();
	privateNonce=(static_cast<quint32>(time(NULL))-1371854884)*10;//?
}

Exchange_Indacoin::~Exchange_Indacoin()
{
}

void Exchange_Indacoin::clearVariables()
{
	isFirstTicker=true;
	cancelingOrderIDs.clear();
	isFirstAccInfo=true;
	Exchange::clearVariables();
	lastOpenedOrders=-1;
	apiDownCounter=0;
	lastHistory.clear();
	lastOrders.clear();
	reloadDepth();
	lastFetchTid=QDateTime::currentDateTime().addSecs(-600).toTime_t();
	lastFetchTid=-lastFetchTid;
}

void Exchange_Indacoin::clearValues()
{
	clearVariables();
	if(julyHttp)julyHttp->clearPendingData();
}

void Exchange_Indacoin::reloadDepth()
{
	lastDepthBidsMap.clear();
	lastDepthAsksMap.clear();
	lastDepthData.clear();
	Exchange::reloadDepth();
}

void Exchange_Indacoin::dataReceivedAuth(QByteArray data, int reqType)
{
	if(debugLevel)logThread->writeLog("RCV: "+data);
	bool success=data.startsWith("{")&&!data.startsWith("{\"error\":")||data.startsWith("[");
	if(success&&data.startsWith("401"))success=false;

	if(debugLevel)logThread->writeLog("RCV: "+data);

	switch(reqType)
	{
	case 103: //ticker
		//everything ok
		{
			QByteArray tickerHigh=getMidData("max_price\":",",\"",&data);
			if(!tickerHigh.isEmpty())
			{
				double newTickerHigh=tickerHigh.toDouble();
				if(newTickerHigh!=lastTickerHigh)emit tickerHighChanged(newTickerHigh);
				lastTickerHigh=newTickerHigh;
			}

			QByteArray tickerLow=getMidData("\"min_price\":",",\"",&data);
			if(!tickerLow.isEmpty())
			{
				double newTickerLow=tickerLow.toDouble();
				if(newTickerLow!=lastTickerLow)emit tickerLowChanged(newTickerLow);
				lastTickerLow=newTickerLow;
			}

			QByteArray tickerSell=getMidData("\"last_buy_price\":",",\"",&data);
			if(!tickerSell.isEmpty())
			{
				double newTickerSell=tickerSell.toDouble();
				if(newTickerSell!=lastTickerSell)emit tickerSellChanged(newTickerSell);
				lastTickerSell=newTickerSell;
			}

			QByteArray tickerBuy=getMidData("\"last_sell_price\":",",\"",&data);
			if(!tickerBuy.isEmpty())
			{
				double newTickerBuy=tickerBuy.toDouble();
				if(newTickerBuy!=lastTickerBuy)emit tickerBuyChanged(newTickerBuy);
				lastTickerBuy=newTickerBuy;
			}

			QByteArray tickerVolume=getMidData("\"volume_base\":",",\"",&data);
			if(!tickerVolume.isEmpty())
			{
				double newTickerVolume=tickerVolume.toDouble();
				if(newTickerVolume!=lastTickerVolume)emit tickerVolumeChanged(newTickerVolume);
				lastTickerVolume=newTickerVolume;
			}

			
			QByteArray tickerLast=getMidData("last_deal_price\":",",\"",&data);
			double newTickerLast=tickerLast.toDouble();
			emit tickerLastChanged(newTickerLast);

			if(isFirstTicker)
			{
				emit firstTicker();
				isFirstTicker=false;
			}
		}
		break;//ticker
	case 109: //trades
		{
			if(data.size()<10)break;
			QByteArray currentRequestSymbol=getMidData("\"","\":[{",&data).toUpper().replace("_","");
			QStringList tradeList=QString(data).split("},{");
			QList<TradesItem> *newTradesItems=new QList<TradesItem>;

			for(int n=0;n<tradeList.count();n++)
			{
				QByteArray tradeData=tradeList.at(n).toAscii()+"}";
				TradesItem newItem;
				newItem.date=getMidData("date\":","}",&tradeData).toUInt();
				newItem.price=getMidData("\"price\":",",\"",&tradeData).toDouble();
				//if(lastFetchTid<0&&newItem.date<-lastFetchTid)continue;
				quint32 currentTid=getMidData("\"tid\":",",\"",&tradeData).toUInt();
				if(currentTid<1000||lastFetchTid>=currentTid)continue;
				lastFetchTid=currentTid;
				if(n==0&&lastTickerDate<newItem.date)
				{
					lastTickerDate=newItem.date;
					emit tickerLastChanged(newItem.price);
				}
				newItem.amount=getMidData("\"amount\":",",\"",&tradeData).toDouble();
				newItem.symbol=currentRequestSymbol;
				newItem.orderType=getMidData("\"oper_type\":\"","\"",&tradeData)=="0"?1:-1;

				if(newItem.isValid())
					(*newTradesItems)<<newItem;
				else 
					if(debugLevel)
						logThread->writeLog("Invalid trades fetch data line:"+tradeData,2);
			}
			if(newTradesItems->count())emit addLastTrades(newTradesItems);
			else delete newTradesItems;
		}
		break;//trades
	case 111: //all active orders 
		//All ok
		{
		if(data.startsWith("{\"bids\""))
		{
			emit depthRequestReceived();

			if(lastDepthData!=data)
			{
				lastDepthData=data;
				depthAsks=new QList<DepthItem>;
				depthBids=new QList<DepthItem>;

				
				QMap<double,double> currentBidsMap;
				QStringList bidsList=QString(getMidData("bids\":[[","]]",&data)).split("],[");
				double groupedPrice=0.0;
				double groupedVolume=0.0;
				int rowCounter=0;

				for(int n=0;n<bidsList.count();n++)
				{
					if(baseValues.depthCountLimit&&rowCounter>=baseValues.depthCountLimit)break;
					QStringList currentPair=bidsList.at(n).split(",");
					if(currentPair.count()!=2)continue;
					double priceDouble=currentPair.first().toDouble();
					double amount=currentPair.last().toDouble();
					if(baseValues.groupPriceValue>0.0)
					{
						if(n==0)
						{
							emit depthFirstOrder(priceDouble,amount,false);
							groupedPrice=baseValues.groupPriceValue*(int)(priceDouble/baseValues.groupPriceValue);
							groupedVolume=amount;
						}
						else
						{
							bool matchCurrentGroup=priceDouble>groupedPrice-baseValues.groupPriceValue;
							if(matchCurrentGroup)groupedVolume+=amount;
							if(!matchCurrentGroup||n==bidsList.count()-1)
							{
								depthSubmitOrder(&currentBidsMap,groupedPrice-baseValues.groupPriceValue,groupedVolume,false);
								rowCounter++;
								groupedVolume=amount;
								groupedPrice-=baseValues.groupPriceValue;
							}
						}
					}
					else
					{
						depthSubmitOrder(&currentBidsMap,priceDouble,amount,false);
						rowCounter++;
					}
				}
				QList<double> currentBidsList=lastDepthBidsMap.keys();
				for(int n=0;n<currentBidsList.count();n++)
					if(currentBidsMap.value(currentBidsList.at(n),0)==0)depthUpdateOrder(currentBidsList.at(n),0.0,false);
				lastDepthBidsMap=currentBidsMap;

				
				QMap<double,double> currentAsksMap;
				QStringList asksList=QString(getMidData("asks\":[[","]]",&data)).split("],[");
				groupedPrice=0.0;
				groupedVolume=0.0;
				rowCounter=0;

				for(int n=0;n<asksList.count();n++)
				{
					if(baseValues.depthCountLimit&&rowCounter>=baseValues.depthCountLimit)break;
					QStringList currentPair=asksList.at(n).split(",");
					if(currentPair.count()!=2)continue;
					double priceDouble=currentPair.first().toDouble();
					double amount=currentPair.last().toDouble();

					if(baseValues.groupPriceValue>0.0)
					{
						if(n==0)
						{
							emit depthFirstOrder(priceDouble,amount,true);
							groupedPrice=baseValues.groupPriceValue*(int)(priceDouble/baseValues.groupPriceValue);
							groupedVolume=amount;
						}
						else
						{
							bool matchCurrentGroup=priceDouble<groupedPrice+baseValues.groupPriceValue;
							if(matchCurrentGroup)groupedVolume+=amount;
							if(!matchCurrentGroup||n==asksList.count()-1)
							{
								depthSubmitOrder(&currentAsksMap,groupedPrice+baseValues.groupPriceValue,groupedVolume,true);
								rowCounter++;
								groupedVolume=amount;
								groupedPrice+=baseValues.groupPriceValue;
							}
						}
					}
					else
					{
						depthSubmitOrder(&currentAsksMap,priceDouble,amount,true);
						rowCounter++;
					}
				}
				QList<double> currentAsksList=lastDepthAsksMap.keys();
				for(int n=0;n<currentAsksList.count();n++)
					if(currentAsksMap.value(currentAsksList.at(n),0)==0)depthUpdateOrder(currentAsksList.at(n),0.0,true);
				lastDepthAsksMap=currentAsksMap;

				emit depthSubmitOrders(depthAsks, depthBids);
				depthAsks=0;
				depthBids=0;
			}
		}
		else if(debugLevel)logThread->writeLog("Invalid depth data:"+data,2);
		}
		break;
	case 202: //info
	//array of arrays
		{
			if(!success)break;
			QByteArray btcBalance=getMidData("\"BTC\",\"","\"]",&data);
			if(!btcBalance.isEmpty())
			{
				double newBtcBalance=btcBalance.toDouble();
				if(lastBtcBalance!=newBtcBalance)emit accBtcBalanceChanged(newBtcBalance);
				lastBtcBalance=newBtcBalance;
			}

			QByteArray usdBalance=getMidData("\"USD\",\"","\"]",&data);
			if(!usdBalance.isEmpty())
			{
				double newUsdBalance=usdBalance.toDouble();
				if(newUsdBalance!=lastUsdBalance)emit accUsdBalanceChanged(newUsdBalance);
				lastUsdBalance=newUsdBalance;
			}

		}
		break;//info
	case 204://orders
		{
		if(data.size()<=30)break;
		if(lastOrders!=data)
		{
			lastOrders=data;
			data.replace("return\":{\"","},\"");
			QString rezultData;
			QStringList ordersList=QString(data).split("},\"");
			if(ordersList.count())ordersList.removeFirst();
			if(ordersList.count()==0)return;

			QList<OrderItem> *orders=new QList<OrderItem>;
			for(int n=0;n<ordersList.count();n++)
			{
				OrderItem currentOrder;
				QByteArray currentOrderData="{"+ordersList.at(n).toAscii()+"}";

				currentOrder.oid=getMidData("{","\":{",&currentOrderData);
				currentOrder.date=getMidData("timestamp_created\":",",\"",&currentOrderData).toUInt();
				currentOrder.type=getMidData("type\":\"","\",\"",&currentOrderData)=="sell";
				currentOrder.status=getMidData("status\":","}",&currentOrderData).toInt()+1;
				currentOrder.amount=getMidData("amount\":",",\"",&currentOrderData).toDouble();
				currentOrder.price=getMidData("rate\":",",\"",&currentOrderData).toDouble();
				currentOrder.symbol=getMidData("pair\":\"","\",\"",&currentOrderData).toUpper().replace("_","");
				if(currentOrder.isValid())(*orders)<<currentOrder;
			}
			emit ordersChanged(orders);
		}
		break;//orders
		}
	case 305: //order/cancel
		if(success)
		{
			if(!success)break;
			if(!cancelingOrderIDs.isEmpty()){
				if(data.contains("success"))
					emit orderCanceled(cancelingOrderIDs.first());
				if(debugLevel)
					logThread->writeLog("Order canceled:"+cancelingOrderIDs.first(),2);
				cancelingOrderIDs.removeFirst();
			}
		}
		break;//order/cancel
	case 306: {//order/buy{
			if(!success||!debugLevel)break;
			  if(data.startsWith("{\"id\""))logThread->writeLog("Buy OK: "+data);
			  else logThread->writeLog("Invalid Order Buy Data:"+data);
			break;//order/buy
		}
	case 307: {//order/sell{
			if(!success||!debugLevel)break;
			  if(data.startsWith("{\"id\""))logThread->writeLog("Sell OK: "+data);
			  else logThread->writeLog("Invalid Order Sell Data:"+data);
			break;//order/sell
		}
	/*
	case 306: if(debugLevel)logThread->writeLog("Buy OK: "+data,2);break;//order/buy
	case 307: if(debugLevel)logThread->writeLog("Sell OK: "+data,2);break;//order/sell*/
	case 208: ///history
		{
		if(!success)break;
		if(data.startsWith("["))
		{
			if(lastHistory!=data)
			{
				lastHistory=data;
				if(data=="[]")break;
				
				
				QList<HistoryItem> *historyItems=new QList<HistoryItem>;
				QString newLog(data);
				newLog= newLog.mid(1, newLog.length()-2); //delete open [ and close]
				QStringList dataList=newLog.split("], [");
				for(int n=0;n<dataList.count();n++)
				{
					HistoryItem currentHistoryItem;
					QStringList itemsList = dataList.at(n).split(", ");//break to items
					bool tr= (itemsList.at(0)=="\'buy\'")||(itemsList.at(0)=="\'sell\'");
					if (tr){//it was trade
						if (itemsList.at(1)=="\'btc_usd\'") //- pair of deal: 'btc_usd' or 'ltc_usd'
							currentHistoryItem.symbol="BTCUSD";
						else
							currentHistoryItem.symbol="LTCUSD";
						currentHistoryItem.price=itemsList.at(2).toDouble();// price
						currentHistoryItem.volume=itemsList.at(3).toDouble();// - base amount
						currentHistoryItem.type= (itemsList.at(0)=="\'buy\'")?2:1;
					}
					else{// in|out
						currentHistoryItem.type= (itemsList.at(0)=="\'in\'")?4:5;
					}
					QDateTime orderDateTime=QDateTime::fromString(itemsList.at(6).toAscii(),"MM/dd/yyyy HH:mm:ss");
					orderDateTime.setTimeSpec(Qt::UTC);
					currentHistoryItem.dateTimeInt=orderDateTime.toTime_t();
					if(currentHistoryItem.isValid())(*historyItems)<<currentHistoryItem;
				
					emit historyChanged(historyItems);
				}
			}
		}
		break;//money/wallet/history
		
		}
	default: break;
	}

	static int errorCount=0;
	if(!success)
	{
		errorCount++;
		if(errorCount<3)return;
	//	if(debugLevel)logThread->writeLog("API error: "+" ReqType:"+QByteArray::number(reqType),2);
	}
	else errorCount=0;
}

void Exchange_Indacoin::depthUpdateOrder(double price, double amount, bool isAsk)
{
	if(isAsk)
	{
		if(depthAsks==0)return;
		DepthItem newItem;
		newItem.price=price;
		newItem.volume=amount;
		if(newItem.isValid())
			(*depthAsks)<<newItem;
	}
	else
	{
		if(depthBids==0)return;
		DepthItem newItem;
		newItem.price=price;
		newItem.volume=amount;
		if(newItem.isValid())
			(*depthBids)<<newItem;
	}
}

void Exchange_Indacoin::depthSubmitOrder(QMap<double,double> *currentMap ,double priceDouble, double amount, bool isAsk)
{
	if(priceDouble==0.0||amount==0.0)return;

	if(isAsk)
	{
		(*currentMap)[priceDouble]=amount;
		if(lastDepthAsksMap.value(priceDouble,0.0)!=amount)
			depthUpdateOrder(priceDouble,amount,true);
	}
	else
	{
		(*currentMap)[priceDouble]=amount;
		if(lastDepthBidsMap.value(priceDouble,0.0)!=amount)
			depthUpdateOrder(priceDouble,amount,false);
	}
}

bool Exchange_Indacoin::isReplayPending(int reqType)
{
	if(julyHttp==0)return false;
	return julyHttp->isReqTypePending(reqType);
}

void Exchange_Indacoin::secondSlot()
{
	static int infoCounter=0;
	if(lastHistory.isEmpty())getHistory(false); 

	if(!isReplayPending(202))
		sendToApi(202,"getbalance",true,baseValues.httpSplitPackets,"");

	if(!tickerOnly&&!isReplayPending(204))
		sendToApi(204,"openorders",true,baseValues.httpSplitPackets,"");
	if(!isReplayPending(103))sendToApi(103,"new/ticker/"+baseValues.currentPair.currRequestPair,false,baseValues.httpSplitPackets);
	//qint64 now=QDateTime::currentMSecsSinceEpoch ();
	//QByteArray Since=QByteArray::number(now-3600);
	if(!isReplayPending(109))
		sendToApi(109,"new/trades/"+baseValues.currentPair.currRequestPair+"/0/"+QByteArray::number(QDateTime::currentMSecsSinceEpoch ()/1000 -3600),false,baseValues.httpSplitPackets);
	if(depthEnabled&&(forceDepthLoad||/*infoCounter==3&&*/!isReplayPending(111)))
	{
		emit depthRequested();
		sendToApi(111,"orderbook?pair="+baseValues.currentPair.currRequestPair,false,baseValues.httpSplitPackets);
		forceDepthLoad=false;
	}
	
	if(!baseValues.httpSplitPackets&&julyHttp)
		julyHttp->prepareDataSend();

	if(++infoCounter>9)
	{
		infoCounter=0;
		quint32 syncNonce=(static_cast<quint32>(time(NULL))-1371854884)*10;
		if(privateNonce<syncNonce)privateNonce=syncNonce;
	}
	Exchange::secondSlot();
}
 
void Exchange_Indacoin::getHistory(bool force)
{
	if(tickerOnly)return;
	if(force)lastHistory.clear();
	if(!isReplayPending(208))
		sendToApi(208,"gethistory",true,baseValues.httpSplitPackets,"");
}

void Exchange_Indacoin::buy(double apiBtcToBuy, double apiPriceToBuy)
{
	if(tickerOnly)return;
	QByteArray data="\"pair\":\'"+baseValues.currentPair.currRequestPair;
	data+="\',\"price\":\'"+QByteArray::number(apiPriceToBuy,'f',baseValues.currentPair.priceDecimals);
	data+="\',\"amount\":\'"+QByteArray::number(apiBtcToBuy,'f',8)+'\'';
	if(debugLevel)logThread->writeLog("Sell: "+data,2);
	sendToApi(306,"buyorder",true,true,data);
}

void Exchange_Indacoin::sell(double apiBtcToSell, double apiPriceToSell)
{
	if(tickerOnly)return;
	QByteArray data="\"pair\":\'"+baseValues.currentPair.currRequestPair;
	data+="\',\"price\":\'"+QByteArray::number(apiPriceToSell,'f',baseValues.currentPair.priceDecimals);
	data+="\',\"amount\":\'"+QByteArray::number(apiBtcToSell,'f',8)+'\'';
	if(debugLevel)logThread->writeLog("Sell: "+data,2);
	sendToApi(307,"sellorder",true,true,data);
}

void Exchange_Indacoin::cancelOrder(QByteArray order)
{
	if(tickerOnly)return;
	cancelingOrderIDs<<order;
	order.prepend("i:\'");
	order.append('\'');
	if(debugLevel)logThread->writeLog("Cancel order: "+order,2);
	sendToApi(305,"cancelorder",true,true,order);
}

void Exchange_Indacoin::sendToApi(int reqType, QByteArray method, bool auth, bool sendNow, QByteArray commands)
{
	if(julyHttp==0)
	{ 
		julyHttp=new JulyHttp("indacoin.com","",this);
		connect(julyHttp,SIGNAL(anyDataReceived()),baseValues_->mainWindow_,SLOT(anyDataReceived()));
		connect(julyHttp,SIGNAL(apiDown(bool)),baseValues_->mainWindow_,SLOT(setApiDown(bool)));
		connect(julyHttp,SIGNAL(setDataPending(bool)),baseValues_->mainWindow_,SLOT(setDataPending(bool)));
		connect(julyHttp,SIGNAL(errorSignal(QString)),baseValues_->mainWindow_,SLOT(showErrorMessage(QString)));
		connect(julyHttp,SIGNAL(sslErrorSignal(const QList<QSslError> &)),this,SLOT(sslErrors(const QList<QSslError> &)));
		connect(julyHttp,SIGNAL(dataReceived(QByteArray,int)),this,SLOT(dataReceivedAuth(QByteArray,int)));
	}

	if(auth)
	{
		QByteArray sign=method+QByteArray::number(++privateNonce)+privateRestKey;
		std::string signStr=ecdsaSha1(sign,privateRestSign);
		sign.clear();
		sign=signStr.c_str();//without'\0'
		//Add headers;
		QByteArray appendHeader="API-Key: "+privateRestKey;
		appendHeader+= "\r\nAPI-Sign: "+sign;
		appendHeader+= "\r\nAPI-Nonce: "+QByteArray::number(privateNonce)+"\r\n";
		QByteArray postData='{'+commands+'}';
		if(sendNow)
			julyHttp->sendData(reqType, "POST /api/"+method,postData, appendHeader);
		else
			julyHttp->prepareData(reqType, "POST /api/"+method,postData, appendHeader);
	}
	else
	{
		if(!commands.isEmpty())

		{
			if(sendNow)
				julyHttp->sendData(reqType, "POST /api/"+method, commands);
			else 
				julyHttp->prepareData(reqType, "POST /api/"+method, commands);
		}
		else
		{
			if(sendNow)
				julyHttp->sendData(reqType, "GET /api/"+method);
			else 
				julyHttp->prepareData(reqType, "GET /api/"+method);
		}
	}
}

void Exchange_Indacoin::sslErrors(const QList<QSslError> &errors)
{
	QStringList errorList;
	for(int n=0;n<errors.count();n++)errorList<<errors.at(n).errorString();
	if(debugLevel)logThread->writeLog(errorList.join(" ").toAscii(),2);
	emit showErrorMessage("SSL Error: "+errorList.join(" "));
}

std::string ecdsaSha1(QByteArray Qsign, QByteArray QKey){
//	method="sellorderbysum";
//	key="Pq75pGlJQfRUcfdujWAk";
	//QByteArray Qsign=method+QByteArray::number(nonce)+key;
	
	EC_KEY    *eckey;
	eckey = EC_KEY_new_by_curve_name(NID_secp256k1);//secp256k1
	EC_KEY_generate_key(eckey);
	unsigned char* sign;
	sign = new unsigned char[QKey.size()+1];
	sign[QKey.size()]='\0';
	strcpy((char*)sign,QKey.data());
	std::string keyStr= (char*)sign;
	keyStr=base64_decode(keyStr);
	BIGNUM *pKey;
	pKey=BN_new();
	
	strcpy((char*)sign,keyStr.c_str());
	BN_bin2bn(sign, keyStr.length(), pKey);
	EC_KEY_set_private_key(eckey,pKey);
	
	delete []sign;
	sign = new unsigned char[Qsign.size()+1];
	sign[Qsign.size()]='\0';
	strcpy((char*)sign,Qsign.data());
	unsigned char  *pp,*buffer;

	unsigned int buf_len;
	buf_len = ECDSA_size(eckey);
	buffer  = (unsigned char*)OPENSSL_malloc(buf_len);
	pp=buffer;
	unsigned char hash[21];
	SHA1 (sign,Qsign.size(),hash);
	int ret=ECDSA_sign(0, hash, 20, pp, &buf_len, eckey);
	ret=ECDSA_verify(0, sign, 20, buffer, buf_len, eckey);
	std::string res=base64_encode(pp,buf_len);
	BN_free(pKey);
	
	delete []sign;
	return res;
}	 

std::string base64_encode(unsigned char const* bytes_to_encode, unsigned int in_len) {
  std::string ret;
  int i = 0;
  int j = 0;
  unsigned char char_array_3[3];
  unsigned char char_array_4[4];

  while (in_len--) {
    char_array_3[i++] = *(bytes_to_encode++);
    if (i == 3) {
      char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
      char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
      char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
      char_array_4[3] = char_array_3[2] & 0x3f;

      for(i = 0; (i <4) ; i++)
        ret += base64_chars[char_array_4[i]];
      i = 0;
    }
  }

  if (i)
  {
    for(j = i; j < 3; j++)
      char_array_3[j] = '\0';

    char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
    char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
    char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
    char_array_4[3] = char_array_3[2] & 0x3f;

    for (j = 0; (j < i + 1); j++)
      ret += base64_chars[char_array_4[j]];

    while((i++ < 3))
      ret += '=';

  }

  return ret;

}

static inline bool is_base64(unsigned char c) {
  return (isalnum(c) || (c == '+') || (c == '/'));
}

std::string base64_decode(std::string const& encoded_string) {
  int in_len = encoded_string.size();
  int i = 0;
  int j = 0;
  int in_ = 0;
  unsigned char char_array_4[4], char_array_3[3];
  std::string ret;

  while (in_len-- && ( encoded_string[in_] != '=') && is_base64(encoded_string[in_])) {
    char_array_4[i++] = encoded_string[in_]; in_++;
    if (i ==4) {
      for (i = 0; i <4; i++)
        char_array_4[i] = base64_chars.find(char_array_4[i]);

      char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
      char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
      char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

      for (i = 0; (i < 3); i++)
        ret += char_array_3[i];
      i = 0;
    }
  }

  if (i) {
    for (j = i; j <4; j++)
      char_array_4[j] = 0;

    for (j = 0; j <4; j++)
      char_array_4[j] = base64_chars.find(char_array_4[j]);

    char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
    char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
    char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

    for (j = 0; (j < i - 1); j++) ret += char_array_3[j];
  }

  return ret;
}