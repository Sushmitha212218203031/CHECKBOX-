#include "widget.h"
#include "ui_widget.h"
#include<QButtonGroup>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *Buttongroup=new QButtonGroup(this);
    Buttongroup->addButton(ui->checkBox);
     Buttongroup->addButton(ui->checkBox_2);
      Buttongroup->addButton(ui->checkBox_3);
      Buttongroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBox_toggled(bool checked)
{
    if(ui->checkBox->isChecked())
    {
        qDebug()<<"Windows checkbox is clicked";
    }
    else
    {
        qDebug()<<"Windows checkbox in unchecked";
    }

}



void Widget::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->checkBox->setChecked(false);
    }
    else

    {
        ui->checkBox->setChecked(true);
    }
}

void Widget::on_checkBox_4_clicked()
{
    if(ui->checkBox_4->isChecked())
    {
       ui->checkBox_4->setChecked(false);
    }
    else
    {
       ui->checkBox_4->setChecked(true);
    }
}
