/********************************************************************************
** Form generated from reading UI file 'initinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITINFOWIDGET_H
#define UI_INITINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_initInfoWidget
{
public:
    QPushButton *pushButton_check;
    QPushButton *pushButton_set;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_register;

    void setupUi(QWidget *initInfoWidget)
    {
        if (initInfoWidget->objectName().isEmpty())
            initInfoWidget->setObjectName(QString::fromUtf8("initInfoWidget"));
        initInfoWidget->resize(275, 221);
        pushButton_check = new QPushButton(initInfoWidget);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        pushButton_check->setGeometry(QRect(40, 170, 91, 23));
        pushButton_set = new QPushButton(initInfoWidget);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));
        pushButton_set->setGeometry(QRect(160, 170, 75, 23));
        layoutWidget = new QWidget(initInfoWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 191, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_id = new QLineEdit(layoutWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_id->sizePolicy().hasHeightForWidth());
        lineEdit_id->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit_id);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_register = new QPushButton(initInfoWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(160, 130, 75, 23));
        pushButton_register->setStyleSheet(QString::fromUtf8("\n"
"#pushButton_register{\n"
"	border-style:none;\n"
"	background-color: rgba(255, 29, 184,0);\n"
"}\n"
"\n"
"#pushButton_register:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	color: rgb(255, 196, 123);\n"
"}\n"
""));

        retranslateUi(initInfoWidget);

        QMetaObject::connectSlotsByName(initInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *initInfoWidget)
    {
        initInfoWidget->setWindowTitle(QCoreApplication::translate("initInfoWidget", "\351\200\211\346\213\251\350\264\246\345\217\267", nullptr));
        pushButton_check->setText(QCoreApplication::translate("initInfoWidget", "\351\252\214\350\257\201", nullptr));
        pushButton_set->setText(QCoreApplication::translate("initInfoWidget", "\347\241\256\350\256\244", nullptr));
        label_4->setText(QCoreApplication::translate("initInfoWidget", "\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton_register->setText(QCoreApplication::translate("initInfoWidget", "\346\263\250\345\206\214\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class initInfoWidget: public Ui_initInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITINFOWIDGET_H
