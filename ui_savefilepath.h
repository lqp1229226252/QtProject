/********************************************************************************
** Form generated from reading UI file 'savefilepath.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEFILEPATH_H
#define UI_SAVEFILEPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveFilePath
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QRadioButton *radioButton;
    QWidget *page_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SaveFilePath)
    {
        if (SaveFilePath->objectName().isEmpty())
            SaveFilePath->setObjectName(QString::fromUtf8("SaveFilePath"));
        SaveFilePath->resize(556, 370);
        stackedWidget = new QStackedWidget(SaveFilePath);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 80, 120, 80));
        stackedWidget->setStyleSheet(QString::fromUtf8("font-family: \"Segoe UI\";\n"
"background-color: #888;\n"
"color: #000;\n"
"subcontrol-origin: padding;\n"
"subcontrol-position: top right;\n"
"border-left: 1px solid #333333;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        radioButton = new QRadioButton(page);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 40, 89, 16));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(SaveFilePath);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 130, 75, 23));
        pushButton_2 = new QPushButton(SaveFilePath);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 210, 75, 23));

        retranslateUi(SaveFilePath);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SaveFilePath);
    } // setupUi

    void retranslateUi(QWidget *SaveFilePath)
    {
        SaveFilePath->setWindowTitle(QCoreApplication::translate("SaveFilePath", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("SaveFilePath", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("SaveFilePath", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SaveFilePath", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveFilePath: public Ui_SaveFilePath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEFILEPATH_H
