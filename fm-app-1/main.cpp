#include "mainwindow.h"

#include "sidebar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    SideBar s;
    return a.exec();
}
