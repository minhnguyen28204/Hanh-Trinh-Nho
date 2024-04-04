#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include <QPixmap>
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Hành trình nhỏ");
    QFontDatabase::addApplicationFont("fonts/iCielBCCubano-Normal.otf");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dukhach_clicked()
{
    bool is_student = false;
    mForm = new Form(this,is_student);
    mForm->show();
}


void MainWindow::on_hocsinh_clicked()
{
    bool is_student = true;
    mForm = new Form(this,is_student);
    mForm->show();
}

