#ifndef THREAD_RECEIVE_H
#define THREAD_RECEIVE_H

#include <QThread>
#include <QSerialPort>
#include <QDebug>

class Thread_receive : public QThread
{
    Q_OBJECT
public:
    Thread_receive(QSerialPort *port,QObject *parent = nullptr);
    ~Thread_receive();

    void run();
    void port_receive();
    void port_init();

    QSerialPort *port_1;
    QByteArray array_all;
    QByteArray array_save;
    int save_num;

signals:

};

#endif // THREAD_RECEIVE_H
