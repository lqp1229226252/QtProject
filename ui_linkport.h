/********************************************************************************
** Form generated from reading UI file 'linkport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKPORT_H
#define UI_LINKPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkPort
{
public:

    void setupUi(QWidget *LinkPort)
    {
        if (LinkPort->objectName().isEmpty())
            LinkPort->setObjectName(QString::fromUtf8("LinkPort"));
        LinkPort->resize(400, 300);

        retranslateUi(LinkPort);

        QMetaObject::connectSlotsByName(LinkPort);
    } // setupUi

    void retranslateUi(QWidget *LinkPort)
    {
        LinkPort->setWindowTitle(QCoreApplication::translate("LinkPort", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinkPort: public Ui_LinkPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKPORT_H
