#include "linkport.h"
#include "ui_linkport.h"

LinkPort::LinkPort(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinkPort)
{
    ui->setupUi(this);
}

LinkPort::~LinkPort()
{
    delete ui;
}
