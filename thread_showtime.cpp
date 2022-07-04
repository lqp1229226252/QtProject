#include "thread_showtime.h"

Thread_showTime::Thread_showTime(QLabel *label_showTime,QObject *parent) :
    QThread(parent),label_showTime(label_showTime)
{

}


void Thread_showTime::run(){
//    connect(timer,&QTimer::timeout,[=](){
//        refresh_showTime();
//    });
//    timer->start(1000);

}
Thread_showTime::~Thread_showTime(){

}
