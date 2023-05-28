#include "procedures.h"
namespace proc_r {
int primary_start(Ui::Widget* ui){
    if (func_r::read_mainsettings()){
        ui->lbl_statusline->setText("файла нет, пересоздаю файл");
        if (func_r::write_mainsettings()){
            ui->lbl_statusline->setText("проблема записи ф. настроек");
            return 1;
        }
    }
    else {ui->lbl_statusline->setText("настройки считаны"); return 0;}
    return 0;
}

} // proc_r
