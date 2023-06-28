#ifndef USERINFOWIDGET_H
#define USERINFOWIDGET_H

#include <QWidget>

#include "initinfowidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class UserInfoWidget; }
QT_END_NAMESPACE

class UserInfoWidget : public QWidget
{
    Q_OBJECT

public:
    UserInfoWidget(QWidget *parent = nullptr);
    ~UserInfoWidget();

    void renewInfo(QString account, QString name, QString sex, QString handy, QString phone);  //通过调用更新信息。



    initInfoWidget *initWiaget;

private:
    Ui::UserInfoWidget *ui;

    void initAll();
};
#endif // USERINFOWIDGET_H
