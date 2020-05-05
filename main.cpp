#include "plataforma.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plataforma w;
    w.show();

    return a.exec();
}
