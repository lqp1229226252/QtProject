#include "thread_receive.h"


Thread_receive::Thread_receive(QSerialPort *port,QObject *parent):
    QThread(parent),port_1(port)
{

}
void Thread_receive::port_init(){

}

void Thread_receive::port_receive(){
    qDebug()<<"Thread_receive.save_num="<<save_num;
    QByteArray array_temporary;
    array_temporary=port_1->readAll();
    array_all.append(array_temporary);
    if(save_num){
        array_save.append(array_temporary);
    }
    qDebug()<<"array_temporary"<<QString::fromLocal8Bit(array_temporary);
    qDebug()<<"array_all"<<QString::fromLocal8Bit(array_all);
    qDebug()<<"array_all"<<QString::fromLocal8Bit(array_save);
}

void Thread_receive::run(){
    qDebug()<<"Thread_receive::run:"<<QThread::currentThreadId();
    connect(port_1,&QSerialPort::readyRead,[=](){
        port_receive();
//        qDebug()<<"Thread_receive"<<QString::fromLocal8Bit(port_1->readAll());
//        qDebug()<<"Thread_receive::run:"<<QThread::currentThreadId();
    });
//    for(int i =0;i<100;i++){
//        qDebug()<<"Thread_receive::run:"<<i;
//        qDebug()<<"Thread_receive::run:"<<QThread::currentThreadId();
//        sleep(1);
//    }
}

Thread_receive::~Thread_receive()
{
    delete port_1;
}
