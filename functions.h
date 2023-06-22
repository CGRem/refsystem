#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "objects.h"
#include <QWidget>
#include <windows.h>
#include <Shlwapi.h>

namespace func_r {
int write_mainsettings(); // запись на диск главных настроек
int read_mainsettings(); // чтение файла главных настроек
int to_standart_path(std::string& path_Str, const QString& path_QStr); // стандартизация путей
bool check_folder_exists(const std::string& path_folder_Str); // проверка сущ. папки


} // func_r

#endif // FUNCTIONS_H
