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
