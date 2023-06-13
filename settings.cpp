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

    std::string standart_path;
    func_r::to_standart_path(standart_path, path_dir);
    QString to_set = QString::fromStdString(standart_path);
    ui->lbl_pathdirbase->setText(to_set);
}

