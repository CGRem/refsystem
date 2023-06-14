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

} // proc_r
