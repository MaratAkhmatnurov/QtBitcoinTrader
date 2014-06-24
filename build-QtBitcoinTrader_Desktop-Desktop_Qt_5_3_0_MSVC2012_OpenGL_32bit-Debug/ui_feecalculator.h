/********************************************************************************
** Form generated from reading UI file 'feecalculator.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEECALCULATOR_H
#define UI_FEECALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeeCalculator
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *buyBtcLayout;
    QLabel *btcLabel1;
    QDoubleSpinBox *buyTotalBtc;
    QLabel *label_2;
    QHBoxLayout *buyPriceLayout;
    QLabel *usdLabel1;
    QDoubleSpinBox *buyPrice;
    QLabel *label_9;
    QHBoxLayout *totalPaidLayout;
    QLabel *usdLabel2;
    QDoubleSpinBox *totalPaid;
    QLabel *label_10;
    QGridLayout *gridLayout_8;
    QLabel *btcLabel3;
    QDoubleSpinBox *buyFee;
    QLabel *label_11;
    QHBoxLayout *receivedLayout;
    QLabel *btcLabel4;
    QDoubleSpinBox *btcReceived;
    QLabel *label_15;
    QLabel *label_6;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QGridLayout *gridLayout_10;
    QLabel *btcLabel2;
    QDoubleSpinBox *sellBtc;
    QLabel *label_3;
    QHBoxLayout *sellPriceLayout;
    QLabel *usdLabel3;
    QDoubleSpinBox *sellPrice;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *usdLabel4;
    QDoubleSpinBox *sellAmount;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *usdLabel5;
    QDoubleSpinBox *sellFee;
    QLabel *label_14;
    QHBoxLayout *fiatReceivedLayout;
    QLabel *usdLabel6;
    QDoubleSpinBox *sellFiatReceived;
    QLabel *label_19;
    QHBoxLayout *feeLayout;
    QLabel *label_20;
    QDoubleSpinBox *feeValue;
    QHBoxLayout *horizontalLayout_12;
    QLabel *usdLabel7;
    QDoubleSpinBox *profitLoss;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setZeroProfitButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *widgetStaysOnTop;
    QCheckBox *singleInstance;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *FeeCalculator)
    {
        if (FeeCalculator->objectName().isEmpty())
            FeeCalculator->setObjectName(QString::fromUtf8("FeeCalculator"));
        FeeCalculator->resize(816, 183);
        gridLayout = new QGridLayout(FeeCalculator);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(FeeCalculator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {background: rgba(255,255,255,160); border: 1px solid gray;border-radius: 3px;margin-top: 7px;}"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(4);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 6, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 8, 1, 1);

        buyBtcLayout = new QHBoxLayout();
        buyBtcLayout->setSpacing(4);
        buyBtcLayout->setObjectName(QString::fromUtf8("buyBtcLayout"));
        buyBtcLayout->setContentsMargins(-1, -1, 0, -1);
        btcLabel1 = new QLabel(groupBox);
        btcLabel1->setObjectName(QString::fromUtf8("btcLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btcLabel1->sizePolicy().hasHeightForWidth());
        btcLabel1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        btcLabel1->setFont(font);
        btcLabel1->setStyleSheet(QString::fromUtf8("color: #996515"));
        btcLabel1->setAlignment(Qt::AlignCenter);

        buyBtcLayout->addWidget(btcLabel1);

        buyTotalBtc = new QDoubleSpinBox(groupBox);
        buyTotalBtc->setObjectName(QString::fromUtf8("buyTotalBtc"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buyTotalBtc->sizePolicy().hasHeightForWidth());
        buyTotalBtc->setSizePolicy(sizePolicy2);
        buyTotalBtc->setMinimumSize(QSize(110, 0));
        buyTotalBtc->setDecimals(8);
        buyTotalBtc->setMinimum(0);
        buyTotalBtc->setMaximum(1e+09);
        buyTotalBtc->setSingleStep(0.01);

        buyBtcLayout->addWidget(buyTotalBtc);


        gridLayout_2->addLayout(buyBtcLayout, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/multiply.png")));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        buyPriceLayout = new QHBoxLayout();
        buyPriceLayout->setSpacing(4);
        buyPriceLayout->setObjectName(QString::fromUtf8("buyPriceLayout"));
        buyPriceLayout->setContentsMargins(-1, -1, 0, -1);
        usdLabel1 = new QLabel(groupBox);
        usdLabel1->setObjectName(QString::fromUtf8("usdLabel1"));
        sizePolicy1.setHeightForWidth(usdLabel1->sizePolicy().hasHeightForWidth());
        usdLabel1->setSizePolicy(sizePolicy1);
        usdLabel1->setFont(font);
        usdLabel1->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel1->setAlignment(Qt::AlignCenter);

        buyPriceLayout->addWidget(usdLabel1);

        buyPrice = new QDoubleSpinBox(groupBox);
        buyPrice->setObjectName(QString::fromUtf8("buyPrice"));
        sizePolicy2.setHeightForWidth(buyPrice->sizePolicy().hasHeightForWidth());
        buyPrice->setSizePolicy(sizePolicy2);
        buyPrice->setMinimumSize(QSize(110, 0));
        buyPrice->setDecimals(5);
        buyPrice->setMinimum(0.01);
        buyPrice->setMaximum(1e+09);
        buyPrice->setSingleStep(0.01);

        buyPriceLayout->addWidget(buyPrice);


        gridLayout_2->addLayout(buyPriceLayout, 1, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(20, 0));
        label_9->setFont(font1);
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/Resources/equal.png")));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 1, 3, 1, 1);

        totalPaidLayout = new QHBoxLayout();
        totalPaidLayout->setSpacing(4);
        totalPaidLayout->setObjectName(QString::fromUtf8("totalPaidLayout"));
        totalPaidLayout->setContentsMargins(-1, -1, 0, -1);
        usdLabel2 = new QLabel(groupBox);
        usdLabel2->setObjectName(QString::fromUtf8("usdLabel2"));
        sizePolicy1.setHeightForWidth(usdLabel2->sizePolicy().hasHeightForWidth());
        usdLabel2->setSizePolicy(sizePolicy1);
        usdLabel2->setFont(font);
        usdLabel2->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel2->setAlignment(Qt::AlignCenter);

        totalPaidLayout->addWidget(usdLabel2);

        totalPaid = new QDoubleSpinBox(groupBox);
        totalPaid->setObjectName(QString::fromUtf8("totalPaid"));
        sizePolicy2.setHeightForWidth(totalPaid->sizePolicy().hasHeightForWidth());
        totalPaid->setSizePolicy(sizePolicy2);
        totalPaid->setMinimumSize(QSize(110, 0));
        totalPaid->setDecimals(5);
        totalPaid->setMinimum(0);
        totalPaid->setMaximum(1e+09);
        totalPaid->setSingleStep(0.01);

        totalPaidLayout->addWidget(totalPaid);


        gridLayout_2->addLayout(totalPaidLayout, 1, 4, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(20, 0));
        label_10->setFont(font1);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Resources/minus.png")));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 5, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(4);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(-1, -1, 10, -1);
        btcLabel3 = new QLabel(groupBox);
        btcLabel3->setObjectName(QString::fromUtf8("btcLabel3"));
        sizePolicy1.setHeightForWidth(btcLabel3->sizePolicy().hasHeightForWidth());
        btcLabel3->setSizePolicy(sizePolicy1);
        btcLabel3->setFont(font);
        btcLabel3->setStyleSheet(QString::fromUtf8("color: #996515"));
        btcLabel3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(btcLabel3, 0, 0, 1, 1);

        buyFee = new QDoubleSpinBox(groupBox);
        buyFee->setObjectName(QString::fromUtf8("buyFee"));
        sizePolicy2.setHeightForWidth(buyFee->sizePolicy().hasHeightForWidth());
        buyFee->setSizePolicy(sizePolicy2);
        buyFee->setMinimumSize(QSize(110, 0));
        buyFee->setReadOnly(true);
        buyFee->setButtonSymbols(QAbstractSpinBox::NoButtons);
        buyFee->setDecimals(8);
        buyFee->setMinimum(0);
        buyFee->setMaximum(1e+09);
        buyFee->setSingleStep(0.01);

        gridLayout_8->addWidget(buyFee, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_8, 1, 6, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(20, 0));
        label_11->setFont(font1);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/Resources/equal.png")));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 1, 7, 1, 1);

        receivedLayout = new QHBoxLayout();
        receivedLayout->setSpacing(6);
        receivedLayout->setObjectName(QString::fromUtf8("receivedLayout"));
        btcLabel4 = new QLabel(groupBox);
        btcLabel4->setObjectName(QString::fromUtf8("btcLabel4"));
        sizePolicy1.setHeightForWidth(btcLabel4->sizePolicy().hasHeightForWidth());
        btcLabel4->setSizePolicy(sizePolicy1);
        btcLabel4->setFont(font);
        btcLabel4->setStyleSheet(QString::fromUtf8("color: #996515"));
        btcLabel4->setAlignment(Qt::AlignCenter);

        receivedLayout->addWidget(btcLabel4);

        btcReceived = new QDoubleSpinBox(groupBox);
        btcReceived->setObjectName(QString::fromUtf8("btcReceived"));
        sizePolicy2.setHeightForWidth(btcReceived->sizePolicy().hasHeightForWidth());
        btcReceived->setSizePolicy(sizePolicy2);
        btcReceived->setMinimumSize(QSize(110, 0));
        btcReceived->setDecimals(8);
        btcReceived->setMinimum(0);
        btcReceived->setMaximum(1e+09);
        btcReceived->setSingleStep(0.01);

        receivedLayout->addWidget(btcReceived);


        gridLayout_2->addLayout(receivedLayout, 1, 8, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 2, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_16, 2, 4, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_17, 2, 6, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_18, 2, 8, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(4);
        gridLayout_10->setVerticalSpacing(0);
        gridLayout_10->setContentsMargins(-1, -1, 15, -1);
        btcLabel2 = new QLabel(groupBox);
        btcLabel2->setObjectName(QString::fromUtf8("btcLabel2"));
        sizePolicy1.setHeightForWidth(btcLabel2->sizePolicy().hasHeightForWidth());
        btcLabel2->setSizePolicy(sizePolicy1);
        btcLabel2->setFont(font);
        btcLabel2->setStyleSheet(QString::fromUtf8("color: #996515"));
        btcLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(btcLabel2, 0, 0, 1, 1);

        sellBtc = new QDoubleSpinBox(groupBox);
        sellBtc->setObjectName(QString::fromUtf8("sellBtc"));
        sizePolicy2.setHeightForWidth(sellBtc->sizePolicy().hasHeightForWidth());
        sellBtc->setSizePolicy(sizePolicy2);
        sellBtc->setMinimumSize(QSize(110, 0));
        sellBtc->setReadOnly(true);
        sellBtc->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sellBtc->setDecimals(8);
        sellBtc->setMinimum(0);
        sellBtc->setMaximum(1e+09);
        sellBtc->setSingleStep(0.01);

        gridLayout_10->addWidget(sellBtc, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_10, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(20, 0));
        label_3->setFont(font1);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resources/multiply.png")));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 3, 1, 1, 1);

        sellPriceLayout = new QHBoxLayout();
        sellPriceLayout->setSpacing(4);
        sellPriceLayout->setObjectName(QString::fromUtf8("sellPriceLayout"));
        sellPriceLayout->setContentsMargins(-1, -1, 0, -1);
        usdLabel3 = new QLabel(groupBox);
        usdLabel3->setObjectName(QString::fromUtf8("usdLabel3"));
        sizePolicy1.setHeightForWidth(usdLabel3->sizePolicy().hasHeightForWidth());
        usdLabel3->setSizePolicy(sizePolicy1);
        usdLabel3->setFont(font);
        usdLabel3->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel3->setAlignment(Qt::AlignCenter);

        sellPriceLayout->addWidget(usdLabel3);

        sellPrice = new QDoubleSpinBox(groupBox);
        sellPrice->setObjectName(QString::fromUtf8("sellPrice"));
        sizePolicy2.setHeightForWidth(sellPrice->sizePolicy().hasHeightForWidth());
        sellPrice->setSizePolicy(sizePolicy2);
        sellPrice->setMinimumSize(QSize(110, 0));
        sellPrice->setDecimals(5);
        sellPrice->setMinimum(1e-05);
        sellPrice->setMaximum(1e+09);
        sellPrice->setSingleStep(0.01);

        sellPriceLayout->addWidget(sellPrice);


        gridLayout_2->addLayout(sellPriceLayout, 3, 2, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(20, 0));
        label_12->setFont(font1);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/Resources/equal.png")));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 3, 3, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, 15, -1);
        usdLabel4 = new QLabel(groupBox);
        usdLabel4->setObjectName(QString::fromUtf8("usdLabel4"));
        sizePolicy1.setHeightForWidth(usdLabel4->sizePolicy().hasHeightForWidth());
        usdLabel4->setSizePolicy(sizePolicy1);
        usdLabel4->setFont(font);
        usdLabel4->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel4->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(usdLabel4);

        sellAmount = new QDoubleSpinBox(groupBox);
        sellAmount->setObjectName(QString::fromUtf8("sellAmount"));
        sizePolicy2.setHeightForWidth(sellAmount->sizePolicy().hasHeightForWidth());
        sellAmount->setSizePolicy(sizePolicy2);
        sellAmount->setMinimumSize(QSize(110, 0));
        sellAmount->setReadOnly(true);
        sellAmount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sellAmount->setDecimals(5);
        sellAmount->setMinimum(0);
        sellAmount->setMaximum(1e+09);
        sellAmount->setSingleStep(0.01);

        horizontalLayout_9->addWidget(sellAmount);


        gridLayout_2->addLayout(horizontalLayout_9, 3, 4, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(20, 0));
        label_13->setFont(font1);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/Resources/minus.png")));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 3, 5, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 10, -1);
        usdLabel5 = new QLabel(groupBox);
        usdLabel5->setObjectName(QString::fromUtf8("usdLabel5"));
        sizePolicy1.setHeightForWidth(usdLabel5->sizePolicy().hasHeightForWidth());
        usdLabel5->setSizePolicy(sizePolicy1);
        usdLabel5->setFont(font);
        usdLabel5->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel5->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(usdLabel5);

        sellFee = new QDoubleSpinBox(groupBox);
        sellFee->setObjectName(QString::fromUtf8("sellFee"));
        sizePolicy2.setHeightForWidth(sellFee->sizePolicy().hasHeightForWidth());
        sellFee->setSizePolicy(sizePolicy2);
        sellFee->setMinimumSize(QSize(110, 0));
        sellFee->setReadOnly(true);
        sellFee->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sellFee->setDecimals(5);
        sellFee->setMinimum(0);
        sellFee->setMaximum(1e+09);
        sellFee->setSingleStep(0.01);

        horizontalLayout_10->addWidget(sellFee);


        gridLayout_2->addLayout(horizontalLayout_10, 3, 6, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(20, 0));
        label_14->setFont(font1);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/Resources/equal.png")));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_14, 3, 7, 1, 1);

        fiatReceivedLayout = new QHBoxLayout();
        fiatReceivedLayout->setSpacing(4);
        fiatReceivedLayout->setObjectName(QString::fromUtf8("fiatReceivedLayout"));
        fiatReceivedLayout->setContentsMargins(-1, -1, 15, -1);
        usdLabel6 = new QLabel(groupBox);
        usdLabel6->setObjectName(QString::fromUtf8("usdLabel6"));
        sizePolicy1.setHeightForWidth(usdLabel6->sizePolicy().hasHeightForWidth());
        usdLabel6->setSizePolicy(sizePolicy1);
        usdLabel6->setFont(font);
        usdLabel6->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel6->setAlignment(Qt::AlignCenter);

        fiatReceivedLayout->addWidget(usdLabel6);

        sellFiatReceived = new QDoubleSpinBox(groupBox);
        sellFiatReceived->setObjectName(QString::fromUtf8("sellFiatReceived"));
        sizePolicy2.setHeightForWidth(sellFiatReceived->sizePolicy().hasHeightForWidth());
        sellFiatReceived->setSizePolicy(sizePolicy2);
        sellFiatReceived->setMinimumSize(QSize(110, 0));
        sellFiatReceived->setReadOnly(true);
        sellFiatReceived->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sellFiatReceived->setDecimals(5);
        sellFiatReceived->setMinimum(0);
        sellFiatReceived->setMaximum(1e+09);
        sellFiatReceived->setSingleStep(0.01);

        fiatReceivedLayout->addWidget(sellFiatReceived);


        gridLayout_2->addLayout(fiatReceivedLayout, 3, 8, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_19, 4, 8, 1, 1);

        feeLayout = new QHBoxLayout();
        feeLayout->setSpacing(6);
        feeLayout->setObjectName(QString::fromUtf8("feeLayout"));
        feeLayout->setContentsMargins(-1, -1, 4, -1);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        feeLayout->addWidget(label_20);

        feeValue = new QDoubleSpinBox(groupBox);
        feeValue->setObjectName(QString::fromUtf8("feeValue"));
        sizePolicy2.setHeightForWidth(feeValue->sizePolicy().hasHeightForWidth());
        feeValue->setSizePolicy(sizePolicy2);
        feeValue->setMinimumSize(QSize(0, 0));
        feeValue->setAlignment(Qt::AlignCenter);
        feeValue->setDecimals(2);
        feeValue->setMinimum(0);
        feeValue->setMaximum(10);
        feeValue->setSingleStep(0.01);
        feeValue->setValue(0.6);

        feeLayout->addWidget(feeValue);


        gridLayout_2->addLayout(feeLayout, 5, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(4);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, 15, -1);
        usdLabel7 = new QLabel(groupBox);
        usdLabel7->setObjectName(QString::fromUtf8("usdLabel7"));
        sizePolicy1.setHeightForWidth(usdLabel7->sizePolicy().hasHeightForWidth());
        usdLabel7->setSizePolicy(sizePolicy1);
        usdLabel7->setFont(font);
        usdLabel7->setStyleSheet(QString::fromUtf8("color: darkgreen"));
        usdLabel7->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(usdLabel7);

        profitLoss = new QDoubleSpinBox(groupBox);
        profitLoss->setObjectName(QString::fromUtf8("profitLoss"));
        sizePolicy2.setHeightForWidth(profitLoss->sizePolicy().hasHeightForWidth());
        profitLoss->setSizePolicy(sizePolicy2);
        profitLoss->setMinimumSize(QSize(110, 0));
        profitLoss->setReadOnly(true);
        profitLoss->setButtonSymbols(QAbstractSpinBox::NoButtons);
        profitLoss->setDecimals(5);
        profitLoss->setMinimum(-1e+09);
        profitLoss->setMaximum(1e+09);
        profitLoss->setSingleStep(0.01);

        horizontalLayout_12->addWidget(profitLoss);


        gridLayout_2->addLayout(horizontalLayout_12, 5, 8, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        setZeroProfitButton = new QPushButton(groupBox);
        setZeroProfitButton->setObjectName(QString::fromUtf8("setZeroProfitButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(setZeroProfitButton->sizePolicy().hasHeightForWidth());
        setZeroProfitButton->setSizePolicy(sizePolicy3);
        setZeroProfitButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(setZeroProfitButton);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widgetStaysOnTop = new QCheckBox(groupBox);
        widgetStaysOnTop->setObjectName(QString::fromUtf8("widgetStaysOnTop"));

        horizontalLayout_2->addWidget(widgetStaysOnTop);

        singleInstance = new QCheckBox(groupBox);
        singleInstance->setObjectName(QString::fromUtf8("singleInstance"));

        horizontalLayout_2->addWidget(singleInstance);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 2, 1, 6);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(buyTotalBtc);
        label_4->setBuddy(buyPrice);
        label_5->setBuddy(totalPaid);
        label_7->setBuddy(buyFee);
        label_8->setBuddy(btcReceived);
        btcLabel1->setBuddy(buyTotalBtc);
        usdLabel1->setBuddy(buyPrice);
        usdLabel2->setBuddy(totalPaid);
        btcLabel3->setBuddy(buyFee);
        btcLabel4->setBuddy(btcReceived);
        label_15->setBuddy(sellBtc);
        label_6->setBuddy(sellPrice);
        label_16->setBuddy(sellAmount);
        label_17->setBuddy(sellFee);
        label_18->setBuddy(sellFiatReceived);
        btcLabel2->setBuddy(sellBtc);
        usdLabel3->setBuddy(sellPrice);
        usdLabel4->setBuddy(sellAmount);
        usdLabel5->setBuddy(sellFee);
        usdLabel6->setBuddy(sellFiatReceived);
        label_19->setBuddy(profitLoss);
        label_20->setBuddy(feeValue);
        usdLabel7->setBuddy(profitLoss);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(buyTotalBtc, buyPrice);
        QWidget::setTabOrder(buyPrice, totalPaid);
        QWidget::setTabOrder(totalPaid, buyFee);
        QWidget::setTabOrder(buyFee, btcReceived);
        QWidget::setTabOrder(btcReceived, sellBtc);
        QWidget::setTabOrder(sellBtc, sellPrice);
        QWidget::setTabOrder(sellPrice, sellAmount);
        QWidget::setTabOrder(sellAmount, sellFee);
        QWidget::setTabOrder(sellFee, sellFiatReceived);
        QWidget::setTabOrder(sellFiatReceived, profitLoss);
        QWidget::setTabOrder(profitLoss, feeValue);

        retranslateUi(FeeCalculator);
        QObject::connect(buyTotalBtc, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(buyBtcChanged(double)));
        QObject::connect(buyPrice, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(buyPriceChanged(double)));
        QObject::connect(totalPaid, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(buyTotalPaidChanged(double)));
        QObject::connect(btcReceived, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(buyBtcReceivedChanged(double)));
        QObject::connect(sellPrice, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(sellPriceChanged(double)));
        QObject::connect(sellAmount, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(sellAmountChanged(double)));
        QObject::connect(sellFiatReceived, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(sellFiatReceived(double)));
        QObject::connect(feeValue, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(feeChanged(double)));
        QObject::connect(profitLoss, SIGNAL(valueChanged(double)), FeeCalculator, SLOT(profitLossChanged(double)));
        QObject::connect(setZeroProfitButton, SIGNAL(clicked()), FeeCalculator, SLOT(setZeroProfitPrice()));
        QObject::connect(widgetStaysOnTop, SIGNAL(toggled(bool)), FeeCalculator, SLOT(setStaysOnTop(bool)));

        QMetaObject::connectSlotsByName(FeeCalculator);
    } // setupUi

    void retranslateUi(QWidget *FeeCalculator)
    {
        FeeCalculator->setWindowTitle(QApplication::translate("FeeCalculator", "Mt.Gox Fee Calculator", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("FeeCalculator", "TR00084", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("FeeCalculator", "Buy BTC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleName(QApplication::translate("FeeCalculator", "TR00085", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("FeeCalculator", "Price", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_5->setAccessibleName(QApplication::translate("FeeCalculator", "TR00086", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("FeeCalculator", "Total Paid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QApplication::translate("FeeCalculator", "TR00087", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("FeeCalculator", "Fee (BTC)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_8->setAccessibleName(QApplication::translate("FeeCalculator", "TR00088", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("FeeCalculator", "Btc (Received)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        btcLabel1->setAccessibleDescription(QApplication::translate("FeeCalculator", "BTC_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        btcLabel1->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        buyTotalBtc->setAccessibleName(QApplication::translate("FeeCalculator", "BTC", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buyTotalBtc->setPrefix(QString());
        label_2->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel1->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel1->setText(QString());
#ifndef QT_NO_WHATSTHIS
        buyPrice->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        buyPrice->setAccessibleName(QApplication::translate("FeeCalculator", "PRICE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buyPrice->setPrefix(QString());
        label_9->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel2->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        totalPaid->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        totalPaid->setAccessibleName(QApplication::translate("FeeCalculator", "USD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        totalPaid->setPrefix(QString());
        label_10->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btcLabel3->setAccessibleDescription(QApplication::translate("FeeCalculator", "BTC_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        btcLabel3->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        buyFee->setAccessibleName(QApplication::translate("FeeCalculator", "BTC", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        buyFee->setAccessibleDescription(QApplication::translate("FeeCalculator", "CAN_BE_ZERO", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buyFee->setPrefix(QString());
        label_11->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btcLabel4->setAccessibleDescription(QApplication::translate("FeeCalculator", "BTC_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        btcLabel4->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        btcReceived->setAccessibleName(QApplication::translate("FeeCalculator", "BTC", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        btcReceived->setPrefix(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_15->setAccessibleName(QApplication::translate("FeeCalculator", "TR00089", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_15->setText(QApplication::translate("FeeCalculator", "Sell BTC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_6->setAccessibleName(QApplication::translate("FeeCalculator", "TR00090", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("FeeCalculator", "Price", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_16->setAccessibleName(QApplication::translate("FeeCalculator", "TR00091", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_16->setText(QApplication::translate("FeeCalculator", "Amount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_17->setAccessibleName(QApplication::translate("FeeCalculator", "TR00092", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_17->setText(QApplication::translate("FeeCalculator", "Fee", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_18->setAccessibleName(QApplication::translate("FeeCalculator", "TR00093", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_18->setText(QApplication::translate("FeeCalculator", "Fiat (Received)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        btcLabel2->setAccessibleDescription(QApplication::translate("FeeCalculator", "BTC_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        btcLabel2->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        sellBtc->setAccessibleName(QApplication::translate("FeeCalculator", "BTC", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sellBtc->setAccessibleDescription(QApplication::translate("FeeCalculator", "CAN_BE_ZERO", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        sellBtc->setPrefix(QString());
        label_3->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel3->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel3->setText(QString());
#ifndef QT_NO_WHATSTHIS
        sellPrice->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        sellPrice->setAccessibleName(QApplication::translate("FeeCalculator", "PRICE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        sellPrice->setPrefix(QString());
        label_12->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel4->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel4->setText(QString());
#ifndef QT_NO_WHATSTHIS
        sellAmount->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        sellAmount->setAccessibleName(QApplication::translate("FeeCalculator", "USD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sellAmount->setAccessibleDescription(QApplication::translate("FeeCalculator", "CAN_BE_ZERO", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        sellAmount->setPrefix(QString());
        label_13->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel5->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel5->setText(QString());
#ifndef QT_NO_WHATSTHIS
        sellFee->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        sellFee->setAccessibleName(QApplication::translate("FeeCalculator", "USD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sellFee->setAccessibleDescription(QApplication::translate("FeeCalculator", "CAN_BE_ZERO", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        sellFee->setPrefix(QString());
        label_14->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        usdLabel6->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel6->setText(QString());
#ifndef QT_NO_WHATSTHIS
        sellFiatReceived->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        sellFiatReceived->setAccessibleName(QApplication::translate("FeeCalculator", "USD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sellFiatReceived->setAccessibleDescription(QApplication::translate("FeeCalculator", "CAN_BE_ZERO", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        sellFiatReceived->setPrefix(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_19->setAccessibleName(QApplication::translate("FeeCalculator", "TR00094", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_19->setText(QApplication::translate("FeeCalculator", "Profit/Loss", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_20->setAccessibleName(QApplication::translate("FeeCalculator", "TR00095", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_20->setText(QApplication::translate("FeeCalculator", "Fee:", 0, QApplication::UnicodeUTF8));
        feeValue->setPrefix(QString());
        feeValue->setSuffix(QApplication::translate("FeeCalculator", " %", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        usdLabel7->setAccessibleDescription(QApplication::translate("FeeCalculator", "USD_ICON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        usdLabel7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        profitLoss->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        profitLoss->setAccessibleName(QApplication::translate("FeeCalculator", "USD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        profitLoss->setPrefix(QString());
#ifndef QT_NO_ACCESSIBILITY
        setZeroProfitButton->setAccessibleName(QApplication::translate("FeeCalculator", "TR00096", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        setZeroProfitButton->setText(QApplication::translate("FeeCalculator", " Zero profit Price", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        widgetStaysOnTop->setAccessibleName(QApplication::translate("FeeCalculator", "STAYS_ON_TOP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        widgetStaysOnTop->setText(QApplication::translate("FeeCalculator", "Stay on Top", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        singleInstance->setAccessibleName(QApplication::translate("FeeCalculator", "FEECALC_SINGLE_INSTANCE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        singleInstance->setText(QApplication::translate("FeeCalculator", "Single instance", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FeeCalculator: public Ui_FeeCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEECALCULATOR_H
