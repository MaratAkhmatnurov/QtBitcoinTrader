/********************************************************************************
** Form generated from reading UI file 'datafolderchusedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFOLDERCHUSEDIALOG_H
#define UI_DATAFOLDERCHUSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DataFolderChuseDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonUseSystemFolder;
    QPushButton *buttonUsePortableMode;

    void setupUi(QDialog *DataFolderChuseDialog)
    {
        if (DataFolderChuseDialog->objectName().isEmpty())
            DataFolderChuseDialog->setObjectName(QString::fromUtf8("DataFolderChuseDialog"));
        DataFolderChuseDialog->resize(480, 280);
        DataFolderChuseDialog->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(DataFolderChuseDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonUseSystemFolder = new QPushButton(DataFolderChuseDialog);
        buttonUseSystemFolder->setObjectName(QString::fromUtf8("buttonUseSystemFolder"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonUseSystemFolder->sizePolicy().hasHeightForWidth());
        buttonUseSystemFolder->setSizePolicy(sizePolicy);
        buttonUseSystemFolder->setDefault(true);

        gridLayout->addWidget(buttonUseSystemFolder, 0, 0, 1, 1);

        buttonUsePortableMode = new QPushButton(DataFolderChuseDialog);
        buttonUsePortableMode->setObjectName(QString::fromUtf8("buttonUsePortableMode"));
        sizePolicy.setHeightForWidth(buttonUsePortableMode->sizePolicy().hasHeightForWidth());
        buttonUsePortableMode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonUsePortableMode, 1, 0, 1, 1);


        retranslateUi(DataFolderChuseDialog);
        QObject::connect(buttonUseSystemFolder, SIGNAL(clicked()), DataFolderChuseDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(DataFolderChuseDialog);
    } // setupUi

    void retranslateUi(QDialog *DataFolderChuseDialog)
    {
        DataFolderChuseDialog->setWindowTitle(QApplication::translate("DataFolderChuseDialog", "Qt Bitcoin Trader", 0, QApplication::UnicodeUTF8));
        buttonUseSystemFolder->setText(QApplication::translate("DataFolderChuseDialog", "Use system folder", 0, QApplication::UnicodeUTF8));
        buttonUsePortableMode->setText(QApplication::translate("DataFolderChuseDialog", "Portable mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DataFolderChuseDialog: public Ui_DataFolderChuseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFOLDERCHUSEDIALOG_H
