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
#include <QPixmap>
#include <QtCharts>
using namespace QtCharts;
#include "qcustomplot.h"
#include "thread_receive.h"
#include "savefilepath.h"
#include "sleepinterventionwidget.h"
#include "ContralDataWidget.h"
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
    void ControlWnd_init();
    void CommSetWidget_init();

    void wiget_chart_eeg_init(QCustomPlot *widget);
    void realtimeDataSlot();
//    void wigetSetColor(QCustomPlot *widget, QColor clr1, QColor clr2);
//    void widgetDrawLine(QCustomPlot *widget, QString chartName, QString name1, QString name2,
//                                QColor clr1, QColor clr2, QVector<QString> date,
//                               QVector<double> data1, QVector<double> data2);
//    void rgbToStyle(QColor rbg);
//    void widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
//                               QVector<double> data1Dub, QVector<double> data2Dub);
//    void wiget_chart_result_init();


    SaveFilePath *saveFilePath=new SaveFilePath;
    QTimer *tiemr_showTiem=new QTimer(this);
    QDateTime dateTime_showTime;
    QDateTime start_time;
//    QString time_pass;
    QPixmap pixmap;
    int portIsOpen=0;
    //画eeg图需要的参数
    QTimer *timer_Plot_eeg=new QTimer(this); //触发更新图像的时钟
    QChart *chart_eeg=new QChart(); //画图的图表
    QLineSeries *series_eeg=new QLineSeries; //曲线的值


    //SleepInterventionWidget 睡眠干预
    QWidget *w_sleepInteraction=new SleepInterventionWidget();
//    void init_buf();
//    void read_data();
//    void cal_verify();
//    QByteArray enCode();
//    void sendSignal(QByteArray);
//    void on_send_clicked();
//    uint8_t buf_head;
//    uint16_t buf_len;
//    uint8_t  buf_code;
//    uint8_t  buf_amplitude_data;
//    uint8_t  buf_timedata;
//    uint8_t  buf_verify;
//    uint8_t  buf_num;
//    uint8_t  buf_end;

    //ContralDataWidget  控制数据
    QWidget *w_contralData=new ContralDataWidget();


signals:
    void isSave();
    void isNotSave();

private slots:
//    void on_pushButton_edit_Info_clicked();
};
#endif // MAINWINDOW_H
