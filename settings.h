#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "widget.h"

namespace Ui {
class settings;
}

class settings : public QDialog
{
    Q_OBJECT

public:
    explicit settings(Ui::Widget *mw, QWidget *parent = nullptr);
    Ui::Widget*  settings_mw;
    ~settings();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
