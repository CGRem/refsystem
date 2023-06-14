#include "widget.h"
#include "ui_widget.h"
#include "settings.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    proc_r::primary_start(ui);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_mainsettings_clicked()
{
    settings settings_w(ui);
    settings_w.setModal(true);
    settings_w.exec();

}

