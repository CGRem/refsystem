#ifndef PROCEDURES_H
#define PROCEDURES_H
#include "functions.h"
#include "objects.h"

#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

namespace proc_r {
int primary_start(Ui::Widget* ui); // первичный запуск, чтение настроек, установка старт. парам

} // proc_r
#endif // PROCEDURES_H
