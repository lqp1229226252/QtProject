/********************************************************************************
** Form generated from reading UI file 'savefilepath.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEFILEPATH_H
#define UI_SAVEFILEPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveFilePath
{
public:

    void setupUi(QWidget *SaveFilePath)
    {
        if (SaveFilePath->objectName().isEmpty())
            SaveFilePath->setObjectName(QString::fromUtf8("SaveFilePath"));
        SaveFilePath->resize(400, 300);

        retranslateUi(SaveFilePath);

        QMetaObject::connectSlotsByName(SaveFilePath);
    } // setupUi

    void retranslateUi(QWidget *SaveFilePath)
    {
        SaveFilePath->setWindowTitle(QCoreApplication::translate("SaveFilePath", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveFilePath: public Ui_SaveFilePath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEFILEPATH_H
