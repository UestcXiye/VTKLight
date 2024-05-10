#include "myVTKLight.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myVTKLight w;
    w.show();
    return a.exec();
}
