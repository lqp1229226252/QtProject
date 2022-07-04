#include "showtime.h"

ShowTime::ShowTime(QLabel *label_showTime,QObject *parent) :
    QThread(parent),label_showTime(label_showTime)
{

}
ShowTime::~ShowTime(){

}
