#include "renewinfowidget.h"
#include "ui_renewinfowidget.h"

#include <QMessageBox>
#include <QTimer>
#include <QDebug>

RenewInfoWidget::RenewInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RenewInfoWidget)
{
    ui->setupUi(this);
}

RenewInfoWidget::~RenewInfoWidget()
{
    delete ui;
}

void RenewInfoWidget::ShowMessageBos(QString str)
{
    QMessageBox *box = new QMessageBox(QMessageBox::Information,"错误",str);
    QTimer::singleShot(2000,box,SLOT(accept()));
    box->exec();
}

void RenewInfoWidget::InitLabel(QString account, QString name, QString sex, QString handy, QString phone, int typeInput)
{
    ui->lineEdit_account->setText(account);
    ui->lineEdit_name->setText(name);
    ui->lineEdit_sex->setText(sex);
    ui->lineEdit_handy->setText(handy);
    ui->lineEdit_phone->setText(phone);
    ModifyOrRegister = typeInput;
}

void RenewInfoWidget::on_pushButton_confirm_clicked()
{
    QString account = ui->lineEdit_account->text();
    QString name = ui->lineEdit_name->text();
    QString sex = ui->lineEdit_sex->text();
    QString handy = ui->lineEdit_handy->text();
    QString phone = ui->lineEdit_phone->text();
    emit RegisterInfo(account,name,sex,handy,phone,ModifyOrRegister);
    if(ModifyOrRegister){

    }

}
