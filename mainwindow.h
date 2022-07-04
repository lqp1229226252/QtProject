#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QString>
#include <QTimer>
#include <QTime>
#include <windows.h>
#include <QDateTime>
#include <QDate>
#include <QFileDialog>

#include <QtCharts>
using namespace QtCharts;
#include "qcustomplot.h"
#include "thread_receive.h"
#include "savefilepath.h"

#pragma push_macro("slots")
#undef slots
#include <Python.h>
#pragma pop_macro("slots")

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui; //主界面ui空间公共化。
    QSerialPort port_1; //串口
    int save_num=0; //保存数据参数，1 为保存数据，0位不保存。
    Thread_receive *thread_receive= new Thread_receive(&port_1, this); //接受数据线程




private:
    void select_port();
    void port_init();
    void port_open();
    void port_close();
    void port_receive();
    void isSaveData();
    void port_state_label();
    void refresh_showTime();



    void wiget_chart_eeg_init(QCustomPlot *widget);

//    void wiget_chart_result_init();


    SaveFilePath *saveFilePath=new SaveFilePath;
    QTimer *tiemr_showTiem=new QTimer(this);
    QDateTime dateTime_showTime;
    int portIsOpen;
    //画eeg图需要的参数
    QTimer *timer_Plot_eeg; //触发更新图像的时钟
    QChart *chart_eeg=new QChart(); //画图的图表
    QLineSeries *series_eeg=new QLineSeries; //曲线的值
    QValueAxis *axisX_eeg;
    QValueAxis *axisY_eeg;


signals:
    void isSave();
    void isNotSave();

private slots:
//    void on_pushButton_edit_Info_clicked();
};
#endif // MAINWINDOW_H
