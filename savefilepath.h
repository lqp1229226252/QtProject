#ifndef SAVEFILEPATH_H
#define SAVEFILEPATH_H

#include <QWidget>

namespace Ui {
class SaveFilePath;
}

class SaveFilePath : public QWidget
{
    Q_OBJECT

public:
    explicit SaveFilePath(QWidget *parent = nullptr);
    ~SaveFilePath();

private:
    Ui::SaveFilePath *ui;
};

#endif // SAVEFILEPATH_H
