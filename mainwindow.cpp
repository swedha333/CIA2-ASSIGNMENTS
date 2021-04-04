#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_6->setText("Menu");
    QAction *a1 = new QAction;
    QAction *a2 = new QAction;
    QAction *a3 = new QAction;

    a1->setText("First");
    a2->setText("second");
    a3->setText("third");

    QMenu *menu = new QMenu;
    menu->addAction(a1);
    menu->addAction(a2);
    menu->addAction(a3);

    ui->pushButton_6->setMenu(menu);

    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"BHARATH K 212218104029","this is information box");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,"BHARATH K","do like apples?",QMessageBox::Yes|QMessageBox::No);
        if(reply == QMessageBox::Yes){
            QMessageBox::information(this,"Apple","Yes");
        }
        else
        {
            QMessageBox::information(this,"Apple","No");

        }
}

void MainWindow::on_pushButton_3_clicked()
{
       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this,"Custom Message","This is a Custom message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
       if(reply == QMessageBox::Yes){
           qDebug()<<"nothing to show";
       }
       else if(reply == QMessageBox::YesToAll)
       {
           QMessageBox::information(this,"Message Display","display the message with warming as yes to all");

       }
       else if(reply == QMessageBox::No)
       {
           qDebug()<<"nothing to show";
       }
       else  if(reply == QMessageBox::NoToAll)
       {
           QMessageBox::information(this,"Message Display","display the message with warming as no to all");

       }
}

void MainWindow::on_pushButton_4_clicked()
{

    QMessageBox::warning(this,"critical Message","This is a warning message");
}


void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_5->setIcon(QIcon("/Users/User/Downloads/switch-on1.png"));
        ui->pushButton_5->setIconSize(QSize(100,100));

        qDebug()<<"Button Checked--ON--";
    }
    else
    {
        ui->pushButton_5->setIcon(QIcon("C:/Users/User/Downloads/switch-off1.png"));
        ui->pushButton_5->setIconSize(QSize(100,100));

        qDebug()<<"Button Checked--OFF--";
    }
}
