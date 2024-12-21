#include "mainframe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setStyle("fusion");
    QApplication a(argc, argv);
    MainFrame w;
    w.show();
    return a.exec();
}
