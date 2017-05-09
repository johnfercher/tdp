#-------------------------------------------------
#
# Project created by QtCreator 2017-05-09T13:29:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = beta
TEMPLATE = app

INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib \
    -l sqlite3

SOURCES += main.cpp\
        mainwindow.cpp \
    insertnewdialog.cpp \
    sqlite.cpp

HEADERS  += mainwindow.h \
    commons.h \
    insertnewdialog.h \
    sqlite.h

FORMS    += mainwindow.ui \
    insertnewdialog.ui
