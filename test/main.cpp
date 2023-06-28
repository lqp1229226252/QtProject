#include "userinfowidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserInfoWidget w;
    w.show();
    return a.exec();
}
