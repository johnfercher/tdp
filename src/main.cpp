#include "mainwindow.h"

#include <QApplication>
#include "QTextCodec"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Habilita o uso de caracteres especiais (ç, ã, é, etc)
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    MainWindow w;
    w.show();

    return a.exec();
}
