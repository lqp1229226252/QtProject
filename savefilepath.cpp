#include "savefilepath.h"
#include "ui_savefilepath.h"

SaveFilePath::SaveFilePath(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaveFilePath)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
}

SaveFilePath::~SaveFilePath()
{
    delete ui;
}
