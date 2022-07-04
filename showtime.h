#ifndef SHOWTIME_H
#define SHOWTIME_H

#include <QThread>
#include <QLabel>

class ShowTime : public QThread
{
    Q_OBJECT
public:
    ShowTime(QLabel *label_showTime,QObject *parent = nullptr);
    ~ShowTime();

    QLabel label_showTime;

signals:

};

#endif // SHOWTIME_H
