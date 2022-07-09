#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_sleepinterventionwidget.h"

void MainWindow::ControlWnd_init(){
//    connect(ui->pushButton,&QPushButton::clicked,[=](){
//        ui->stackedWidget_ControlWnd->setCurrentIndex(0);
//    });
//    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
//        ui->stackedWidget_ControlWnd->setCurrentIndex(1);
//    });
//    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
//        ui->stackedWidget_ControlWnd->setCurrentIndex(2);
//    });

    //串口界面初始化
    CommSetWidget_init();

    ui->verticalLayout_2->addWidget(w_sleepInteraction);

    ui->verticalLayout_4->addWidget(w_contralData);
}
