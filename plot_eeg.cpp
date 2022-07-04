#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::wiget_chart_eeg_init(QCustomPlot *widget){
    widget->addGraph();
    widget->graph(0)->setLineStyle(QCPGraph::lsLine);
    widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));

    widget->addGraph();
    widget->graph(1)->setLineStyle(QCPGraph::lsLine);
    widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));

    widget->xAxis->setSubTicks(false);          //小格刻度不显示
    widget->xAxis->setTickPen(QPen(Qt::white));
    widget->xAxis->setTickLabelFont(QFont(QFont().family(), 8));        //字体和大小
    widget->xAxis->setTickLabelRotation(150);        //标签旋转角度
}
