#include "functions.h"
namespace func_r {
int write_mainsettings(){
    std::ofstream file_settings_Ofs;
    file_settings_Ofs.open("settings.bin", std::ios::out);
    if (file_settings_Ofs.is_open()){
        std::string pathbase_Str = obj_r::MainSettings::DBASE_FOLDER;
        int length_path_Int = pathbase_Str.length();
        char pathbase_Chr[length_path_Int];
        pathbase_Str.copy(pathbase_Chr, length_path_Int);
        file_settings_Ofs.write((char*)&length_path_Int, sizeof(int));
        file_settings_Ofs.write(pathbase_Chr, length_path_Int * sizeof(char));
        file_settings_Ofs.close();
        return 0;
    }
    else {return 1;} // не удалось создать файл
}
int read_mainsettings(){
    std::ifstream file_settings_Ifs;
    file_settings_Ifs.open("settings.bin", std::ios::in);
    if (file_settings_Ifs.is_open()){
        int length_path_Int = 0;
        file_settings_Ifs.read((char*)&length_path_Int, sizeof(int));
        char pathbase_Chr[length_path_Int + 1];
        file_settings_Ifs.read(pathbase_Chr, length_path_Int * sizeof(char));
        file_settings_Ifs.close();
        pathbase_Chr[length_path_Int] = '\0';
        qDebug() << pathbase_Chr << "read";
        obj_r::MainSettings::DBASE_FOLDER = std::string(pathbase_Chr);
        return 0;
    }
    else {return 1;} // не удалось прочитать файл, файла не существует?
}
int to_standart_path(std::string& path_Str, const QString& path_QStr){
    QString path_standart_QStr = "";
    int length_path = path_QStr.length();
    for (int index = 0; index < length_path; index++){
        if (path_QStr[index] == "/"){
            path_standart_QStr += "\\";
        }
        else {
            path_standart_QStr += path_QStr[index];
        }

    }
    path_Str = path_standart_QStr.toStdString();
    qDebug() << path_standart_QStr;
    return 0;
}
bool check_folder_exists(const std::string& path_folder_Str){
//    qDebug() << path_folder_Str.c_str() << "check";
//    DWORD attrib_DW = GetFileAttributesA(path_folder_Str.c_str());
//    if (attrib_DW == INVALID_FILE_ATTRIBUTES){return 1;}
//    else {return 0;}
//    return 0;
//    if (!PathIsDirectoryA(path_folder_Str.c_str())){ return 1; }
    if (!QDir(QString::fromStdString(path_folder_Str)).exists()){ return 1; }

//    std::wstring path_folder_Wstr;
//    path_folder_Wstr.assign(path_folder_Str.begin(), path_folder_Str.end());
//    if (PathFileExistsW(path_folder_Wstr.c_str())){ return 0; }
//    else{ return 1; }
    return 0;
}

} // func_r
