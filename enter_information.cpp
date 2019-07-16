#include "enter_information.h"
#include "ui_enter_information.h"
#include<qmessagebox.h>
#include<qpalette.h>
Enter_Information::Enter_Information( QDialog *parent) :
     QDialog(parent),
    ui(new Ui::Enter_Information)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    QPalette palette;
    QPixmap pixmap(":/bg/pic/enterbg.png");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

Enter_Information::~Enter_Information()
{
    delete ui;
}
bool VerifyNumber(QString str);
void Enter_Information::on_confirm_clicked()
{
    if(ui->ID->text().size()<=5||ui->ID->text().size()<=6||VerifyNumber(ui->ID->text())==false){
        QMessageBox::critical(this,"Plase Enter Again","Enter in Correct Format",QMessageBox::Ok);
        ui->ID->clear();ui->name->clear();
    }
    else {PauseSave::name=ui->name->text();PauseSave::id=ui->ID->text();this->close();}
}

bool VerifyNumber(QString str)
{
    std::string temp = str.toStdString();
    for (int i = 0; i < str.length(); i++)
    {
        if (temp[i]<'0' || temp[i]>'9')
        {
            return false;
        }
    }

    return true;
}
