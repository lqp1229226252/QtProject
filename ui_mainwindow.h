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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QCustomPlot *widget_chart;
    QLabel *label_showTime;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *widget_chart_result;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QToolButton *startButton;
    QToolButton *pauseButton;
    QToolButton *stopButton;
    QComboBox *comboBox_2;
    QComboBox *comboBox_portName;
    QPushButton *pushButton_select;
    QComboBox *comboBox_baud;
    QLabel *label_portState;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QPushButton *pushButton_text;
    QCheckBox *checkBox_isSave;
    QPushButton *pushButton_edit_Info;
    QCheckBox *checkBox_filtering;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1419, 926);
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_chart = new QCustomPlot(centralwidget);
        widget_chart->setObjectName(QString::fromUtf8("widget_chart"));
        sizePolicy.setHeightForWidth(widget_chart->sizePolicy().hasHeightForWidth());
        widget_chart->setSizePolicy(sizePolicy);
        widget_chart->setMinimumSize(QSize(700, 0));

        gridLayout->addWidget(widget_chart, 0, 0, 2, 1);

        label_showTime = new QLabel(centralwidget);
        label_showTime->setObjectName(QString::fromUtf8("label_showTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_showTime->sizePolicy().hasHeightForWidth());
        label_showTime->setSizePolicy(sizePolicy1);
        label_showTime->setMinimumSize(QSize(50, 30));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_showTime->setFont(font);

        gridLayout->addWidget(label_showTime, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_chart_result = new QCustomPlot(centralwidget);
        widget_chart_result->setObjectName(QString::fromUtf8("widget_chart_result"));
        widget_chart_result->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_chart_result->sizePolicy().hasHeightForWidth());
        widget_chart_result->setSizePolicy(sizePolicy2);
        widget_chart_result->setMinimumSize(QSize(100, 400));
        widget_chart_result->setToolTipDuration(1);

        verticalLayout_3->addWidget(widget_chart_result);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        startButton = new QToolButton(tab_1);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(20, 70, 41, 41));
        startButton->setStyleSheet(QString::fromUtf8("background-image:url(:/start.png)"));
        startButton->setArrowType(Qt::NoArrow);
        pauseButton = new QToolButton(tab_1);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(70, 70, 41, 41));
        pauseButton->setStyleSheet(QString::fromUtf8("background-image:url(:/pause.png)"));
        stopButton = new QToolButton(tab_1);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(120, 70, 41, 41));
        stopButton->setStyleSheet(QString::fromUtf8("background-image:url(:/stop.png)"));
        comboBox_2 = new QComboBox(tab_1);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(280, 140, 81, 31));
        comboBox_portName = new QComboBox(tab_1);
        comboBox_portName->setObjectName(QString::fromUtf8("comboBox_portName"));
        comboBox_portName->setGeometry(QRect(110, 10, 80, 20));
        sizePolicy2.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy2);
        comboBox_portName->setMinimumSize(QSize(80, 20));
        comboBox_portName->setMaximumSize(QSize(80, 20));
        pushButton_select = new QPushButton(tab_1);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(10, 10, 80, 20));
        sizePolicy2.setHeightForWidth(pushButton_select->sizePolicy().hasHeightForWidth());
        pushButton_select->setSizePolicy(sizePolicy2);
        pushButton_select->setMinimumSize(QSize(80, 20));
        pushButton_select->setMaximumSize(QSize(80, 20));
        comboBox_baud = new QComboBox(tab_1);
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));
        comboBox_baud->setGeometry(QRect(220, 10, 80, 20));
        sizePolicy2.setHeightForWidth(comboBox_baud->sizePolicy().hasHeightForWidth());
        comboBox_baud->setSizePolicy(sizePolicy2);
        comboBox_baud->setMaximumSize(QSize(80, 20));
        label_portState = new QLabel(tab_1);
        label_portState->setObjectName(QString::fromUtf8("label_portState"));
        label_portState->setGeometry(QRect(170, 70, 44, 44));
        label_portState->setMinimumSize(QSize(44, 44));
        label_portState->setMaximumSize(QSize(44, 44));
        label_portState->setPixmap(QPixmap(QString::fromUtf8(":/red.png")));
        pushButton_open = new QPushButton(tab_1);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(250, 90, 118, 27));
        sizePolicy2.setHeightForWidth(pushButton_open->sizePolicy().hasHeightForWidth());
        pushButton_open->setSizePolicy(sizePolicy2);
        pushButton_close = new QPushButton(tab_1);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(390, 90, 118, 27));
        sizePolicy2.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy2);
        pushButton_close->setMinimumSize(QSize(118, 27));
        pushButton_close->setMaximumSize(QSize(118, 27));
        pushButton_text = new QPushButton(tab_1);
        pushButton_text->setObjectName(QString::fromUtf8("pushButton_text"));
        pushButton_text->setGeometry(QRect(450, 140, 75, 23));
        sizePolicy2.setHeightForWidth(pushButton_text->sizePolicy().hasHeightForWidth());
        pushButton_text->setSizePolicy(sizePolicy2);
        checkBox_isSave = new QCheckBox(tab_1);
        checkBox_isSave->setObjectName(QString::fromUtf8("checkBox_isSave"));
        checkBox_isSave->setGeometry(QRect(370, 140, 91, 27));
        sizePolicy2.setHeightForWidth(checkBox_isSave->sizePolicy().hasHeightForWidth());
        checkBox_isSave->setSizePolicy(sizePolicy2);
        pushButton_edit_Info = new QPushButton(tab_1);
        pushButton_edit_Info->setObjectName(QString::fromUtf8("pushButton_edit_Info"));
        pushButton_edit_Info->setGeometry(QRect(350, 190, 104, 27));
        sizePolicy2.setHeightForWidth(pushButton_edit_Info->sizePolicy().hasHeightForWidth());
        pushButton_edit_Info->setSizePolicy(sizePolicy2);
        pushButton_edit_Info->setMaximumSize(QSize(16777215, 50));
        pushButton_edit_Info->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        checkBox_filtering = new QCheckBox(tab_1);
        checkBox_filtering->setObjectName(QString::fromUtf8("checkBox_filtering"));
        checkBox_filtering->setGeometry(QRect(220, 130, 91, 27));
        sizePolicy2.setHeightForWidth(checkBox_filtering->sizePolicy().hasHeightForWidth());
        checkBox_filtering->setSizePolicy(sizePolicy2);
        checkBox_filtering->setMaximumSize(QSize(16777215, 50));
        checkBox_filtering->setStyleSheet(QString::fromUtf8("font: 25 12pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, -21, 691, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 691, 181));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_3, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayoutWidget_3 = new QWidget(widget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(-1, -31, 691, 211));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(widget, QString());

        verticalLayout->addWidget(tabWidget);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1419, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SleepMonitor", nullptr));
        label_showTime->setText(QString());
#if QT_CONFIG(tooltip)
        startButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/prefix1/start.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        startButton->setText(QString());
        pauseButton->setText(QString());
        stopButton->setText(QString());
        pushButton_select->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\344\270\262\345\217\243", nullptr));
        comboBox_baud->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_portState->setText(QString());
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        pushButton_text->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        checkBox_isSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        pushButton_edit_Info->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\242\253\350\257\225\344\277\241\346\201\257", nullptr));
        checkBox_filtering->setText(QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", " \347\235\241\347\234\240\345\271\262\351\242\204", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
