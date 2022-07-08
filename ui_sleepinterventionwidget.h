/********************************************************************************
** Form generated from reading UI file 'sleepinterventionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEEPINTERVENTIONWIDGET_H
#define UI_SLEEPINTERVENTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SleepInterventionWidget
{
public:
    QPushButton *send;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *data_vbox;
    QHBoxLayout *amplitude_hbox;
    QLabel *amplitude_label;
    QSpinBox *amplitude;
    QHBoxLayout *time_hbox;
    QLabel *time_label;
    QSpinBox *time;

    void setupUi(QWidget *SleepInterventionWidget)
    {
        if (SleepInterventionWidget->objectName().isEmpty())
            SleepInterventionWidget->setObjectName(QString::fromUtf8("SleepInterventionWidget"));
        SleepInterventionWidget->resize(429, 185);
        send = new QPushButton(SleepInterventionWidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(320, 50, 81, 81));
        verticalLayoutWidget = new QWidget(SleepInterventionWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 50, 281, 71));
        data_vbox = new QVBoxLayout(verticalLayoutWidget);
        data_vbox->setSpacing(20);
        data_vbox->setContentsMargins(11, 11, 11, 11);
        data_vbox->setObjectName(QString::fromUtf8("data_vbox"));
        data_vbox->setContentsMargins(0, 0, 0, 0);
        amplitude_hbox = new QHBoxLayout();
        amplitude_hbox->setSpacing(6);
        amplitude_hbox->setObjectName(QString::fromUtf8("amplitude_hbox"));
        amplitude_label = new QLabel(verticalLayoutWidget);
        amplitude_label->setObjectName(QString::fromUtf8("amplitude_label"));
        amplitude_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        amplitude_hbox->addWidget(amplitude_label);

        amplitude = new QSpinBox(verticalLayoutWidget);
        amplitude->setObjectName(QString::fromUtf8("amplitude"));
        amplitude->setMinimum(0);
        amplitude->setMaximum(255);
        amplitude->setValue(10);

        amplitude_hbox->addWidget(amplitude);


        data_vbox->addLayout(amplitude_hbox);

        time_hbox = new QHBoxLayout();
        time_hbox->setSpacing(6);
        time_hbox->setObjectName(QString::fromUtf8("time_hbox"));
        time_label = new QLabel(verticalLayoutWidget);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        time_hbox->addWidget(time_label);

        time = new QSpinBox(verticalLayoutWidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setMaximum(255);
        time->setValue(10);

        time_hbox->addWidget(time);


        data_vbox->addLayout(time_hbox);


        retranslateUi(SleepInterventionWidget);

        QMetaObject::connectSlotsByName(SleepInterventionWidget);
    } // setupUi

    void retranslateUi(QWidget *SleepInterventionWidget)
    {
        SleepInterventionWidget->setWindowTitle(QCoreApplication::translate("SleepInterventionWidget", "SleepInterventionWidget", nullptr));
        send->setText(QCoreApplication::translate("SleepInterventionWidget", "\345\217\221\351\200\201\n"
"\346\214\207\344\273\244", nullptr));
        amplitude_label->setText(QCoreApplication::translate("SleepInterventionWidget", "\351\234\207\345\212\250\351\251\254\350\276\276\346\214\257\345\271\205(db):", nullptr));
        time_label->setText(QCoreApplication::translate("SleepInterventionWidget", "\346\214\201\347\273\255\346\227\266\351\227\264(s):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SleepInterventionWidget: public Ui_SleepInterventionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEEPINTERVENTIONWIDGET_H
