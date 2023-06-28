#include "initinfowidget.h"
#include "ui_initinfowidget.h"

#include <windows.h>

initInfoWidget::initInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::initInfoWidget)
{
    ui->setupUi(this);

    initAll();
}

initInfoWidget::~initInfoWidget()
{
    delete ui;
}

void initInfoWidget::ShowMessageBox(QString str)
{
    renewInfoWidget->close();
    QMessageBox *box = new QMessageBox(QMessageBox::Information,"提醒",str);
    QTimer::singleShot(2000,box,SLOT(accept()));
    box->exec();
}

void initInfoWidget::initAll()
{
    checkInfoWidget = new CheckInfoWidget;
    renewInfoWidget = new RenewInfoWidget;
    jsonOperate     = new JsonOperate;

    connect(renewInfoWidget,&RenewInfoWidget::RegisterInfo,jsonOperate,&JsonOperate::RegisterNewAccount);  //因为验证和注册都会打开
    connect(jsonOperate,&JsonOperate::RegisgetSucceed,[=](){
        ShowMessageBox("注册成功");
    });

    connect(jsonOperate,&JsonOperate::ShowMessagBox,this,&initInfoWidget::ShowMessageBox);
}

void initInfoWidget::on_pushButton_check_clicked()
{
    //操作内容：监测用户账户是否存在，实验了几次。 电极验证过信息就改变isCheckInfoState的值



    connect(checkInfoWidget , &CheckInfoWidget::CheckSucceed,[=](QString account, QString name, QString sex, QString handy, QString phone){
        info.account=account;
        info.name=name;
        info.sex=sex;
        info.handy=handy;
        info.phone=phone;
        checkInfoWidget->close();
        isCheckInfoState=1;
    });
    connect(checkInfoWidget , &CheckInfoWidget::ModifyUserInfo,[=](QString account,QString name,QString sex,QString handy,QString phone){
        // 信息不对想要修改信息

        renewInfoWidget->setWindowModality(Qt::ApplicationModal);
        renewInfoWidget->InitLabel(account,name,sex,handy,phone,1);
        renewInfoWidget->show();
    });

    connect(jsonOperate,&JsonOperate::CheckInfoSignal,checkInfoWidget,&CheckInfoWidget::CheckInfo);

    jsonOperate->CheckInfo(ui->lineEdit_id->text());

//    checkInfoWidget->show();

}

void initInfoWidget::on_pushButton_set_clicked()
{
    //操作内容：设置信息
    if(isCheckInfoState){
        //确认成功就将信息更新到userinfowidget界面上。
        emit UpdataInfo(info.account,info.name,info.sex,info.handy,info.phone);
        this->close();
    }
    else {

        QMessageBox *box = new QMessageBox(QMessageBox::Information,"提示","请先验证信息是否正确!");
        QTimer::singleShot(2000,box,SLOT(accept()));
        box->exec();
    }

}

void initInfoWidget::on_pushButton_register_clicked()
{

    connect(jsonOperate,&JsonOperate::RegisgetError,[=](){
        renewInfoWidget->ShowMessageBos("该用户已经存在！");
    });

    //没有账号想要插入一个账号
    renewInfoWidget->ModifyOrRegister=0;
    renewInfoWidget->setWindowModality(Qt::ApplicationModal);
    renewInfoWidget->show();
}
