#ifndef RENEWINFOWIDGET_H
#define RENEWINFOWIDGET_H

#include <QWidget>

namespace Ui {
class RenewInfoWidget;
}

class RenewInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RenewInfoWidget(QWidget *parent = nullptr);
    ~RenewInfoWidget();

    int ModifyOrRegister=0;

public slots:
    void ShowMessageBos(QString);

    void InitLabel(QString account,QString name,QString sex,QString handy,QString phone ,int);

signals:
    void RegisterInfo(QString,QString,QString,QString,QString,int);

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::RenewInfoWidget *ui;
};

#endif // RENEWINFOWIDGET_H
