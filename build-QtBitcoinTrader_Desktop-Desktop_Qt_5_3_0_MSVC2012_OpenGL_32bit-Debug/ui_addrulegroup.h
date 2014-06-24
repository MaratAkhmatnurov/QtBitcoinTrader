/********************************************************************************
** Form generated from reading UI file 'addrulegroup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRULEGROUP_H
#define UI_ADDRULEGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddRuleGroup
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupNameGroupbox;
    QGridLayout *gridLayout;
    QSpinBox *groupID;
    QLabel *gruopIDLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *groupNameClear;
    QLineEdit *groupName;
    QLabel *groupNameLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAddRule;
    QPushButton *buttonCancel;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupContentGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *checkEmptyRule;
    QRadioButton *checkExistingRule;
    QRadioButton *checkUseTemplate;
    QRadioButton *checkUseFile;
    QLineEdit *rulesFile;
    QPushButton *ruleOpen;
    QComboBox *useRulesGroupTemplateList;
    QComboBox *existingRulesList;

    void setupUi(QDialog *AddRuleGroup)
    {
        if (AddRuleGroup->objectName().isEmpty())
            AddRuleGroup->setObjectName(QString::fromUtf8("AddRuleGroup"));
        AddRuleGroup->resize(500, 241);
        gridLayout_3 = new QGridLayout(AddRuleGroup);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupNameGroupbox = new QGroupBox(AddRuleGroup);
        groupNameGroupbox->setObjectName(QString::fromUtf8("groupNameGroupbox"));
        gridLayout = new QGridLayout(groupNameGroupbox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupID = new QSpinBox(groupNameGroupbox);
        groupID->setObjectName(QString::fromUtf8("groupID"));
        groupID->setFocusPolicy(Qt::NoFocus);
        groupID->setAlignment(Qt::AlignCenter);
        groupID->setReadOnly(true);
        groupID->setButtonSymbols(QAbstractSpinBox::NoButtons);
        groupID->setKeyboardTracking(false);
        groupID->setMaximum(9999);

        gridLayout->addWidget(groupID, 0, 5, 1, 1);

        gruopIDLabel = new QLabel(groupNameGroupbox);
        gruopIDLabel->setObjectName(QString::fromUtf8("gruopIDLabel"));
        gruopIDLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(gruopIDLabel, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        groupNameClear = new QPushButton(groupNameGroupbox);
        groupNameClear->setObjectName(QString::fromUtf8("groupNameClear"));
        groupNameClear->setMaximumSize(QSize(22, 16777215));
        groupNameClear->setAutoDefault(false);

        gridLayout->addWidget(groupNameClear, 0, 2, 1, 1);

        groupName = new QLineEdit(groupNameGroupbox);
        groupName->setObjectName(QString::fromUtf8("groupName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupName->sizePolicy().hasHeightForWidth());
        groupName->setSizePolicy(sizePolicy);
        groupName->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(groupName, 0, 1, 1, 1);

        groupNameLabel = new QLabel(groupNameGroupbox);
        groupNameLabel->setObjectName(QString::fromUtf8("groupNameLabel"));

        gridLayout->addWidget(groupNameLabel, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupNameGroupbox, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        buttonAddRule = new QPushButton(AddRuleGroup);
        buttonAddRule->setObjectName(QString::fromUtf8("buttonAddRule"));
        buttonAddRule->setEnabled(false);

        gridLayout_3->addWidget(buttonAddRule, 2, 1, 1, 1);

        buttonCancel = new QPushButton(AddRuleGroup);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        gridLayout_3->addWidget(buttonCancel, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        groupContentGroupBox = new QGroupBox(AddRuleGroup);
        groupContentGroupBox->setObjectName(QString::fromUtf8("groupContentGroupBox"));
        gridLayout_2 = new QGridLayout(groupContentGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkEmptyRule = new QRadioButton(groupContentGroupBox);
        checkEmptyRule->setObjectName(QString::fromUtf8("checkEmptyRule"));
        checkEmptyRule->setChecked(true);

        gridLayout_2->addWidget(checkEmptyRule, 0, 0, 1, 1);

        checkExistingRule = new QRadioButton(groupContentGroupBox);
        checkExistingRule->setObjectName(QString::fromUtf8("checkExistingRule"));
        checkExistingRule->setEnabled(true);

        gridLayout_2->addWidget(checkExistingRule, 1, 0, 1, 1);

        checkUseTemplate = new QRadioButton(groupContentGroupBox);
        checkUseTemplate->setObjectName(QString::fromUtf8("checkUseTemplate"));
        checkUseTemplate->setEnabled(true);

        gridLayout_2->addWidget(checkUseTemplate, 2, 0, 1, 1);

        checkUseFile = new QRadioButton(groupContentGroupBox);
        checkUseFile->setObjectName(QString::fromUtf8("checkUseFile"));
        checkUseFile->setEnabled(true);

        gridLayout_2->addWidget(checkUseFile, 3, 0, 1, 1);

        rulesFile = new QLineEdit(groupContentGroupBox);
        rulesFile->setObjectName(QString::fromUtf8("rulesFile"));
        rulesFile->setReadOnly(true);

        gridLayout_2->addWidget(rulesFile, 3, 1, 1, 1);

        ruleOpen = new QPushButton(groupContentGroupBox);
        ruleOpen->setObjectName(QString::fromUtf8("ruleOpen"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ruleOpen->sizePolicy().hasHeightForWidth());
        ruleOpen->setSizePolicy(sizePolicy1);
        ruleOpen->setMaximumSize(QSize(22, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleOpen->setIcon(icon);
        ruleOpen->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(ruleOpen, 3, 2, 1, 1);

        useRulesGroupTemplateList = new QComboBox(groupContentGroupBox);
        useRulesGroupTemplateList->setObjectName(QString::fromUtf8("useRulesGroupTemplateList"));
        useRulesGroupTemplateList->setEnabled(true);
        sizePolicy.setHeightForWidth(useRulesGroupTemplateList->sizePolicy().hasHeightForWidth());
        useRulesGroupTemplateList->setSizePolicy(sizePolicy);
        useRulesGroupTemplateList->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(useRulesGroupTemplateList, 2, 1, 1, 2);

        existingRulesList = new QComboBox(groupContentGroupBox);
        existingRulesList->setObjectName(QString::fromUtf8("existingRulesList"));
        existingRulesList->setEnabled(true);
        sizePolicy.setHeightForWidth(existingRulesList->sizePolicy().hasHeightForWidth());
        existingRulesList->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(existingRulesList, 1, 1, 1, 2);


        gridLayout_3->addWidget(groupContentGroupBox, 1, 0, 1, 4);


        retranslateUi(AddRuleGroup);
        QObject::connect(buttonCancel, SIGNAL(clicked()), AddRuleGroup, SLOT(reject()));
        QObject::connect(checkEmptyRule, SIGNAL(toggled(bool)), AddRuleGroup, SLOT(onGroupContentChanged(bool)));
        QObject::connect(checkExistingRule, SIGNAL(toggled(bool)), AddRuleGroup, SLOT(onGroupContentChanged(bool)));
        QObject::connect(checkUseTemplate, SIGNAL(toggled(bool)), AddRuleGroup, SLOT(onGroupContentChanged(bool)));
        QObject::connect(groupNameClear, SIGNAL(clicked()), groupName, SLOT(clear()));
        QObject::connect(checkUseFile, SIGNAL(toggled(bool)), AddRuleGroup, SLOT(onGroupContentChanged(bool)));

        QMetaObject::connectSlotsByName(AddRuleGroup);
    } // setupUi

    void retranslateUi(QDialog *AddRuleGroup)
    {
        AddRuleGroup->setWindowTitle(QApplication::translate("AddRuleGroup", "Add Rule Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        groupNameGroupbox->setAccessibleName(QApplication::translate("AddRuleGroup", "RULE_GROUP_NAME", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        groupNameGroupbox->setTitle(QApplication::translate("AddRuleGroup", "Group Name", 0, QApplication::UnicodeUTF8));
        groupID->setSuffix(QString());
        groupID->setPrefix(QString());
#ifndef QT_NO_ACCESSIBILITY
        gruopIDLabel->setAccessibleName(QApplication::translate("AddRuleGroup", "GROUP_ID", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        gruopIDLabel->setText(QApplication::translate("AddRuleGroup", "Group ID:", 0, QApplication::UnicodeUTF8));
        groupNameClear->setText(QApplication::translate("AddRuleGroup", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        groupNameLabel->setAccessibleName(QApplication::translate("AddRuleGroup", "SHORT_NAME", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        groupNameLabel->setText(QApplication::translate("AddRuleGroup", "Short name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        buttonAddRule->setAccessibleName(QApplication::translate("AddRuleGroup", "ADD_GROUP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonAddRule->setText(QApplication::translate("AddRuleGroup", "Add Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        buttonCancel->setAccessibleName(QApplication::translate("AddRuleGroup", "TRCANCEL", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        buttonCancel->setText(QApplication::translate("AddRuleGroup", "Cancel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        groupContentGroupBox->setAccessibleName(QApplication::translate("AddRuleGroup", "RULES_GROUP_CONTENT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        groupContentGroupBox->setTitle(QApplication::translate("AddRuleGroup", "Ruels group content", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        checkEmptyRule->setAccessibleName(QApplication::translate("AddRuleGroup", "CREATE_EMPTY_RULES_GROUP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkEmptyRule->setText(QApplication::translate("AddRuleGroup", "Create empty rules group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        checkExistingRule->setAccessibleName(QApplication::translate("AddRuleGroup", "COPY_FROM_EXISTING_GROUP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkExistingRule->setText(QApplication::translate("AddRuleGroup", "Copy from existing group:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        checkUseTemplate->setAccessibleName(QApplication::translate("AddRuleGroup", "USE_RULES_GROUP_TEMPLATE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkUseTemplate->setText(QApplication::translate("AddRuleGroup", "Use rules group template:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        checkUseFile->setAccessibleName(QApplication::translate("AddRuleGroup", "USE_RULES_GROUP_FILE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkUseFile->setText(QApplication::translate("AddRuleGroup", "Load rules groups from file:", 0, QApplication::UnicodeUTF8));
        ruleOpen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddRuleGroup: public Ui_AddRuleGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRULEGROUP_H
