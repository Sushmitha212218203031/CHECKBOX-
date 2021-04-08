#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   if(ui->checkBox->isChecked())
   {
       QMessageBox::information(this,"Sushmitha 212218203031","user likes mango");
   }
   else
   {
       QMessageBox::information(this,"Sushmitha 212218203031","user  does not like mango");
   }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this,"Sushmitha 212218203031","user likes mango");
    }
    else
    {
        QMessageBox::information(this,"Sushmitha 212218203031","user does not like mango");
    }
}
