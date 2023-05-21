#include "widget.h"

#include <QApplication>
#include "objects.h"

// global settings
bool obj_r::MainSettings::SETTING_TIME = 0;

// end global settings
int main(int argc, char *argv[])
{
    obj_r::read_db();
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
