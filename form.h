#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr, bool isS = false);
    ~Form();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    bool isStudent;
};

#endif // FORM_H
