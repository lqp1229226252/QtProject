QT       += core gui
QT       +=serialport
QT       +=charts

DESTDIR =D:\Qt\project\SleepMonitor\release
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CommSetWidget.cpp \
    ContralDataWidget.cpp \
    ControlWnd.cpp \
    SleepInterventionWidget.cpp \
    linkport.cpp \
    main.cpp \
    mainwindow.cpp \
    plot_eeg.cpp \
    qcustomplot.cpp \
    savefilepath.cpp \
    thread_receive.cpp

HEADERS += \
    ContralDataWidget.h \
    linkport.h \
    mainwindow.h \
    qcustomplot.h \
    savefilepath.h \
    sleepinterventionwidget.h \
    thread_receive.h

FORMS += \
    linkport.ui \
    mainwindow.ui \
    savefilepath.ui \
    sleepinterventionwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32-msvc* {
    QMAKE_CXXFLAGS *=  /wd"4100"
    contains (QMAKE_CXXFLAGS_WARN_ON, -w34100) : QMAKE_CXXFLAGS_WARN_ON -= -w34100
}


DISTFILES += \
    ../../pic_label/blue_light.png \
    ../../pic_label/red_light.png \
    release/aa.py \
    temp.py

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../software/Anaconda3/envs/pytorch/libs/ -lpython36
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../software/Anaconda3/envs/pytorch/libs/ -lpython36d
#else:unix: LIBS += -L$$PWD/../../../software/Anaconda3/envs/pytorch/libs/ -lpython36

#INCLUDEPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/libs
#DEPENDPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/libs

#INCLUDEPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/include
#DEPENDPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../software/Anaconda3/libs/ -lpython37
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../software/Anaconda3/libs/ -lpython37d
else:unix: LIBS += -L$$PWD/../../../software/Anaconda3/libs/ -lpython37

INCLUDEPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/libs
DEPENDPATH += $$PWD/../../../software/Anaconda3/envs/pytorch/libs

INCLUDEPATH += $$PWD/../../../software/Anaconda3/include
DEPENDPATH += $$PWD/../../../software/Anaconda3/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../libtorch/lib/ -ltorch
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../libtorch/lib/ -ltorchd
else:unix: LIBS += -L$$PWD/../../libtorch/lib/ -ltorch

INCLUDEPATH += $$PWD/../../libtorch/include
DEPENDPATH += $$PWD/../../libtorch/include

RESOURCES += \
    pic.qrc
