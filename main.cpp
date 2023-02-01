#include "mainwindow.h"

#include <QApplication>

#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translation;
    translation.load("test1_kr.qm");
    QApplication::installTranslator(&translation);
    //QDebug()<<QObject::tr(("hellllllllp meeeeee"));

    MainWindow w;
    w.show();

    return a.exec();
}
