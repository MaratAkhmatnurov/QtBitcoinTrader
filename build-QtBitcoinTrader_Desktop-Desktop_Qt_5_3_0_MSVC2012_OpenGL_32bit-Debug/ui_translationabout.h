/********************************************************************************
** Form generated from reading UI file 'translationabout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATIONABOUT_H
#define UI_TRANSLATIONABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TranslationAbout
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *createTranslationGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *translateLabel1;
    QLabel *translateLabel3;
    QLabel *translateLabel2;
    QPushButton *createTranslationButton;
    QGroupBox *aboutBitcoinTraderGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *aboutTextLabel;
    QGroupBox *aboutTranslationGroupBox;
    QGridLayout *gridLayout;
    QLabel *langLabel;
    QLineEdit *languageField;
    QLabel *label_2;
    QLabel *translationAuthor;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonCheckUpdates;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *TranslationAbout)
    {
        if (TranslationAbout->objectName().isEmpty())
            TranslationAbout->setObjectName(QString::fromUtf8("TranslationAbout"));
        TranslationAbout->resize(612, 344);
        TranslationAbout->setMaximumSize(QSize(700, 450));
        gridLayout_2 = new QGridLayout(TranslationAbout);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        createTranslationGroupBox = new QGroupBox(TranslationAbout);
        createTranslationGroupBox->setObjectName(QString::fromUtf8("createTranslationGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(createTranslationGroupBox->sizePolicy().hasHeightForWidth());
        createTranslationGroupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(createTranslationGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        translateLabel1 = new QLabel(createTranslationGroupBox);
        translateLabel1->setObjectName(QString::fromUtf8("translateLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(translateLabel1->sizePolicy().hasHeightForWidth());
        translateLabel1->setSizePolicy(sizePolicy1);
        translateLabel1->setAlignment(Qt::AlignCenter);
        translateLabel1->setWordWrap(true);
        translateLabel1->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_3->addWidget(translateLabel1, 0, 0, 1, 3);

        translateLabel3 = new QLabel(createTranslationGroupBox);
        translateLabel3->setObjectName(QString::fromUtf8("translateLabel3"));
        sizePolicy1.setHeightForWidth(translateLabel3->sizePolicy().hasHeightForWidth());
        translateLabel3->setSizePolicy(sizePolicy1);
        translateLabel3->setAlignment(Qt::AlignCenter);
        translateLabel3->setWordWrap(true);
        translateLabel3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(translateLabel3, 2, 0, 1, 3);

        translateLabel2 = new QLabel(createTranslationGroupBox);
        translateLabel2->setObjectName(QString::fromUtf8("translateLabel2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(translateLabel2->sizePolicy().hasHeightForWidth());
        translateLabel2->setSizePolicy(sizePolicy2);
        translateLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        translateLabel2->setWordWrap(true);
        translateLabel2->setOpenExternalLinks(true);
        translateLabel2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(translateLabel2, 1, 0, 1, 3);

        createTranslationButton = new QPushButton(createTranslationGroupBox);
        createTranslationButton->setObjectName(QString::fromUtf8("createTranslationButton"));

        gridLayout_3->addWidget(createTranslationButton, 3, 0, 1, 3);


        gridLayout_2->addWidget(createTranslationGroupBox, 0, 1, 2, 1);

        aboutBitcoinTraderGroupBox = new QGroupBox(TranslationAbout);
        aboutBitcoinTraderGroupBox->setObjectName(QString::fromUtf8("aboutBitcoinTraderGroupBox"));
        sizePolicy2.setHeightForWidth(aboutBitcoinTraderGroupBox->sizePolicy().hasHeightForWidth());
        aboutBitcoinTraderGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(aboutBitcoinTraderGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        aboutTextLabel = new QLabel(aboutBitcoinTraderGroupBox);
        aboutTextLabel->setObjectName(QString::fromUtf8("aboutTextLabel"));
        sizePolicy1.setHeightForWidth(aboutTextLabel->sizePolicy().hasHeightForWidth());
        aboutTextLabel->setSizePolicy(sizePolicy1);
        aboutTextLabel->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 1px solid gray; background: white; padding:6px}"));
        aboutTextLabel->setAlignment(Qt::AlignCenter);
        aboutTextLabel->setWordWrap(true);
        aboutTextLabel->setOpenExternalLinks(true);
        aboutTextLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(aboutTextLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(aboutBitcoinTraderGroupBox, 0, 0, 1, 1);

        aboutTranslationGroupBox = new QGroupBox(TranslationAbout);
        aboutTranslationGroupBox->setObjectName(QString::fromUtf8("aboutTranslationGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(aboutTranslationGroupBox->sizePolicy().hasHeightForWidth());
        aboutTranslationGroupBox->setSizePolicy(sizePolicy3);
        aboutTranslationGroupBox->setMinimumSize(QSize(0, 120));
        aboutTranslationGroupBox->setMaximumSize(QSize(16777215, 140));
        gridLayout = new QGridLayout(aboutTranslationGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        langLabel = new QLabel(aboutTranslationGroupBox);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(langLabel, 0, 0, 1, 1);

        languageField = new QLineEdit(aboutTranslationGroupBox);
        languageField->setObjectName(QString::fromUtf8("languageField"));
        languageField->setAlignment(Qt::AlignCenter);
        languageField->setReadOnly(true);

        gridLayout->addWidget(languageField, 0, 1, 1, 1);

        label_2 = new QLabel(aboutTranslationGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        translationAuthor = new QLabel(aboutTranslationGroupBox);
        translationAuthor->setObjectName(QString::fromUtf8("translationAuthor"));
        translationAuthor->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 1px solid gray; background: white; padding:6px}"));
        translationAuthor->setAlignment(Qt::AlignCenter);
        translationAuthor->setWordWrap(true);
        translationAuthor->setOpenExternalLinks(true);
        translationAuthor->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(translationAuthor, 1, 1, 1, 1);


        gridLayout_2->addWidget(aboutTranslationGroupBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonCheckUpdates = new QPushButton(TranslationAbout);
        buttonCheckUpdates->setObjectName(QString::fromUtf8("buttonCheckUpdates"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonCheckUpdates->sizePolicy().hasHeightForWidth());
        buttonCheckUpdates->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(buttonCheckUpdates);

        horizontalSpacer = new QSpacerItem(289, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(TranslationAbout);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(TranslationAbout);
        QObject::connect(createTranslationButton, SIGNAL(clicked()), TranslationAbout, SLOT(createTranslation()));
        QObject::connect(okButton, SIGNAL(clicked()), TranslationAbout, SLOT(accept()));
        QObject::connect(buttonCheckUpdates, SIGNAL(clicked()), TranslationAbout, SLOT(buttonCheckUpdates()));

        QMetaObject::connectSlotsByName(TranslationAbout);
    } // setupUi

    void retranslateUi(QDialog *TranslationAbout)
    {
        TranslationAbout->setWindowTitle(QApplication::translate("TranslationAbout", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        createTranslationGroupBox->setAccessibleName(QApplication::translate("TranslationAbout", "TR00117", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        createTranslationGroupBox->setTitle(QApplication::translate("TranslationAbout", "Create translation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        translateLabel1->setAccessibleName(QApplication::translate("TranslationAbout", "TR00118", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        translateLabel1->setText(QApplication::translate("TranslationAbout", "If you want to translate Qt Bitcoin Trader to your native language.<br>\n"
"Or if you want to fix errors in existing translation.<br>Please follow instructions.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        translateLabel3->setAccessibleName(QApplication::translate("TranslationAbout", "TR00120", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        translateLabel3->setText(QApplication::translate("TranslationAbout", "And after verification your translation will be added<br>to next version of Qt Bitcoin Trader.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        translateLabel2->setAccessibleName(QApplication::translate("TranslationAbout", "TR00119", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        translateLabel2->setText(QApplication::translate("TranslationAbout", "1) Press &quot;Create translation button&quot;<br>\n"
"2) Make your changes for all fields. You can use Html formatting<br>\n"
"3) Press &quot;Apply&quot; button and varify that all text fits good<br>\n"
"4) Press &quot;Save As&quot; button and safe language file<br>\n"
"5) Send language file to <a href=\"mailto:julyighor@gmail.com\"> julyighor@gmail.com</a>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        createTranslationButton->setAccessibleName(QApplication::translate("TranslationAbout", "TR00121", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        createTranslationButton->setText(QApplication::translate("TranslationAbout", "Create translation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        aboutBitcoinTraderGroupBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        aboutBitcoinTraderGroupBox->setTitle(QApplication::translate("TranslationAbout", "About Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        aboutTextLabel->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        aboutTextLabel->setText(QApplication::translate("TranslationAbout", "Qt Bitcoin Trader is a free Open Source project<br>developed on pure C++ Qt and OpenSSL.<br>\n"
"If you want to help make project better please donate: <a href=\"bitcoin:1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc\">1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc</a><br>\n"
"Feel free to send me recommendations and fixes to: <a href=\"mailto:julyighor@gmail.com\">julyighor@gmail.com</a><br>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        aboutTranslationGroupBox->setAccessibleName(QApplication::translate("TranslationAbout", "ABOUT_TRANSLATION", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        aboutTranslationGroupBox->setTitle(QApplication::translate("TranslationAbout", "About Translation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        langLabel->setAccessibleName(QApplication::translate("TranslationAbout", "TR00115", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        langLabel->setText(QApplication::translate("TranslationAbout", "Language:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("TranslationAbout", "TR00116", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("TranslationAbout", "Translator:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        translationAuthor->setAccessibleName(QApplication::translate("TranslationAbout", "TR00116", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        translationAuthor->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        buttonCheckUpdates->setAccessibleName(QApplication::translate("TranslationAbout", "CHECK_FOR_UPDATE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonCheckUpdates->setText(QApplication::translate("TranslationAbout", "Check for Updates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("TranslationAbout", "TRCLOSE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("TranslationAbout", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranslationAbout: public Ui_TranslationAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLATIONABOUT_H
