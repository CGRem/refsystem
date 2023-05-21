#ifndef OBJECTS_H
#define OBJECTS_H
#include <fstream>
#include <iostream>
#include <vector>
#include "sqlite\sqlite3.h"
namespace obj_r {
void read_db();
class MainSettings{
    public:
    static bool SETTING_TIME;

};


} // obj_r

#endif // OBJECTS_H
