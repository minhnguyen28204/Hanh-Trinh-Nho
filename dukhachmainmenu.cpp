#include "dukhachmainmenu.h"
#include "ui_dukhachmainmenu.h"

DuKhachMainMenu::DuKhachMainMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DuKhachMainMenu)
{
    ui->setupUi(this);
}

DuKhachMainMenu::~DuKhachMainMenu()
{
    delete ui;
}

void DuKhachMainMenu::on_pushButton_clicked()
{
    this->close();
}

