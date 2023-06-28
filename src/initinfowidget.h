#ifndef INITINFOWIDGET_H
#define INITINFOWIDGET_H

#include <QWidget>

#include "checkinfowidget.h"
#include <renewinfowidget.h>
#include "jsonoperate.h"

#include <QMessageBox>
#include <QDebug>
#include <QTimer>



namespace Ui {
class initInfoWidget;
}

class initInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit initInfoWidget(QWidget *parent = nullptr);
    ~initInfoWidget();

    typedef struct Info //定义作图的结构体
    {
        QString account;
        QString name;
        QString sex ;
        QString handy ;
        QString phone;
    };

signals:
    void UpdataInfo(QString,QString,QString,QString,QString);


public slots:
    void ShowMessageBox(QString);

private slots:
    void initAll();

    void on_pushButton_check_clicked();  //验证的槽函数

    void on_pushButton_set_clicked();  //确认的槽函数

    void on_pushButton_register_clicked();



private:
    Ui::initInfoWidget *ui;

    int isCheckInfoState = 0 ;  //是否验证了信息

    CheckInfoWidget *checkInfoWidget;

    RenewInfoWidget *renewInfoWidget;

    JsonOperate *jsonOperate;

    Info info;
};

#endif // INITINFOWIDGET_H
