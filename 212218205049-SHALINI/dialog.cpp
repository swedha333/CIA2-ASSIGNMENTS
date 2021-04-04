#include "dialog.h"
#include "ui_dialog.h"
#include <QIcon>
#include <QMessageBox>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_5_clicked(bool checked)
{
    QIcon *ico = new QIcon();
        ico->addPixmap(QPixmap("C:/Users/muthu/Desktop/on.png"),QIcon::Normal,QIcon::On);
        if(QIcon::On==true) {
            qDebug() <<"button is checked ";}
        else
        {qDebug() <<"button is checked ";}
        ico->addPixmap(QPixmap("C:/Users/muthu/Desktop/off.png"),QIcon::Normal,QIcon::Off);
        ui->pushButton_5->setIcon(*ico);
        ui->pushButton_5->setCheckable(true);
}

void Dialog::on_pushButton_clicked()
{
     QMessageBox::information(this,"V.Shalini 212218205049", "This is QMessageBox");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                       "V.Shalini 212218205049", "Do You like strawberry?",
                              QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes) {
            QMessageBox::information(this,"strawberry","yes");
        }
        if(reply == QMessageBox::No)
        {
            QMessageBox::information(this,"No strawberry","No");
        }
}


void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                       "V.Shalini 212218205049", "This is Custom message",
                              QMessageBox::Yes | QMessageBox::NoToAll | QMessageBox::YesToAll | QMessageBox::No);
        if(reply == QMessageBox::Yes) {
            qDebug() <<"Nothing is displayed in QMessageBox";
        }
        if(reply == QMessageBox::YesToAll)
        {
            QMessageBox::warning(this,"V.Shalini 212218205049","Display the message with warning as YesToAll");
        }
        if(reply == QMessageBox::NoToAll)
        {
            QMessageBox::warning(this,"V.Shalini 212218205049","Don't display the message with warning as YesToAll");
        }
        if(reply == QMessageBox::No) {
            qDebug() <<"No is clicked";
        }
}


void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"V.Shalini 212218205049", "this is warning message");

}

void Dialog::on_pushButton_7_clicked()
{
    qDebug() <<"Submitted";
}
