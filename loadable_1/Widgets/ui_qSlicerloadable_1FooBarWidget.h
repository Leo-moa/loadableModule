/********************************************************************************
** Form generated from reading UI file 'qSlicerloadable_1FooBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERLOADABLE_1FOOBARWIDGET_H
#define UI_QSLICERLOADABLE_1FOOBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerloadable_1FooBarWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *FooBarButton;

    void setupUi(QWidget *qSlicerloadable_1FooBarWidget)
    {
        if (qSlicerloadable_1FooBarWidget->objectName().isEmpty())
            qSlicerloadable_1FooBarWidget->setObjectName(QString::fromUtf8("qSlicerloadable_1FooBarWidget"));
        qSlicerloadable_1FooBarWidget->resize(296, 217);
        verticalLayout = new QVBoxLayout(qSlicerloadable_1FooBarWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FooBarButton = new QPushButton(qSlicerloadable_1FooBarWidget);
        FooBarButton->setObjectName(QString::fromUtf8("FooBarButton"));

        verticalLayout->addWidget(FooBarButton);


        retranslateUi(qSlicerloadable_1FooBarWidget);

        QMetaObject::connectSlotsByName(qSlicerloadable_1FooBarWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerloadable_1FooBarWidget)
    {
        qSlicerloadable_1FooBarWidget->setWindowTitle(QCoreApplication::translate("qSlicerloadable_1FooBarWidget", "Foo bar", nullptr));
        FooBarButton->setText(QCoreApplication::translate("qSlicerloadable_1FooBarWidget", "Voxel Tracking on", nullptr));
        return ;
    } // retranslateUi

};

namespace Ui {
    class qSlicerloadable_1FooBarWidget: public Ui_qSlicerloadable_1FooBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERLOADABLE_1FOOBARWIDGET_H
