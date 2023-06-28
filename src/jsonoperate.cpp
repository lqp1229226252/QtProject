#include "jsonoperate.h"




JsonOperate::JsonOperate(QObject *parent) : QObject(parent)
{

}

void JsonOperate::RegisterNewAccount(QString account, QString name, QString sex, QString handy, QString phone,int typeInput)
{
//    typeInput  为0 ： 是注册模式   为1 ：是修改模式

    QString fileName= "data/userInfo.json";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QJsonDocument jdc(QJsonDocument::fromJson(file.readAll()));
    file.close();

    QJsonObject obj = jdc.object();

    QJsonObject newOnes;
//    newOnes.insert("account",account);
    newOnes.insert("name",name);
    newOnes.insert("sex",sex);
    newOnes.insert("handy",handy);
    newOnes.insert("phone",phone);

    if(obj.contains(account)){
        if(typeInput){
            obj.insert(account,newOnes);
            QJsonDocument doc(obj);
            QByteArray json=doc.toJson();
            file.open(QFile::WriteOnly);
            file.write(json);
            file.close();
            emit RegisgetSucceed();
            CheckInfo(account);

        }
        else {
            //注册失败，该用户已经存在
            emit RegisgetError();
        }
    }
    else{
        obj.insert(account,newOnes);
        QJsonDocument doc(obj);
        QByteArray json=doc.toJson();
        file.open(QFile::WriteOnly);
        file.write(json);
        file.close();
        emit RegisgetSucceed();
    }

}

void JsonOperate::CheckInfo(QString account)
{
    Info info;
    QString fileName= "data/userInfo.json";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QJsonDocument jdc(QJsonDocument::fromJson(file.readAll()));
    file.close();

    QJsonObject obj = jdc.object();

    if(obj.contains(account)){
        QJsonObject AimUser=(obj.find(account))->toObject();

        QString name=AimUser.value("name").toString();
        QString sex =AimUser.value("sex").toString();
        QString handy =AimUser.value("handy").toString();
        QString phone =AimUser.value("phone").toString();

        emit CheckInfoSignal(account,name,sex,handy,phone);
    }
    else {
//        qDebug()<<"there no the account";
        emit ShowMessagBox("there no the account");
    }
}

