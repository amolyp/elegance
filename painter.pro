#-------------------------------------------------
#
# Project created by QtCreator 2015-01-09T16:25:07
#
#-------------------------------------------------

QT       += core gui
QT += widgets

TARGET = painter
TEMPLATE = app

INCLUDEPATH +=  /opt/scca/src/include \
                /usr/local/qwt-6.0.2/include

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
LIBS +=    -lqwt
