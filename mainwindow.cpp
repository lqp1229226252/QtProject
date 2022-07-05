#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

//今天dgsahdas
//#pragma comment(lib,"python36.lib")
//#include <torch/torch.h>
//#include <torch/script.h>

#undef slots
#include <Python.h>
#define slots Q_SLOTS

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_text,&QPushButton::clicked,[=](){


//        Thread_plot_raw_EEG *thread_plot_eeg=new Thread_plot_raw_EEG(ui->graphicsView_raw_eeg,parent);
//        thread_plot_eeg->start(); //未用到

//        SaveFilePath *saveFilePath=new SaveFilePath;
//        saveFilePath->show(); //窗口显示

//        /* 调用python代码 */
//        Py_SetPythonHome(L"D:\\software\\Anaconda3");
//        //如果没有在环境变量中添加python，这里要写这一句
//        //初始化python模块
//        Py_Initialize();
//        PyRun_SimpleString("import sys");
//        PyRun_SimpleString("sys.path.append('./')");
////        qDebug("Py_Initialize!\n");
//        if ( !Py_IsInitialized() )
//        {
//            qDebug("init error!\n");
//        }
//        //导入qt_py.py模块
//        PyObject* pModule = PyImport_ImportModule("aa");
////        qDebug("PyImport_ImportModule!\n");
//        if (!pModule)
//        {
//            qDebug("Cant open python file!\n");
//        }
//        //获取qt_py模块中的hello函数
//        PyObject* pFunhello= PyObject_GetAttrString(pModule,"a1");

//        if(!pFunhello)
//        {
//            qDebug()<<"Get function hello failed"<<endl;
//        }
//        //调用hello函数
//        PyObject_CallFunction(pFunhello,NULL);
//        //结束，释放python
//        Py_Finalize();

        //查看当前ID
        //        qDebug()<<"port's state:"<<port_1.isOpen();
        //        qDebug()<<"main ThreadID:"<<QThread::currentThreadId();

        //获取时间字符串
//        QDateTime dt=QDateTime().currentDateTime();
//        QString str=dt.toString("yyyy_M_d_hh_mm_ss").toUtf8();
//        qDebug()<<"time:"<<str;

        //显示子窗口
//        saveFilePath->show();

        //选择文件夹路劲
//        QString srcDirPath;
//        srcDirPath = QFileDialog::getExistingDirectory(
//                        this, "choose src Directory",
//                         "/");
//        qDebug()<<"srcDirPath:"<<srcDirPath;

    });//测试使用

    connect(tiemr_showTiem,&QTimer::timeout,[=](){
        refresh_showTime();
    });//已用
    tiemr_showTiem->start(1000);
    connect(ui->pushButton_select,&QPushButton::clicked,[=](){
        select_port();
    });//已用
    connect(ui->pushButton_open,&QPushButton::clicked,[=](){
        port_open();
        portIsOpen=1;
        port_state_label();
    });//已用
    connect(ui->pushButton_close,&QPushButton::clicked,[=](){
        port_close();
        portIsOpen=0;
        port_state_label();
    });//已用
    connect(ui->checkBox_isSave,&QCheckBox::stateChanged,[=](){
        isSaveData();
    });//已用



}

void MainWindow::select_port(){
    ui->comboBox_portName->clear();
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->comboBox_portName->addItem(info.portName());
    }
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
    save_num = (int)ui->checkBox_isSave->isChecked();
    qDebug()<<"save_num:"<<save_num;
    if(port_1.isOpen()){
            thread_receive->save_num=ui->checkBox_isSave->isChecked();
    }
    else{
        qDebug()<<"请先接收数据"<<endl;
    }
}

void MainWindow::port_receive(){
    QByteArray array=port_1.readAll();
//    ui->textBrowser->insertPlainText(QString::fromLocal8Bit(array)+" ");
//    QByteArray a("");
//    QString b;
//    for(int i =0;i<10;i++){

//        a.append(QString::number(i));
//        qDebug()<<"a::::"<<QString::fromLocal8Bit(a);//将二进制文件转换成本地编码（gbk2312）

//    }
}

void MainWindow::port_close(){
    if(port_1.isOpen()){
        port_1.close();
    }
    else {
        qDebug()<<"串口已经关闭";
    }
}

void MainWindow::port_state_label(){
    if(portIsOpen){
        ui->label_portState->setText("port's state:OPEN");
    }
    else{
        ui->label_portState->setText("port's state:CLOSE");
    }
}

void MainWindow::refresh_showTime(){
    dateTime_showTime = QDateTime::currentDateTime();
    ui->label_showTime->setText(dateTime_showTime.toString("yyyy-MM-dd hh:mm:ss ddd").toUtf8());
}



MainWindow::~MainWindow()
{
    delete tiemr_showTiem;
    delete thread_receive;

    thread_receive->quit();
    delete ui;
}



