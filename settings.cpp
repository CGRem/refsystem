#include "settings.h"
#include "ui_settings.h"

settings::settings(Ui::Widget *mw, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    this->settings_mw = mw;
}

settings::~settings()
{
    delete ui;
}

void settings::on_btn_opendirbase_clicked()
{
    QString path_dir = QFileDialog::getExistingDirectory(this, "открыть папку с базами", "..//");
    ui->lbl_pathdirbase->setText(path_dir);
}

