#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

void MainWindow::CommSetWidget_init(){
    port_init();
    select_port();
    connect(ui->pushButton_close,&QPushButton::clicked,[=](){
        port_close();
    });//已用
    connect(ui->pushButton_open,&QPushButton::clicked,[=](){
        port_open();
    });//已用
    connect(ui->pushButton_select,&QPushButton::clicked,[=](){
        select_port();
    });//已用
    connect(ui->startButton,&QPushButton::clicked,[=](){

    });
    connect(ui->pauseButton,&QPushButton::clicked,[=](){
        thread_receive->save_num=0;
    });
    connect(ui->stopButton,&QPushButton::clicked,[=](){
        port_close();
    });
}

void MainWindow::port_init(){
    port_1.setPortName(ui->comboBox_portName->currentText());
    port_1.setBaudRate(ui->comboBox_baud->currentText().toInt());
    port_1.setParity(QSerialPort::NoParity);
    port_1.setStopBits(QSerialPort::OneStop);
    port_1.setDataBits(QSerialPort::Data8);
}

void MainWindow::port_open(){

    if(!port_1.isOpen()){
        port_init();
        port_1.open(QIODevice::ReadWrite);
        Sleep(100);
        thread_receive->start();
        port_state_label();
        thread_receive->save_num=1;
        wiget_chart_eeg_init(ui->widget_chart);
//        if(port_1.isOpen()){
//            connect(&port_1,&QSerialPort::readyRead,[=](){
//                MainWindow::port_receive();
//            });
//            qDebug()<<"MainWindow::port_open：串口已经打开";
//        }
    }

    else{
        qDebug()<<"串口已经打开, 请勿重复打开串口";
    }

}

//是否保存数据
void MainWindow::isSaveData(){

    qDebug()<<"save_num:"<<save_num;
    if(port_1.isOpen()){
//            thread_receive->save_num=ui->checkBox_isSave->isChecked();
    }
    else{
        qDebug()<<"请先接收数据"<<endl;
    }
}


void MainWindow::select_port(){
    ui->comboBox_portName->clear();
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->comboBox_portName->addItem(info.portName());
    }
}


void MainWindow::port_close(){
    if(port_1.isOpen()){
        port_1.close();
        port_state_label();
    }
    else {
        qDebug()<<u8"串口已经关闭";
    }
}

void MainWindow::port_state_label(){
    qDebug()<<"port_state"<<port_1.isOpen();
    if (port_1.isOpen()){
        bool a=pixmap.load("://green.png");
        ui->label_portState->setPixmap(pixmap);
    }
    else{
        bool a=pixmap.load("://red.png");
        ui->label_portState->setPixmap(pixmap);
    }
}
