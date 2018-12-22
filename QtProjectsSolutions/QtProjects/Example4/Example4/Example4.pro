#-------------------------------------------------
#
# Project created by QtCreator 2018-02-05T14:11:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Example4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mywidget.cpp \
    childwindow.cpp

HEADERS  += mainwindow.h \
    mywidget.h \
    childwindow.h

FORMS    += mainwindow.ui \
    mywidget.ui
