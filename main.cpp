#include "widget.h"

#include <QApplication>
#include "objects.h"

// global settings
std::string obj_r::MainSettings::DBASE_FOLDER = "..\\refsystem\\db";
std::string obj_r::MainSettings::DBASE_FOLDER_SET = "";

// end global settings
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
