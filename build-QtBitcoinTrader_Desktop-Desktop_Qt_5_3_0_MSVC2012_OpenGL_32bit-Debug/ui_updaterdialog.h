/********************************************************************************
** Form generated from reading UI file 'updaterdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATERDIALOG_H
#define UI_UPDATERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UpdaterDialog
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *autoUpdateGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QPushButton *buttonUpdate;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *versionLabel;
    QLabel *iconLabel;
    QGroupBox *donateGroupBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTextEdit *changeLogText;

    void setupUi(QDialog *UpdaterDialog)
    {
        if (UpdaterDialog->objectName().isEmpty())
            UpdaterDialog->setObjectName(QString::fromUtf8("UpdaterDialog"));
        UpdaterDialog->resize(380, 458);
        UpdaterDialog->setMinimumSize(QSize(360, 360));
        UpdaterDialog->setMaximumSize(QSize(640, 480));
        gridLayout_6 = new QGridLayout(UpdaterDialog);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        autoUpdateGroupBox = new QGroupBox(UpdaterDialog);
        autoUpdateGroupBox->setObjectName(QString::fromUtf8("autoUpdateGroupBox"));
        gridLayout_4 = new QGridLayout(autoUpdateGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(autoUpdateGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 2);

        progressBar = new QProgressBar(autoUpdateGroupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(progressBar, 1, 0, 1, 1);

        buttonUpdate = new QPushButton(autoUpdateGroupBox);
        buttonUpdate->setObjectName(QString::fromUtf8("buttonUpdate"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonUpdate->sizePolicy().hasHeightForWidth());
        buttonUpdate->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(buttonUpdate, 1, 1, 1, 1);


        gridLayout_6->addWidget(autoUpdateGroupBox, 2, 0, 1, 1);

        groupBox = new QGroupBox(UpdaterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(11);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        versionLabel = new QLabel(groupBox);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(versionLabel, 1, 1, 1, 1);

        iconLabel = new QLabel(groupBox);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setMinimumSize(QSize(48, 48));
        iconLabel->setMaximumSize(QSize(48, 48));

        gridLayout_2->addWidget(iconLabel, 0, 0, 2, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        donateGroupBox = new QGroupBox(UpdaterDialog);
        donateGroupBox->setObjectName(QString::fromUtf8("donateGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(donateGroupBox->sizePolicy().hasHeightForWidth());
        donateGroupBox->setSizePolicy(sizePolicy1);
        donateGroupBox->setMinimumSize(QSize(0, 50));
        donateGroupBox->setMaximumSize(QSize(480, 16777215));
        donateGroupBox->setStyleSheet(QString::fromUtf8("border: 0px; background: transparent;"));

        gridLayout_6->addWidget(donateGroupBox, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(UpdaterDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        changeLogText = new QTextEdit(groupBox_2);
        changeLogText->setObjectName(QString::fromUtf8("changeLogText"));
        changeLogText->setReadOnly(true);

        gridLayout->addWidget(changeLogText, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(UpdaterDialog);
        QObject::connect(buttonUpdate, SIGNAL(clicked()), UpdaterDialog, SLOT(buttonUpdate()));

        QMetaObject::connectSlotsByName(UpdaterDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdaterDialog)
    {
        UpdaterDialog->setWindowTitle(QApplication::translate("UpdaterDialog", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        autoUpdateGroupBox->setAccessibleName(QApplication::translate("UpdaterDialog", "AUTOMATIC_DOWNLOAD_ANS_INSTALL", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        autoUpdateGroupBox->setTitle(QApplication::translate("UpdaterDialog", "Automatic download and Installation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("UpdaterDialog", "UPDATE_DESCRIPTION", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("UpdaterDialog", "Your platform supports secure automatic update.\n"
"Download file will be validated by RSA2048 protected checksum.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        buttonUpdate->setAccessibleName(QApplication::translate("UpdaterDialog", "INSTALL", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonUpdate->setText(QApplication::translate("UpdaterDialog", "Install", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("UpdaterDialog", "UPDATE_RELEASED_TEXT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("UpdaterDialog", "Qt Bitcoin Trader Update Released!", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("UpdaterDialog", "v1.0", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        donateGroupBox->setAccessibleName(QApplication::translate("UpdaterDialog", "LOGOBUTTON", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        donateGroupBox->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        groupBox_2->setAccessibleName(QApplication::translate("UpdaterDialog", "CHANGE_LOG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        groupBox_2->setTitle(QApplication::translate("UpdaterDialog", "ChangeLog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UpdaterDialog: public Ui_UpdaterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATERDIALOG_H
