#ifndef JSONOPERATE_H
#define JSONOPERATE_H

#include <QObject>

#include "UserInfoStruct.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

class JsonOperate : public QObject
{
    Q_OBJECT
public:
    explicit JsonOperate(QObject *parent = nullptr);

signals:
    void RegisgetSucceed();

    void RegisgetError();

    void ShowMessagBox(QString);

    void CheckInfoSignal(QString,QString,QString,QString,QString);

public slots:
    void RegisterNewAccount(QString,QString,QString,QString,QString,int);

    void CheckInfo(QString);

signals:

};

#endif // JSONOPERATE_H
