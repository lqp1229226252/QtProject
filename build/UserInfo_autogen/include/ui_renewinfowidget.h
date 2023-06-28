/********************************************************************************
** Form generated from reading UI file 'renewinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENEWINFOWIDGET_H
#define UI_RENEWINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenewInfoWidget
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_sex;
    QPushButton *pushButton_confirm;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_account;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_handy;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_phone;

    void setupUi(QWidget *RenewInfoWidget)
    {
        if (RenewInfoWidget->objectName().isEmpty())
            RenewInfoWidget->setObjectName(QString::fromUtf8("RenewInfoWidget"));
        RenewInfoWidget->resize(400, 300);
        layoutWidget_2 = new QWidget(RenewInfoWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 110, 151, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_sex = new QLineEdit(layoutWidget_2);
        lineEdit_sex->setObjectName(QString::fromUtf8("lineEdit_sex"));

        horizontalLayout_3->addWidget(lineEdit_sex);

        pushButton_confirm = new QPushButton(RenewInfoWidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(230, 250, 91, 31));
        layoutWidget = new QWidget(RenewInfoWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 151, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_account = new QLineEdit(layoutWidget);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));

        horizontalLayout->addWidget(lineEdit_account);

        layoutWidget_3 = new QWidget(RenewInfoWidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 60, 151, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(layoutWidget_3);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);

        layoutWidget_4 = new QWidget(RenewInfoWidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 160, 151, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_handy = new QLineEdit(layoutWidget_4);
        lineEdit_handy->setObjectName(QString::fromUtf8("lineEdit_handy"));

        horizontalLayout_4->addWidget(lineEdit_handy);

        layoutWidget_5 = new QWidget(RenewInfoWidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(80, 200, 151, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_phone = new QLineEdit(layoutWidget_5);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));

        horizontalLayout_5->addWidget(lineEdit_phone);


        retranslateUi(RenewInfoWidget);

        QMetaObject::connectSlotsByName(RenewInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *RenewInfoWidget)
    {
        RenewInfoWidget->setWindowTitle(QCoreApplication::translate("RenewInfoWidget", "\344\277\241\346\201\257\346\263\250\345\206\214/\344\277\256\346\224\271", nullptr));
        label_3->setText(QCoreApplication::translate("RenewInfoWidget", "\346\200\247\345\210\253\357\274\232", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("RenewInfoWidget", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("RenewInfoWidget", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RenewInfoWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RenewInfoWidget", "\346\203\257\347\224\250\346\211\213\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("RenewInfoWidget", "\345\217\267\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenewInfoWidget: public Ui_RenewInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENEWINFOWIDGET_H
