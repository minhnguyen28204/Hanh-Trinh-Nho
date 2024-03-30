#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
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
    bool isStudent = true;
    mForm = new Form(this,isStudent);
    mForm->setWindowModality(Qt::WindowModal);
    mForm->show();
}


void MainWindow::on_xephang_clicked()
{
    bool isStudent = false;
    mForm = new Form(this,isStudent);
    mForm->setWindowModality(Qt::WindowModal);
    mForm->show();
}

