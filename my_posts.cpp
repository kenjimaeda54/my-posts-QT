#include "my_posts.h"
#include "ui_my_posts.h"
#include  <QMessageBox>

My_posts::My_posts(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::My_posts)
{
    ui->setupUi(this);
}

My_posts::~My_posts()
{
    delete ui;
}


void My_posts::on_btn_info_clicked()
{
    QMessageBox::information(this,"App information","<span> This is mensagem information   <span>");
}


void My_posts::on_btn_warning_clicked()
{
    QMessageBox::warning(this,"App warning","<strong>Atention this warning<strong>");
}



void My_posts::on_btn_danger_clicked()
{
    QMessageBox::critical(this,"App danger","<h3>Critical problem with sytem</h3>");
}



void My_posts::on_btn_about_clicked()
{
    QMessageBox::about(this,"About develop","Gihub develop <a href=https://github.com/kenjimaeda54> Kenji Maeda   </a>");
}


