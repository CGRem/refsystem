#include "widget.h"
#include "ui_widget.h"
#include "settings.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    if(proc_r::primary_start(ui)){
        qDebug() << "файл настроек не удалось записать";
    }
    QString str = QString::fromStdString(obj_r::MainSettings::DBASE_FOLDER);
    qDebug() << str;

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

