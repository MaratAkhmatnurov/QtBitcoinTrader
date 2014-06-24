/********************************************************************************
** Form generated from reading UI file 'percentpicker.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERCENTPICKER_H
#define UI_PERCENTPICKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PercentPicker
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *percentTo1;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QSlider *verticalSlider;

    void setupUi(QWidget *PercentPicker)
    {
        if (PercentPicker->objectName().isEmpty())
            PercentPicker->setObjectName(QString::fromUtf8("PercentPicker"));
        PercentPicker->resize(96, 163);
        gridLayout = new QGridLayout(PercentPicker);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        percentTo1 = new QPushButton(PercentPicker);
        percentTo1->setObjectName(QString::fromUtf8("percentTo1"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(percentTo1->sizePolicy().hasHeightForWidth());
        percentTo1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(percentTo1);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        spinBox = new QSpinBox(PercentPicker);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setMinimumSize(QSize(50, 0));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox->setMaximum(100);
        spinBox->setValue(100);

        gridLayout->addWidget(spinBox, 0, 0, 1, 3);

        verticalSlider = new QSlider(PercentPicker);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(100);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(verticalSlider, 1, 1, 1, 1);


        retranslateUi(PercentPicker);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(PercentPicker);
    } // setupUi

    void retranslateUi(QWidget *PercentPicker)
    {
        PercentPicker->setWindowTitle(QApplication::translate("PercentPicker", "PercentPicker", 0, QApplication::UnicodeUTF8));
        percentTo1->setText(QApplication::translate("PercentPicker", "1%", 0, QApplication::UnicodeUTF8));
        spinBox->setSuffix(QApplication::translate("PercentPicker", "%", 0, QApplication::UnicodeUTF8));
        spinBox->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class PercentPicker: public Ui_PercentPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERCENTPICKER_H
