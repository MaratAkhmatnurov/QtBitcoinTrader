/********************************************************************************
** Form generated from reading UI file 'rulewidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEWIDGET_H
#define UI_RULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RuleWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ruleBeep;
    QPushButton *ruleUp;
    QPushButton *ruleDown;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelGroupID;
    QSpinBox *groupID;
    QPushButton *ruleSave;
    QSpacerItem *horizontalSpacer;
    QRadioButton *ruleSequencialMode;
    QRadioButton *ruleConcurrentMode;
    QTableView *rulesTable;
    QLabel *rulesNoMessage;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ruleAddButton;
    QPushButton *ruleEditButton;
    QToolButton *ruleEnableDisable;
    QLabel *label_32;
    QPushButton *ruleRemoveAll;
    QPushButton *ruleRemove;

    void setupUi(QWidget *RuleWidget)
    {
        if (RuleWidget->objectName().isEmpty())
            RuleWidget->setObjectName(QString::fromUtf8("RuleWidget"));
        RuleWidget->resize(571, 335);
        gridLayout = new QGridLayout(RuleWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ruleBeep = new QPushButton(RuleWidget);
        ruleBeep->setObjectName(QString::fromUtf8("ruleBeep"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleBeep->setIcon(icon);
        ruleBeep->setCheckable(true);
        ruleBeep->setChecked(false);

        horizontalLayout->addWidget(ruleBeep);

        ruleUp = new QPushButton(RuleWidget);
        ruleUp->setObjectName(QString::fromUtf8("ruleUp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/ArrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleUp->setIcon(icon1);

        horizontalLayout->addWidget(ruleUp);

        ruleDown = new QPushButton(RuleWidget);
        ruleDown->setObjectName(QString::fromUtf8("ruleDown"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/ArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleDown->setIcon(icon2);

        horizontalLayout->addWidget(ruleDown);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelGroupID = new QLabel(RuleWidget);
        labelGroupID->setObjectName(QString::fromUtf8("labelGroupID"));

        horizontalLayout->addWidget(labelGroupID);

        groupID = new QSpinBox(RuleWidget);
        groupID->setObjectName(QString::fromUtf8("groupID"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupID->sizePolicy().hasHeightForWidth());
        groupID->setSizePolicy(sizePolicy);
        groupID->setAlignment(Qt::AlignCenter);
        groupID->setReadOnly(true);
        groupID->setButtonSymbols(QAbstractSpinBox::NoButtons);
        groupID->setKeyboardTracking(false);
        groupID->setMinimum(1);
        groupID->setMaximum(9999);

        horizontalLayout->addWidget(groupID);

        ruleSave = new QPushButton(RuleWidget);
        ruleSave->setObjectName(QString::fromUtf8("ruleSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleSave->setIcon(icon3);

        horizontalLayout->addWidget(ruleSave);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ruleSequencialMode = new QRadioButton(RuleWidget);
        ruleSequencialMode->setObjectName(QString::fromUtf8("ruleSequencialMode"));
        ruleSequencialMode->setStyleSheet(QString::fromUtf8("QRadioButton:disabled:checked {color: black;}"));
        ruleSequencialMode->setChecked(true);

        horizontalLayout->addWidget(ruleSequencialMode);

        ruleConcurrentMode = new QRadioButton(RuleWidget);
        ruleConcurrentMode->setObjectName(QString::fromUtf8("ruleConcurrentMode"));
        ruleConcurrentMode->setStyleSheet(QString::fromUtf8("QRadioButton:disabled:checked {color: black;}"));

        horizontalLayout->addWidget(ruleConcurrentMode);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        rulesTable = new QTableView(RuleWidget);
        rulesTable->setObjectName(QString::fromUtf8("rulesTable"));
        rulesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        rulesTable->setDragDropOverwriteMode(false);
        rulesTable->setAlternatingRowColors(true);
        rulesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        rulesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        rulesTable->setTextElideMode(Qt::ElideNone);
        rulesTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        rulesTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        rulesTable->setShowGrid(false);
        rulesTable->setWordWrap(false);
        rulesTable->horizontalHeader()->setHighlightSections(false);
        rulesTable->verticalHeader()->setVisible(false);
        rulesTable->verticalHeader()->setDefaultSectionSize(26);
        rulesTable->verticalHeader()->setHighlightSections(false);

        gridLayout->addWidget(rulesTable, 1, 0, 1, 1);

        rulesNoMessage = new QLabel(RuleWidget);
        rulesNoMessage->setObjectName(QString::fromUtf8("rulesNoMessage"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rulesNoMessage->sizePolicy().hasHeightForWidth());
        rulesNoMessage->setSizePolicy(sizePolicy1);
        rulesNoMessage->setMinimumSize(QSize(60, 60));
        QFont font;
        font.setPointSize(20);
        rulesNoMessage->setFont(font);
        rulesNoMessage->setStyleSheet(QString::fromUtf8("border: 1px solid gray; background: white; color: gray"));
        rulesNoMessage->setAlignment(Qt::AlignCenter);
        rulesNoMessage->setWordWrap(true);
        rulesNoMessage->setMargin(4);

        gridLayout->addWidget(rulesNoMessage, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ruleAddButton = new QPushButton(RuleWidget);
        ruleAddButton->setObjectName(QString::fromUtf8("ruleAddButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ruleAddButton->sizePolicy().hasHeightForWidth());
        ruleAddButton->setSizePolicy(sizePolicy2);
        ruleAddButton->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleAddButton);

        ruleEditButton = new QPushButton(RuleWidget);
        ruleEditButton->setObjectName(QString::fromUtf8("ruleEditButton"));
        sizePolicy2.setHeightForWidth(ruleEditButton->sizePolicy().hasHeightForWidth());
        ruleEditButton->setSizePolicy(sizePolicy2);
        ruleEditButton->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleEditButton);

        ruleEnableDisable = new QToolButton(RuleWidget);
        ruleEnableDisable->setObjectName(QString::fromUtf8("ruleEnableDisable"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ruleEnableDisable->sizePolicy().hasHeightForWidth());
        ruleEnableDisable->setSizePolicy(sizePolicy3);
        ruleEnableDisable->setPopupMode(QToolButton::InstantPopup);
        ruleEnableDisable->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ruleEnableDisable->setArrowType(Qt::NoArrow);

        horizontalLayout_4->addWidget(ruleEnableDisable);

        label_32 = new QLabel(RuleWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy4);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_32);

        ruleRemoveAll = new QPushButton(RuleWidget);
        ruleRemoveAll->setObjectName(QString::fromUtf8("ruleRemoveAll"));
        sizePolicy2.setHeightForWidth(ruleRemoveAll->sizePolicy().hasHeightForWidth());
        ruleRemoveAll->setSizePolicy(sizePolicy2);
        ruleRemoveAll->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleRemoveAll);

        ruleRemove = new QPushButton(RuleWidget);
        ruleRemove->setObjectName(QString::fromUtf8("ruleRemove"));
        sizePolicy2.setHeightForWidth(ruleRemove->sizePolicy().hasHeightForWidth());
        ruleRemove->setSizePolicy(sizePolicy2);
        ruleRemove->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleRemove);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        retranslateUi(RuleWidget);
        QObject::connect(rulesTable, SIGNAL(doubleClicked(QModelIndex)), ruleEditButton, SLOT(click()));

        QMetaObject::connectSlotsByName(RuleWidget);
    } // setupUi

    void retranslateUi(QWidget *RuleWidget)
    {
        RuleWidget->setWindowTitle(QApplication::translate("RuleWidget", "RuleWidget", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleBeep->setAccessibleDescription(QApplication::translate("RuleWidget", "TOGGLE_SOUND", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleBeep->setText(QString());
        ruleUp->setText(QString());
        ruleDown->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        labelGroupID->setAccessibleName(QApplication::translate("RuleWidget", "GROUP_ID", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        labelGroupID->setText(QApplication::translate("RuleWidget", "Group ID:", 0, QApplication::UnicodeUTF8));
        ruleSave->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        ruleSequencialMode->setAccessibleName(QApplication::translate("RuleWidget", "SEQUENTIAL_MODE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleSequencialMode->setText(QApplication::translate("RuleWidget", "Sequential Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleConcurrentMode->setAccessibleName(QApplication::translate("RuleWidget", "CONCURRENT_MODE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleConcurrentMode->setText(QApplication::translate("RuleWidget", "Concurrent Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        rulesNoMessage->setAccessibleName(QApplication::translate("RuleWidget", "RULE_NOITEMS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        rulesNoMessage->setText(QApplication::translate("RuleWidget", "No Rules", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleAddButton->setAccessibleName(QApplication::translate("RuleWidget", "TR00027", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleAddButton->setText(QApplication::translate("RuleWidget", "Add Rule", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleEditButton->setAccessibleName(QApplication::translate("RuleWidget", "RULE_EDIT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleEditButton->setText(QApplication::translate("RuleWidget", "Edit Rule", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleEnableDisable->setAccessibleName(QApplication::translate("RuleWidget", "ENABLE_DISABLE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleEnableDisable->setText(QApplication::translate("RuleWidget", "Enable / Disable", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_32->setAccessibleName(QApplication::translate("RuleWidget", "REMOVE_RULES", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_32->setText(QApplication::translate("RuleWidget", "Remove:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleRemoveAll->setAccessibleName(QApplication::translate("RuleWidget", "CANCEL_ALL_ORDERS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleRemoveAll->setText(QApplication::translate("RuleWidget", "All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        ruleRemove->setAccessibleName(QApplication::translate("RuleWidget", "CANCEL_SELECTED_ORDERS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        ruleRemove->setText(QApplication::translate("RuleWidget", "Selected", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RuleWidget: public Ui_RuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULEWIDGET_H
