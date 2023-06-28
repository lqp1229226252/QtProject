/********************************************************************************
** Form generated from reading UI file 'userinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWIDGET_H
#define UI_USERINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_account;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_sex;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_handy;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_phone;

    void setupUi(QWidget *UserInfoWidget)
    {
        if (UserInfoWidget->objectName().isEmpty())
            UserInfoWidget->setObjectName(QString::fromUtf8("UserInfoWidget"));
        UserInfoWidget->resize(687, 85);
        gridLayout = new QGridLayout(UserInfoWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(UserInfoWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_account = new QLabel(UserInfoWidget);
        label_account->setObjectName(QString::fromUtf8("label_account"));
        label_account->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(label_account);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(UserInfoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_name = new QLabel(UserInfoWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label_name);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(UserInfoWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_sex = new QLabel(UserInfoWidget);
        label_sex->setObjectName(QString::fromUtf8("label_sex"));

        horizontalLayout_2->addWidget(label_sex);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(UserInfoWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_handy = new QLabel(UserInfoWidget);
        label_handy->setObjectName(QString::fromUtf8("label_handy"));

        horizontalLayout_3->addWidget(label_handy);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(UserInfoWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        label_phone = new QLabel(UserInfoWidget);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_phone);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        retranslateUi(UserInfoWidget);

        QMetaObject::connectSlotsByName(UserInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *UserInfoWidget)
    {
        UserInfoWidget->setWindowTitle(QCoreApplication::translate("UserInfoWidget", "UserInfoWidget", nullptr));
        label_4->setText(QCoreApplication::translate("UserInfoWidget", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_account->setText(QCoreApplication::translate("UserInfoWidget", "none", nullptr));
        label->setText(QCoreApplication::translate("UserInfoWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_name->setText(QCoreApplication::translate("UserInfoWidget", "none", nullptr));
        label_2->setText(QCoreApplication::translate("UserInfoWidget", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_sex->setText(QCoreApplication::translate("UserInfoWidget", "none", nullptr));
        label_3->setText(QCoreApplication::translate("UserInfoWidget", "\346\203\257\347\224\250\346\211\213\357\274\232", nullptr));
        label_handy->setText(QCoreApplication::translate("UserInfoWidget", "none", nullptr));
        label_5->setText(QCoreApplication::translate("UserInfoWidget", "\345\217\267\347\240\201\357\274\232", nullptr));
        label_phone->setText(QCoreApplication::translate("UserInfoWidget", "none", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoWidget: public Ui_UserInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWIDGET_H
