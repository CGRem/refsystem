#include "functions.h"
namespace func_r {
int write_mainsettings(){
    std::ofstream file_settings_Ofs;
    file_settings_Ofs.open("settings.bin", std::ios::out | std::ios::binary);
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
    file_settings_Ifs.open("settings.bin", std::ios::out | std::ios::binary);
    if (file_settings_Ifs.is_open()){
        int length_path_Int = 0;
        file_settings_Ifs.read((char*)&length_path_Int, sizeof(int));
        char pathbase_Chr[length_path_Int];
        file_settings_Ifs.read(pathbase_Chr, length_path_Int * sizeof(char));
        file_settings_Ifs.close();
        obj_r::MainSettings::DBASE_FOLDER = std::string(pathbase_Chr);
        return 0;
    }
    else {return 1;} // не удалось прочитать файл, файла не существует?
}

} // func_r
