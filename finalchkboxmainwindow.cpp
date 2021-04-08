#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked (bool)),this,SLOT(onchkbx_clicked()));
    connect(ui->checkBox_2,SIGNAL(clicked (bool)),this,SLOT(onchkbx_clicked()));
    connect(ui->checkBox_3,SIGNAL(clicked (bool)),this,SLOT(onchkbx_clicked()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onchkbx_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"option 1 is checked";
    }
    else
    {
        stream<<"option 1 is unchecked";
    }
    if(ui->checkBox_2->isChecked())
    {
        stream<<"option 2 is checked";
    }
    else
    {
        stream<<"option 2 is unchecked";
    }
    if(ui->checkBox_3->isChecked())
    {
        stream<<"option 3 is checked";
    }
    else
    {
        stream<<"option 3 is unchecked";
    }

}
