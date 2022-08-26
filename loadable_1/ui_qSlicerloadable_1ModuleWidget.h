/********************************************************************************
** Form generated from reading UI file 'qSlicerloadable_1ModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERLOADABLE_1MODULEWIDGET_H
#define UI_QSLICERLOADABLE_1MODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "qSlicerWidget.h"
#include "qSlicerloadable_1FooBarWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerloadable_1ModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *CTKCollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    qSlicerloadable_1FooBarWidget *FooBar;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerloadable_1ModuleWidget)
    {
        if (qSlicerloadable_1ModuleWidget->objectName().isEmpty())
            qSlicerloadable_1ModuleWidget->setObjectName(QString::fromUtf8("qSlicerloadable_1ModuleWidget"));
        qSlicerloadable_1ModuleWidget->resize(525, 319);
        verticalLayout = new QVBoxLayout(qSlicerloadable_1ModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        CTKCollapsibleButton = new ctkCollapsibleButton(qSlicerloadable_1ModuleWidget);
        CTKCollapsibleButton->setObjectName(QString::fromUtf8("CTKCollapsibleButton"));
        verticalLayout_3 = new QVBoxLayout(CTKCollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        FooBar = new qSlicerloadable_1FooBarWidget(CTKCollapsibleButton);
        FooBar->setObjectName(QString::fromUtf8("FooBar"));

        verticalLayout_3->addWidget(FooBar);


        verticalLayout->addWidget(CTKCollapsibleButton);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(qSlicerloadable_1ModuleWidget);

        QMetaObject::connectSlotsByName(qSlicerloadable_1ModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerloadable_1ModuleWidget)
    {
        qSlicerloadable_1ModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerloadable_1ModuleWidget", "Form", nullptr));
        CTKCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qSlicerloadable_1ModuleWidget", "Display", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class qSlicerloadable_1ModuleWidget: public Ui_qSlicerloadable_1ModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERLOADABLE_1MODULEWIDGET_H
