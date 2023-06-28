/********************************************************************************
** Form generated from reading UI file 'checkinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINFOWIDGET_H
#define UI_CHECKINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckInfoWidget
{
public:
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_modify;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_account;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_sex;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_handy;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_phone;

    void setupUi(QWidget *CheckInfoWidget)
    {
        if (CheckInfoWidget->objectName().isEmpty())
            CheckInfoWidget->setObjectName(QString::fromUtf8("CheckInfoWidget"));
        CheckInfoWidget->resize(327, 300);
        pushButton_confirm = new QPushButton(CheckInfoWidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(150, 250, 91, 31));
        pushButton_modify = new QPushButton(CheckInfoWidget);
        pushButton_modify->setObjectName(QString::fromUtf8("pushButton_modify"));
        pushButton_modify->setGeometry(QRect(40, 250, 91, 31));
        widget = new QWidget(CheckInfoWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 20, 171, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_account = new QLabel(widget);
        label_account->setObjectName(QString::fromUtf8("label_account"));

        horizontalLayout->addWidget(label_account);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_name = new QLabel(widget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout_2->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_sex = new QLabel(widget);
        label_sex->setObjectName(QString::fromUtf8("label_sex"));

        horizontalLayout_3->addWidget(label_sex);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_handy = new QLabel(widget);
        label_handy->setObjectName(QString::fromUtf8("label_handy"));

        horizontalLayout_4->addWidget(label_handy);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        label_phone = new QLabel(widget);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));

        horizontalLayout_5->addWidget(label_phone);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(CheckInfoWidget);

        QMetaObject::connectSlotsByName(CheckInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *CheckInfoWidget)
    {
        CheckInfoWidget->setWindowTitle(QCoreApplication::translate("CheckInfoWidget", "\347\241\256\350\256\244\344\277\241\346\201\257", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("CheckInfoWidget", "\347\241\256\350\256\244", nullptr));
        pushButton_modify->setText(QCoreApplication::translate("CheckInfoWidget", "\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("CheckInfoWidget", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_account->setText(QCoreApplication::translate("CheckInfoWidget", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("CheckInfoWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_name->setText(QCoreApplication::translate("CheckInfoWidget", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("CheckInfoWidget", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_sex->setText(QCoreApplication::translate("CheckInfoWidget", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("CheckInfoWidget", "\346\203\257\347\224\250\346\211\213\357\274\232", nullptr));
        label_handy->setText(QCoreApplication::translate("CheckInfoWidget", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("CheckInfoWidget", "\345\217\267\347\240\201\357\274\232", nullptr));
        label_phone->setText(QCoreApplication::translate("CheckInfoWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckInfoWidget: public Ui_CheckInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINFOWIDGET_H
