/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_showTime;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_portState;
    QPushButton *pushButton_select;
    QComboBox *comboBox_portName;
    QComboBox *comboBox_baud;
    QComboBox *comboBox_parity;
    QComboBox *comboBox_data;
    QComboBox *comboBox_stop;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QCheckBox *checkBox_isSave;
    QPushButton *pushButton_text;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QChartView *graphicsView_result;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_edit_Info;
    QCheckBox *checkBox_filtering;
    QCheckBox *checkBox_save_data;
    QCustomPlot *widget_chart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(980, 631);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        label_showTime = new QLabel(centralwidget);
        label_showTime->setObjectName(QString::fromUtf8("label_showTime"));
        label_showTime->setGeometry(QRect(640, 0, 291, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_showTime->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(890, 270, 86, 284));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_portState = new QLabel(layoutWidget);
        label_portState->setObjectName(QString::fromUtf8("label_portState"));

        verticalLayout->addWidget(label_portState);

        pushButton_select = new QPushButton(layoutWidget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));

        verticalLayout->addWidget(pushButton_select);

        comboBox_portName = new QComboBox(layoutWidget);
        comboBox_portName->addItem(QString());
        comboBox_portName->addItem(QString());
        comboBox_portName->addItem(QString());
        comboBox_portName->addItem(QString());
        comboBox_portName->setObjectName(QString::fromUtf8("comboBox_portName"));

        verticalLayout->addWidget(comboBox_portName);

        comboBox_baud = new QComboBox(layoutWidget);
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));

        verticalLayout->addWidget(comboBox_baud);

        comboBox_parity = new QComboBox(layoutWidget);
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));

        verticalLayout->addWidget(comboBox_parity);

        comboBox_data = new QComboBox(layoutWidget);
        comboBox_data->setObjectName(QString::fromUtf8("comboBox_data"));

        verticalLayout->addWidget(comboBox_data);

        comboBox_stop = new QComboBox(layoutWidget);
        comboBox_stop->setObjectName(QString::fromUtf8("comboBox_stop"));

        verticalLayout->addWidget(comboBox_stop);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_open = new QPushButton(layoutWidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));

        verticalLayout_2->addWidget(pushButton_open);

        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        verticalLayout_2->addWidget(pushButton_close);


        verticalLayout->addLayout(verticalLayout_2);

        checkBox_isSave = new QCheckBox(layoutWidget);
        checkBox_isSave->setObjectName(QString::fromUtf8("checkBox_isSave"));

        verticalLayout->addWidget(checkBox_isSave);

        pushButton_text = new QPushButton(layoutWidget);
        pushButton_text->setObjectName(QString::fromUtf8("pushButton_text"));

        verticalLayout->addWidget(pushButton_text);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 28, 431, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        graphicsView_result = new QChartView(layoutWidget1);
        graphicsView_result->setObjectName(QString::fromUtf8("graphicsView_result"));

        verticalLayout_3->addWidget(graphicsView_result);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_edit_Info = new QPushButton(layoutWidget1);
        pushButton_edit_Info->setObjectName(QString::fromUtf8("pushButton_edit_Info"));
        pushButton_edit_Info->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        horizontalLayout->addWidget(pushButton_edit_Info);

        checkBox_filtering = new QCheckBox(layoutWidget1);
        checkBox_filtering->setObjectName(QString::fromUtf8("checkBox_filtering"));
        checkBox_filtering->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        horizontalLayout->addWidget(checkBox_filtering);

        checkBox_save_data = new QCheckBox(layoutWidget1);
        checkBox_save_data->setObjectName(QString::fromUtf8("checkBox_save_data"));
        checkBox_save_data->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        horizontalLayout->addWidget(checkBox_save_data);


        verticalLayout_3->addLayout(horizontalLayout);

        widget_chart = new QCustomPlot(centralwidget);
        widget_chart->setObjectName(QString::fromUtf8("widget_chart"));
        widget_chart->setGeometry(QRect(-1, 0, 551, 581));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 980, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        label_showTime->setText(QString());
        label_portState->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\347\212\266\346\200\201\357\274\232\345\205\263\351\227\255", nullptr));
        pushButton_select->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\344\270\262\345\217\243", nullptr));
        comboBox_portName->setItemText(0, QCoreApplication::translate("MainWindow", "COM1", nullptr));
        comboBox_portName->setItemText(1, QCoreApplication::translate("MainWindow", "COM2", nullptr));
        comboBox_portName->setItemText(2, QCoreApplication::translate("MainWindow", "COM3", nullptr));
        comboBox_portName->setItemText(3, QCoreApplication::translate("MainWindow", "COM4", nullptr));

        comboBox_baud->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));

        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        checkBox_isSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        pushButton_text->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        pushButton_edit_Info->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\242\253\350\257\225\344\277\241\346\201\257", nullptr));
        checkBox_filtering->setText(QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242", nullptr));
        checkBox_save_data->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
