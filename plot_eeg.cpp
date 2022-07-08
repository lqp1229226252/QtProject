#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::wiget_chart_eeg_init(QCustomPlot *widget){
    widget->addGraph();
    widget->addGraph(); // red line
    widget->graph(0)->setPen(QPen(Qt::red));
    widget->graph(0)->setAntialiasedFill(true);
    widget->graph(0)->setName("values");


    widget->xAxis->setLabel("time");
    widget->yAxis->setLabel("values");

    QSharedPointer<QCPAxisTickerDateTime> timeTicker(new QCPAxisTickerDateTime); //时间日期作为X轴
    timeTicker->setDateTimeFormat("hh:mm:ss");
    widget->xAxis->setTicker(timeTicker);
    widget->xAxis->setRange(0, 500);

    widget->axisRect()->setupFullAxesBox();
    widget->yAxis->setRange(0, 100);

    // make left and bottom axes transfer their ranges to right and top axes:使左轴和下轴将其范围转移到右轴和上轴
    connect(widget->xAxis, SIGNAL(rangeChanged(QCPRange)), widget->xAxis2, SLOT(setRange(QCPRange)));
    connect(widget->yAxis, SIGNAL(rangeChanged(QCPRange)), widget->yAxis2, SLOT(setRange(QCPRange)));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    connect(timer_Plot_eeg, &QTimer::timeout,[=](){
        realtimeDataSlot();
    });
    timer_Plot_eeg->start(100); // Interval 0 means to refresh as fast as possible
}

void MainWindow::realtimeDataSlot(){
//      start_time = QDateTime::currentDateTime();

    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
    qsrand(QTime::currentTime().msec() + QTime::currentTime().second() * 10000);

    double value0 = qrand() % 100;
//    double value1 = qrand() % 80;
//      time_pass =QDateTime::fromMSecsSinceEpoch(QDateTime::currentDateTime().toMSecsSinceEpoch() - start_time.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");

    ui->widget_chart->graph(0)->addData(key,value0);

    ui->widget_chart->xAxis->setRange(key, 5, Qt::AlignRight);
    ui->widget_chart->replot();


}


