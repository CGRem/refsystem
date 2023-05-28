#ifndef OBJECTS_H
#define OBJECTS_H
#include <fstream>
#include <iostream>
#include <vector>
#include "procedures.h"
#include "sqlite\sqlite3.h"
namespace obj_r {
class MainSettings{
    // главные настройки
    public:
    static std::string DBASE_FOLDER;
};


} // obj_r

#endif // OBJECTS_H
