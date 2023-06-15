#include "settings.h"
#include "ui_settings.h"

settings::settings(Ui::Widget *mw, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    this->settings_mw = mw;
    proc_r::constructor_settings(ui);
}

settings::~settings()
{
    proc_r::set_main_interface(this->settings_mw);
    delete ui;
}

void settings::on_btn_setopendir_clicked()
{
    QString path_dir_QStr = QFileDialog::getExistingDirectory(this, "открыть папку с базами", "..//");
    std::string standart_path;
    func_r::to_standart_path(standart_path, path_dir_QStr);
    if (standart_path != ""){
        obj_r::MainSettings::DBASE_FOLDER_SET = standart_path;
    }
    ui->lbl_setpathdir->setText(QString::fromStdString(obj_r::MainSettings::DBASE_FOLDER_SET));
    bool check_path_Bl = func_r::check_folder_exists(obj_r::MainSettings::DBASE_FOLDER_SET);
    if (check_path_Bl){ ui->lbl_setstatusdir->setText("[x]"); }
    if (!check_path_Bl){ ui->lbl_setstatusdir->setText("[v]"); }
}

void settings::on_btn_savesettings_clicked()
{
    obj_r::MainSettings::DBASE_FOLDER = obj_r::MainSettings::DBASE_FOLDER_SET;
    func_r::write_mainsettings();
}

