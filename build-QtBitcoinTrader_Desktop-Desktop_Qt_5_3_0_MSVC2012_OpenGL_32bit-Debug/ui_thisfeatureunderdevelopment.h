/********************************************************************************
** Form generated from reading UI file 'thisfeatureunderdevelopment.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THISFEATUREUNDERDEVELOPMENT_H
#define UI_THISFEATUREUNDERDEVELOPMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ThisFeatureUnderDevelopment
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *donateGroupBoxBottom;
    QSpacerItem *verticalSpacer;
    QLabel *labelNotAvailable;

    void setupUi(QDialog *ThisFeatureUnderDevelopment)
    {
        if (ThisFeatureUnderDevelopment->objectName().isEmpty())
            ThisFeatureUnderDevelopment->setObjectName(QString::fromUtf8("ThisFeatureUnderDevelopment"));
        ThisFeatureUnderDevelopment->resize(380, 255);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThisFeatureUnderDevelopment->sizePolicy().hasHeightForWidth());
        ThisFeatureUnderDevelopment->setSizePolicy(sizePolicy);
        ThisFeatureUnderDevelopment->setMinimumSize(QSize(380, 0));
        gridLayout = new QGridLayout(ThisFeatureUnderDevelopment);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 3, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 3, 1);

        donateGroupBoxBottom = new QGroupBox(ThisFeatureUnderDevelopment);
        donateGroupBoxBottom->setObjectName(QString::fromUtf8("donateGroupBoxBottom"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(donateGroupBoxBottom->sizePolicy().hasHeightForWidth());
        donateGroupBoxBottom->setSizePolicy(sizePolicy1);
        donateGroupBoxBottom->setMinimumSize(QSize(0, 50));
        donateGroupBoxBottom->setMaximumSize(QSize(480, 16777215));
        donateGroupBoxBottom->setStyleSheet(QString::fromUtf8("border: 0px; background: transparent;"));

        gridLayout->addWidget(donateGroupBoxBottom, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        labelNotAvailable = new QLabel(ThisFeatureUnderDevelopment);
        labelNotAvailable->setObjectName(QString::fromUtf8("labelNotAvailable"));
        sizePolicy1.setHeightForWidth(labelNotAvailable->sizePolicy().hasHeightForWidth());
        labelNotAvailable->setSizePolicy(sizePolicy1);
        labelNotAvailable->setMinimumSize(QSize(300, 120));
        QFont font;
        font.setPointSize(10);
        labelNotAvailable->setFont(font);
        labelNotAvailable->setStyleSheet(QString::fromUtf8("background: white; border-radius: 8px; border: 1px solid gray;"));
        labelNotAvailable->setFrameShape(QFrame::NoFrame);
        labelNotAvailable->setTextFormat(Qt::RichText);
        labelNotAvailable->setScaledContents(false);
        labelNotAvailable->setAlignment(Qt::AlignCenter);
        labelNotAvailable->setWordWrap(true);
        labelNotAvailable->setMargin(10);
        labelNotAvailable->setOpenExternalLinks(true);
        labelNotAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelNotAvailable, 0, 1, 1, 1);


        retranslateUi(ThisFeatureUnderDevelopment);

        QMetaObject::connectSlotsByName(ThisFeatureUnderDevelopment);
    } // setupUi

    void retranslateUi(QDialog *ThisFeatureUnderDevelopment)
    {
        ThisFeatureUnderDevelopment->setWindowTitle(QApplication::translate("ThisFeatureUnderDevelopment", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        donateGroupBoxBottom->setAccessibleName(QApplication::translate("ThisFeatureUnderDevelopment", "LOGOBUTTON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        donateGroupBoxBottom->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        labelNotAvailable->setAccessibleName(QApplication::translate("ThisFeatureUnderDevelopment", "THIS_FEATURE_IS_NOT_AVAILABLE_NOW", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelNotAvailable->setAccessibleDescription(QApplication::translate("ThisFeatureUnderDevelopment", "IGNORED", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        labelNotAvailable->setText(QApplication::translate("ThisFeatureUnderDevelopment", "This feature is not available now.<br>I'm still working on it.<br>You will receive update notify at same time it released.<br>Thank you for support and feedbacks!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThisFeatureUnderDevelopment: public Ui_ThisFeatureUnderDevelopment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THISFEATUREUNDERDEVELOPMENT_H
