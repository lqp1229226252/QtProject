#ifndef LINKPORT_H
#define LINKPORT_H

#include <QWidget>

namespace Ui {
class LinkPort;
}

class LinkPort : public QWidget
{
    Q_OBJECT

public:
    explicit LinkPort(QWidget *parent = nullptr);
    ~LinkPort();

private:
    Ui::LinkPort *ui;
};

#endif // LINKPORT_H
