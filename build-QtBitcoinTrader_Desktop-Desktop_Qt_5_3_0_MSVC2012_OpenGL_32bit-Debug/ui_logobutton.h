/********************************************************************************
** Form generated from reading UI file 'logobutton.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOBUTTON_H
#define UI_LOGOBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogoButton
{
public:
    QLabel *logo;

    void setupUi(QWidget *LogoButton)
    {
        if (LogoButton->objectName().isEmpty())
            LogoButton->setObjectName(QString::fromUtf8("LogoButton"));
        LogoButton->resize(540, 479);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogoButton->sizePolicy().hasHeightForWidth());
        LogoButton->setSizePolicy(sizePolicy);
        LogoButton->setStyleSheet(QString::fromUtf8(""));
        logo = new QLabel(LogoButton);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(70, 70, 381, 291));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy1);
        logo->setMinimumSize(QSize(40, 40));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/CentrabitDay.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        retranslateUi(LogoButton);

        QMetaObject::connectSlotsByName(LogoButton);
    } // setupUi

    void retranslateUi(QWidget *LogoButton)
    {
        LogoButton->setWindowTitle(QApplication::translate("LogoButton", "LogoButton", 0, QApplication::UnicodeUTF8));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogoButton: public Ui_LogoButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOBUTTON_H
