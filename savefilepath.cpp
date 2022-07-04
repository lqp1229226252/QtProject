#include "savefilepath.h"
#include "ui_savefilepath.h"

SaveFilePath::SaveFilePath(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaveFilePath)
{
    ui->setupUi(this);
}

SaveFilePath::~SaveFilePath()
{
    delete ui;
}
