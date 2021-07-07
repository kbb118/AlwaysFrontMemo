#include <QApplication>

#include "alwaystopmemo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AlwaysTopMemo window;
    window.show();
    return a.exec();
}
