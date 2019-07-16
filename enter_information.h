#ifndef ENTER_INFORMATION_H
#define ENTER_INFORMATION_H
#include<QCloseEvent>
#include <QWidget>
#include<QDialog>
#include<QMessageBox>
#include"pausesave.h"
namespace Ui {
class Enter_Information;
}

class Enter_Information : public QDialog
{
    Q_OBJECT

public:
    explicit Enter_Information( QDialog *parent = nullptr);
    ~Enter_Information();

private slots:
    void on_confirm_clicked();
private:
    Ui::Enter_Information *ui;
};

#endif // ENTER_INFORMATION_H
