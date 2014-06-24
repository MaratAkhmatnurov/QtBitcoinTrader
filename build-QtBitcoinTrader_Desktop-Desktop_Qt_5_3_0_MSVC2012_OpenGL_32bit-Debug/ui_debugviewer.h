/********************************************************************************
** Form generated from reading UI file 'debugviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGVIEWER_H
#define UI_DEBUGVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugViewer
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioLog;
    QPushButton *buttonClearLog;
    QRadioButton *radioDebug;
    QCheckBox *checkEnabled;
    QPlainTextEdit *debugText;
    QPushButton *buttonSaveAs;

    void setupUi(QWidget *DebugViewer)
    {
        if (DebugViewer->objectName().isEmpty())
            DebugViewer->setObjectName(QString::fromUtf8("DebugViewer"));
        DebugViewer->resize(609, 412);
        gridLayout = new QGridLayout(DebugViewer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(401, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        radioLog = new QRadioButton(DebugViewer);
        radioLog->setObjectName(QString::fromUtf8("radioLog"));
        radioLog->setChecked(true);

        gridLayout->addWidget(radioLog, 1, 1, 1, 1);

        buttonClearLog = new QPushButton(DebugViewer);
        buttonClearLog->setObjectName(QString::fromUtf8("buttonClearLog"));

        gridLayout->addWidget(buttonClearLog, 1, 5, 1, 1);

        radioDebug = new QRadioButton(DebugViewer);
        radioDebug->setObjectName(QString::fromUtf8("radioDebug"));

        gridLayout->addWidget(radioDebug, 1, 2, 1, 1);

        checkEnabled = new QCheckBox(DebugViewer);
        checkEnabled->setObjectName(QString::fromUtf8("checkEnabled"));

        gridLayout->addWidget(checkEnabled, 1, 0, 1, 1);

        debugText = new QPlainTextEdit(DebugViewer);
        debugText->setObjectName(QString::fromUtf8("debugText"));
        debugText->setUndoRedoEnabled(false);
        debugText->setReadOnly(true);

        gridLayout->addWidget(debugText, 0, 0, 1, 6);

        buttonSaveAs = new QPushButton(DebugViewer);
        buttonSaveAs->setObjectName(QString::fromUtf8("buttonSaveAs"));

        gridLayout->addWidget(buttonSaveAs, 1, 4, 1, 1);


        retranslateUi(DebugViewer);
        QObject::connect(buttonClearLog, SIGNAL(clicked()), debugText, SLOT(clear()));

        QMetaObject::connectSlotsByName(DebugViewer);
    } // setupUi

    void retranslateUi(QWidget *DebugViewer)
    {
        DebugViewer->setWindowTitle(QApplication::translate("DebugViewer", "Qt Bitcoin Trader [DEBUG VIEWER]", 0, QApplication::UnicodeUTF8));
        radioLog->setText(QApplication::translate("DebugViewer", "Log", 0, QApplication::UnicodeUTF8));
        buttonClearLog->setText(QApplication::translate("DebugViewer", "Clear", 0, QApplication::UnicodeUTF8));
        radioDebug->setText(QApplication::translate("DebugViewer", "Debug", 0, QApplication::UnicodeUTF8));
        checkEnabled->setText(QApplication::translate("DebugViewer", "Enabled", 0, QApplication::UnicodeUTF8));
        buttonSaveAs->setText(QApplication::translate("DebugViewer", "Save As..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DebugViewer: public Ui_DebugViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGVIEWER_H
