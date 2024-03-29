#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include "dukhachmainmenu.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Hành trình nhỏ");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_batdau_clicked()
{
    mForm = new Form(this);
    mForm->setWindowModality(Qt::WindowModal);
    mForm->show();
}


void MainWindow::on_xephang_clicked()
{
    DuKhachMainMenu *dukhachMainmenu = new DuKhachMainMenu(this);
    dukhachMainmenu->setWindowModality(Qt::WindowModal);
    dukhachMainmenu->show();
}

