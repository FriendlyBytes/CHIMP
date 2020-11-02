#include "mainwindow.h"
#include <unistd.h>
#include <QApplication>
#include <QFile>
#include <limits.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //App style:
    QFile File(":/stylesheets/qss/MaterialDark.qss");
    File.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(File.readAll());
    qApp->setStyleSheet(StyleSheet);


    MainWindow w;
    w.show();
    return a.exec();
}
