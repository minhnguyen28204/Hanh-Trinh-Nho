#include "form.h"
#include "ui_form.h"
#include <QStackedWidget>
#include <QFont>

Form::Form(QWidget *parent, bool isS)
    : QWidget(parent)
    , ui(new Ui::Map)
    , isStudent(isS)
    , currentWidget(-1)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(currentWidget);
}

Form::~Form()
{
    delete ui;
}


void Form::on_pushButton_2_clicked()
{
    this->close();
}


void Form::on_pushButton_3_clicked()
{
    currentWidget--;
    if (currentWidget < 0){
        currentWidget = 1;
    }
    ui->stackedWidget->setCurrentIndex(currentWidget);
}

