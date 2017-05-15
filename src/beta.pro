#-------------------------------------------------
#
# Project created by QtCreator 2017-05-09T13:29:49
#
#-------------------------------------------------

CONFIG += qt c++11

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = beta
TEMPLATE = app

INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib \
    -l sqlite3

SOURCES += main.cpp\
        mainwindow.cpp \
    sqlite.cpp \
    createowner.cpp \
    updateowner.cpp \
    createbird.cpp \
    updatebird.cpp \
    confirmation.cpp \
    createcompetition.cpp

HEADERS  += mainwindow.h \
    commons.h \
    sqlite.h \
    createowner.h \
    updateowner.h \
    createbird.h \
    updatebird.h \
    confirmation.h \
    createcompetition.h

FORMS    += mainwindow.ui \
    createowner.ui \
    updateowner.ui \
    createbird.ui \
    updatebird.ui \
    confirmation.ui \
    createcompetition.ui
