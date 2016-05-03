#-------------------------------------------------
#
# Project created by QtCreator 2016-04-19T18:42:25
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = debate-platform
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    node.cpp

HEADERS  += widget.h \
    node.h

FORMS    += widget.ui \
    node.ui

RESOURCES += \
    resources.qrc
