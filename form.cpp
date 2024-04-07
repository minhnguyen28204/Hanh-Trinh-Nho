#include "form.h"
#include "ui_form.h"
#include "ResourcesIdentifier.h"
#include <QStackedWidget>
#include <QFont>

void Form::getDistrictWidget(District::ID id){
    if (id == District::ID::Quan4) ui->stackedWidget->setCurrentWidget(ui->Quan5);
    if (id == District::ID::CanGio) ui->stackedWidget->setCurrentWidget(ui->CanGio);
    if (id == District::ID::Quan3) ui->stackedWidget->setCurrentWidget(ui->Quan3);
    if (id == District::ID::HocMon) ui->stackedWidget->setCurrentWidget(ui->HocMon);
}

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
    getDistrictWidget(District::ID::HocMon);
}


void Form::on_pushButton_4_clicked()
{
    currentWidget++;
    if (currentWidget > 19){
        currentWidget = 0;
    }
    ui->stackedWidget->setCurrentIndex(currentWidget);
}

