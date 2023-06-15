#include "procedures.h"
namespace proc_r {
int primary_start(Ui::Widget* ui){
    if (func_r::read_mainsettings()){
        if (func_r::write_mainsettings()){
            ui->lbl_statusline->setText("проблема записи файла настроек");
            return 1;
        }
    }
    return 0;
}
int set_main_interface(Ui::Widget* ui){
    bool check_folder_Bl = func_r::check_folder_exists(obj_r::MainSettings::DBASE_FOLDER);
    ui->lbl_maincheckpath->setText(QString::fromStdString(obj_r::MainSettings::DBASE_FOLDER));
    ui->lbl_mainpath->setText(QString::fromStdString(obj_r::MainSettings::DBASE_FOLDER));
    if (check_folder_Bl){ ui->lbl_maincheckpath->setText("[x]"); }
    if (!check_folder_Bl){ ui->lbl_maincheckpath->setText("[v]"); }
    return 0;
}
int constructor_settings(Ui::settings* ui){
    obj_r::MainSettings::DBASE_FOLDER_SET = obj_r::MainSettings::DBASE_FOLDER;
    ui->lbl_setpathdir->setText(QString::fromStdString(obj_r::MainSettings::DBASE_FOLDER_SET));
    bool check_path_Bl = func_r::check_folder_exists(obj_r::MainSettings::DBASE_FOLDER_SET);
    if (check_path_Bl){ ui->lbl_setstatusdir->setText("[x]"); }
    if (!check_path_Bl){ ui->lbl_setstatusdir->setText("[v]"); }
    return 0;
}
} // proc_r
