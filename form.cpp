#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent, bool isS)
    : QWidget(parent)
    , ui(new Ui::Form)
    , isStudent(isS)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}


void Form::on_pushButton_clicked()
{
    this->close();
}

