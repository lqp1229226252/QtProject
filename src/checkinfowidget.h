#ifndef CHECKINFOWIDGET_H
#define CHECKINFOWIDGET_H

#include <QWidget>

#include "UserInfoStruct.h"

namespace Ui {
class CheckInfoWidget;
}

class CheckInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CheckInfoWidget(QWidget *parent = nullptr);
    ~CheckInfoWidget();


signals:
    void CheckSucceed(QString,QString,QString,QString,QString);

    void ModifyUserInfo(QString,QString,QString,QString,QString);

public slots:
    void CheckInfo(QString,QString,QString,QString,QString);

    void on_pushButton_confirm_clicked();

    void on_pushButton_modify_clicked();

private:
    Ui::CheckInfoWidget *ui;


};

#endif // CHECKINFOWIDGET_H
