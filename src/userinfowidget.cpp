#include "userinfowidget.h"
#include "./ui_userinfowidget.h"

UserInfoWidget::UserInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserInfoWidget)
{
    ui->setupUi(this);

    initAll();
}

UserInfoWidget::~UserInfoWidget()
{
    delete ui;
}

void UserInfoWidget::renewInfo(QString account, QString name, QString sex, QString handy, QString phone)
{
    ui->label_account->setText(account);
    ui->label_name->setText(name);
    ui->label_sex->setText(sex);
    ui->label_handy->setText(handy);
    ui->label_phone->setText(phone);
}

void UserInfoWidget::initAll()
{

    initWiaget = new initInfoWidget;
    initWiaget->show();  //选择账号界面

    connect(initWiaget,&initInfoWidget::UpdataInfo,this,&UserInfoWidget::renewInfo);

}

