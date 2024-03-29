#ifndef DUKHACHMAINMENU_H
#define DUKHACHMAINMENU_H

#include <QWidget>

namespace Ui {
class DuKhachMainMenu;
}

class DuKhachMainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DuKhachMainMenu(QWidget *parent = nullptr);
    ~DuKhachMainMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DuKhachMainMenu *ui;
};

#endif // DUKHACHMAINMENU_H
