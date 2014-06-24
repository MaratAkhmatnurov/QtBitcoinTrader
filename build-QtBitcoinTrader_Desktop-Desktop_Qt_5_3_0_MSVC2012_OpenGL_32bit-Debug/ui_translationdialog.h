/********************************************************************************
** Form generated from reading UI file 'translationdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATIONDIALOG_H
#define UI_TRANSLATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranslationDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *makeYourTranslationButton;
    QGridLayout *gridLayout;
    QLineEdit *languageName;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QLabel *label;
    QLabel *labelHowTo;
    QGroupBox *searchGroupBox;
    QGridLayout *gridLayout_3;
    QLineEdit *searchLineEdit;
    QToolButton *buttonClearSearch;
    QGridLayout *authorLayout;
    QPushButton *buttonApply;
    QPushButton *buttonSaveAs;
    QPushButton *deleteTranslationButton;

    void setupUi(QDialog *TranslationDialog)
    {
        if (TranslationDialog->objectName().isEmpty())
            TranslationDialog->setObjectName(QString::fromUtf8("TranslationDialog"));
        TranslationDialog->resize(400, 435);
        gridLayout_2 = new QGridLayout(TranslationDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        makeYourTranslationButton = new QGroupBox(TranslationDialog);
        makeYourTranslationButton->setObjectName(QString::fromUtf8("makeYourTranslationButton"));
        gridLayout = new QGridLayout(makeYourTranslationButton);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        languageName = new QLineEdit(makeYourTranslationButton);
        languageName->setObjectName(QString::fromUtf8("languageName"));

        gridLayout->addWidget(languageName, 1, 1, 1, 2);

        scrollArea = new QScrollArea(makeYourTranslationButton);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 360, 191));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 3, 0, 1, 3);

        label_2 = new QLabel(makeYourTranslationButton);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(makeYourTranslationButton);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelHowTo = new QLabel(makeYourTranslationButton);
        labelHowTo->setObjectName(QString::fromUtf8("labelHowTo"));
        labelHowTo->setAlignment(Qt::AlignCenter);
        labelHowTo->setWordWrap(true);
        labelHowTo->setOpenExternalLinks(true);

        gridLayout->addWidget(labelHowTo, 0, 0, 1, 3);

        searchGroupBox = new QGroupBox(makeYourTranslationButton);
        searchGroupBox->setObjectName(QString::fromUtf8("searchGroupBox"));
        gridLayout_3 = new QGridLayout(searchGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        searchLineEdit = new QLineEdit(searchGroupBox);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        gridLayout_3->addWidget(searchLineEdit, 0, 0, 1, 1);

        buttonClearSearch = new QToolButton(searchGroupBox);
        buttonClearSearch->setObjectName(QString::fromUtf8("buttonClearSearch"));

        gridLayout_3->addWidget(buttonClearSearch, 0, 1, 1, 1);


        gridLayout->addWidget(searchGroupBox, 4, 0, 1, 3);

        authorLayout = new QGridLayout();
        authorLayout->setSpacing(6);
        authorLayout->setObjectName(QString::fromUtf8("authorLayout"));

        gridLayout->addLayout(authorLayout, 2, 1, 1, 2);


        gridLayout_2->addWidget(makeYourTranslationButton, 0, 0, 1, 3);

        buttonApply = new QPushButton(TranslationDialog);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));

        gridLayout_2->addWidget(buttonApply, 1, 0, 1, 1);

        buttonSaveAs = new QPushButton(TranslationDialog);
        buttonSaveAs->setObjectName(QString::fromUtf8("buttonSaveAs"));

        gridLayout_2->addWidget(buttonSaveAs, 1, 2, 1, 1);

        deleteTranslationButton = new QPushButton(TranslationDialog);
        deleteTranslationButton->setObjectName(QString::fromUtf8("deleteTranslationButton"));

        gridLayout_2->addWidget(deleteTranslationButton, 1, 1, 1, 1);

        QWidget::setTabOrder(languageName, scrollArea);
        QWidget::setTabOrder(scrollArea, searchLineEdit);
        QWidget::setTabOrder(searchLineEdit, buttonClearSearch);
        QWidget::setTabOrder(buttonClearSearch, buttonApply);
        QWidget::setTabOrder(buttonApply, buttonSaveAs);

        retranslateUi(TranslationDialog);
        QObject::connect(buttonApply, SIGNAL(clicked()), TranslationDialog, SLOT(applyButton()));
        QObject::connect(buttonSaveAs, SIGNAL(clicked()), TranslationDialog, SLOT(saveAsButton()));
        QObject::connect(buttonClearSearch, SIGNAL(clicked()), searchLineEdit, SLOT(clear()));
        QObject::connect(searchLineEdit, SIGNAL(textChanged(QString)), TranslationDialog, SLOT(searchLang(QString)));
        QObject::connect(deleteTranslationButton, SIGNAL(clicked()), TranslationDialog, SLOT(deleteTranslationButton()));

        QMetaObject::connectSlotsByName(TranslationDialog);
    } // setupUi

    void retranslateUi(QDialog *TranslationDialog)
    {
        TranslationDialog->setWindowTitle(QApplication::translate("TranslationDialog", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        makeYourTranslationButton->setAccessibleName(QApplication::translate("TranslationDialog", "MAKE_YOUR_TRANSLATION", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        makeYourTranslationButton->setTitle(QApplication::translate("TranslationDialog", "Make your translation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("TranslationDialog", "TR00116", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("TranslationDialog", "Author:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("TranslationDialog", "TR00047", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("TranslationDialog", "Language:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        labelHowTo->setAccessibleName(QApplication::translate("TranslationDialog", "HOW_TO_TRANSLATE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        labelHowTo->setText(QApplication::translate("TranslationDialog", "Please fill all fields. Than press Apply button and verify that translation looks good. Save translation file and send it to <a href=\"mailto:julyighor@gmail.com\">julyighor@gmail.com</a><br>\n"
"After verification your translation will be added to next Qt Bitcoin Traderreleases.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        searchGroupBox->setAccessibleName(QApplication::translate("TranslationDialog", "LANG_FILTER", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        searchGroupBox->setTitle(QApplication::translate("TranslationDialog", "Filter", 0, QApplication::UnicodeUTF8));
        buttonClearSearch->setText(QApplication::translate("TranslationDialog", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        buttonApply->setAccessibleName(QApplication::translate("TranslationDialog", "TR00039", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonApply->setText(QApplication::translate("TranslationDialog", "Apply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        buttonSaveAs->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        buttonSaveAs->setAccessibleName(QApplication::translate("TranslationDialog", "SAVE_AS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonSaveAs->setText(QApplication::translate("TranslationDialog", "Save As", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        deleteTranslationButton->setAccessibleName(QApplication::translate("TranslationDialog", "DELETE_TRANSLATION", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        deleteTranslationButton->setText(QApplication::translate("TranslationDialog", "Delete Translation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranslationDialog: public Ui_TranslationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLATIONDIALOG_H
