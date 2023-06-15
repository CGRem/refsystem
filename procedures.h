#ifndef PROCEDURES_H
#define PROCEDURES_H
#include "functions.h"
#include "objects.h"

#include "widget.h"
#include "ui_widget.h"
#include "settings.h"
#include "ui_settings.h"
#include <QDebug>

namespace proc_r {
int primary_start(Ui::Widget* ui); // первичный запуск, чтение настроек, установка старт. парам
int set_main_interface(Ui::Widget* ui); // установить интерф. гл. окна
int constructor_settings(Ui::settings* ui); // конструктор окна настроек
} // proc_r
#endif // PROCEDURES_H
