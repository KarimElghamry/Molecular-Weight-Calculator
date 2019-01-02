#include "molecularweight.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MolecularWeight w;
    w.setWindowIcon(QIcon(":/images/C:/Users/karim/Pictures/Icons/atom.ico"));
    w.show();

    return a.exec();
}
