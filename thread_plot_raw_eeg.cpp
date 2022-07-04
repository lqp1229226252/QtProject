#include "thread_plot_raw_eeg.h"

Thread_plot_raw_EEG::Thread_plot_raw_EEG(QObject *plotView,QObject *parent) :
    QThread(parent),plotView_eeg(plotView)
{
    series->setName("eeg曲线显示");

}

void Thread_plot_raw_EEG::run(){
    qDebug()<<"Thread_plot_raw_EEG:run";
}
