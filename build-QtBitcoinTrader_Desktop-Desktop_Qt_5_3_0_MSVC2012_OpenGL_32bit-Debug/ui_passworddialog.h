/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGroupBox *passInformText;
    QGridLayout *gridLayout;
    QLabel *labelPassword;
    QLabel *labelPassword_2;
    QComboBox *profileComboBox;
    QLabel *label;
    QToolButton *toolButton;
    QToolButton *removeButton;
    QToolButton *removeButton_2;
    QLineEdit *passwordEdit;
    QCheckBox *updateCheckBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->resize(450, 171);
        PasswordDialog->setMinimumSize(QSize(450, 0));
        gridLayout_2 = new QGridLayout(PasswordDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okButton = new QPushButton(PasswordDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(okButton, 1, 5, 1, 1);

        cancelButton = new QPushButton(PasswordDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cancelButton, 1, 4, 1, 1);

        passInformText = new QGroupBox(PasswordDialog);
        passInformText->setObjectName(QString::fromUtf8("passInformText"));
        gridLayout = new QGridLayout(passInformText);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPassword = new QLabel(passInformText);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPassword->sizePolicy().hasHeightForWidth());
        labelPassword->setSizePolicy(sizePolicy1);
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword, 2, 0, 1, 1);

        labelPassword_2 = new QLabel(passInformText);
        labelPassword_2->setObjectName(QString::fromUtf8("labelPassword_2"));
        sizePolicy1.setHeightForWidth(labelPassword_2->sizePolicy().hasHeightForWidth());
        labelPassword_2->setSizePolicy(sizePolicy1);
        labelPassword_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_2, 1, 0, 1, 1);

        profileComboBox = new QComboBox(passInformText);
        profileComboBox->setObjectName(QString::fromUtf8("profileComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(profileComboBox->sizePolicy().hasHeightForWidth());
        profileComboBox->setSizePolicy(sizePolicy2);
        profileComboBox->setIconSize(QSize(50, 16));

        gridLayout->addWidget(profileComboBox, 1, 1, 1, 1);

        label = new QLabel(passInformText);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        toolButton = new QToolButton(passInformText);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 2, 3, 1, 1);

        removeButton = new QToolButton(passInformText);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout->addWidget(removeButton, 1, 3, 1, 1);

        removeButton_2 = new QToolButton(passInformText);
        removeButton_2->setObjectName(QString::fromUtf8("removeButton_2"));

        gridLayout->addWidget(removeButton_2, 1, 2, 1, 1);

        passwordEdit = new QLineEdit(passInformText);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        sizePolicy2.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy2);
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 2, 1, 1, 2);


        gridLayout_2->addWidget(passInformText, 0, 0, 1, 6);

        updateCheckBox = new QCheckBox(PasswordDialog);
        updateCheckBox->setObjectName(QString::fromUtf8("updateCheckBox"));
        updateCheckBox->setChecked(true);

        gridLayout_2->addWidget(updateCheckBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 3);

#ifndef QT_NO_SHORTCUT
        labelPassword->setBuddy(passwordEdit);
        labelPassword_2->setBuddy(profileComboBox);
        label->setBuddy(passwordEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(passwordEdit, profileComboBox);
        QWidget::setTabOrder(profileComboBox, okButton);
        QWidget::setTabOrder(okButton, removeButton_2);
        QWidget::setTabOrder(removeButton_2, removeButton);
        QWidget::setTabOrder(removeButton, toolButton);
        QWidget::setTabOrder(toolButton, cancelButton);

        retranslateUi(PasswordDialog);
        QObject::connect(toolButton, SIGNAL(clicked()), passwordEdit, SLOT(clear()));
        QObject::connect(passwordEdit, SIGNAL(returnPressed()), okButton, SLOT(click()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PasswordDialog, SLOT(reject()));
        QObject::connect(removeButton, SIGNAL(clicked()), PasswordDialog, SLOT(resetDataSlot()));
        QObject::connect(removeButton_2, SIGNAL(clicked()), PasswordDialog, SLOT(addNewProfile()));
        QObject::connect(okButton, SIGNAL(clicked()), PasswordDialog, SLOT(accept()));
        QObject::connect(passwordEdit, SIGNAL(textChanged(QString)), PasswordDialog, SLOT(checkToEnableButton(QString)));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("PasswordDialog", "OK", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("PasswordDialog", "OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        cancelButton->setAccessibleName(QApplication::translate("PasswordDialog", "EXIT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        cancelButton->setText(QApplication::translate("PasswordDialog", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        passInformText->setAccessibleName(QApplication::translate("PasswordDialog", "TR00106", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        passInformText->setTitle(QApplication::translate("PasswordDialog", "Data Password Protection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword->setAccessibleName(QApplication::translate("PasswordDialog", "TR00109", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        labelPassword->setText(QApplication::translate("PasswordDialog", "Password:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword_2->setAccessibleName(QApplication::translate("PasswordDialog", "TR00108", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        labelPassword_2->setText(QApplication::translate("PasswordDialog", "Profile:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("PasswordDialog", "TR00112", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("PasswordDialog", "Your API Key and Secret are crypted by AES256.\n"
"Please enter password to decrypt data.\n"
"Or reset data and re-enter API keys.", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("PasswordDialog", "X", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("PasswordDialog", "X", 0, QApplication::UnicodeUTF8));
        removeButton_2->setText(QApplication::translate("PasswordDialog", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        updateCheckBox->setAccessibleName(QApplication::translate("PasswordDialog", "CHECK_FOR_UPDATE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        updateCheckBox->setText(QApplication::translate("PasswordDialog", "Check for updates", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
