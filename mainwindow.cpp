#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
{
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),Qt::red);
        ui->label->setPalette(palette);
        stream << "Bold is checked";
    }
    else
    {
        stream << "Bold is unchecked";
    }

}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
{
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),Qt::green);
        ui->label->setPalette(palette);
        stream << "italic is checked";
    }
    else
    {
        stream << "italic is unchecked";
    }

}


void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton->isChecked())
{
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#FFA500"));
        ui->label->setPalette(palette);
        stream << "left is checked";
    }
    else
    {
        stream << "left is unchecked";
    }

}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_2->isChecked())
{
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("#FFC0CB"));
        ui->label->setPalette(palette);
        stream << " Right is checked";
    }
    else
    {
        stream << "Right is unchecked";
    }
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_3->isChecked())
{
        QPalette palette = ui->label->palette();
        palette.setColor(ui->label->foregroundRole(),QColor("800000"));
        ui->label->setPalette(palette);
        stream << "centre is checked";
    }
    else
    {
        stream << "centre is unchecked";
    }
}
