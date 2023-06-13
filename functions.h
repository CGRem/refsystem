#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "objects.h"
#include <QWidget>

namespace func_r {
int write_mainsettings(); // запись на диск главных настроек
int read_mainsettings(); // прочтение файла главных настроек
int to_standart_path(std::string& path_Str, const QString& path_QStr); // стандартизация путей


} // func_r

#endif // FUNCTIONS_H
