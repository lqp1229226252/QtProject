#include "checkinfowidget.h"
#include "ui_checkinfowidget.h"

CheckInfoWidget::CheckInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckInfoWidget)
{
    ui->setupUi(this);
}

CheckInfoWidget::~CheckInfoWidget()
{
    delete ui;
}

void CheckInfoWidget::CheckInfo(QString account,QString name,QString sex,QString handy,QString phone)
{
    //查看account账户的信息,将这些信息设置到界面上并显示出来

    ui->label_account->setText(account);
    ui->label_name->setText(name);
    ui->label_sex->setText(sex);
    ui->label_handy->setText(handy);
    ui->label_phone->setText(phone);

    if(!this->isVisible()){
        this->show();
    }

}



void CheckInfoWidget::on_pushButton_confirm_clicked()
{
    emit CheckSucceed(ui->label_account->text(),
                      ui->label_name->text(),
                      ui->label_sex->text(),
                      ui->label_handy->text(),
                      ui->label_phone->text()
                      );
}

void CheckInfoWidget::on_pushButton_modify_clicked()
{

    emit ModifyUserInfo(ui->label_account->text(),
            ui->label_name->text(),
            ui->label_sex->text(),
            ui->label_handy->text(),
            ui->label_phone->text());
}
