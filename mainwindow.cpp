#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>


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
    //控制窗口初始化
    ControlWnd_init();
    connect(ui->pushButton_text,&QPushButton::clicked,[=](){
        qDebug()<<"span"<<typeid(QDateTime::fromMSecsSinceEpoch(QDateTime::currentDateTime().toMSecsSinceEpoch() - start_time.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss")).name();

//        Sleep(1);
//        end_time = QDateTime::currentDateTime();

//        qDebug()<<start_time - end_time;
//        ui->label_showTime->setText(dateTime_showTime.toString("yyyy-MM-dd hh:mm:ss ddd").toUtf8());
//    wiget_chart_eeg_init(ui->widget_chart);//表格初始化

//        Thread_plot_raw_EEG *thread_plot_eeg=new Thread_plot_raw_EEG(ui->graphicsView_raw_eeg,parent);
//        thread_plot_eeg->start(); //未用到

//        SaveFilePath *saveFilePath=new SaveFilePath;
        saveFilePath->show(); //窗口显示

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
    delete w_sleepInteraction;
    delete w_contralData;
}



