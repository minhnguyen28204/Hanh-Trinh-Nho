#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "ResourcesIdentifier.h"

namespace Ui {
class Map;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr, bool isS = false);
    ~Form();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Map *ui;
    bool isStudent;
    int currentWidget;

    void getDistrictWidget(District::ID id);
};

#endif // FORM_H
