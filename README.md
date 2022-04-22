# My posts QT
Pequena aplicacao para entendimento dos componetnes do QT

## Motivacao
Comprrender o framework QT, este framewok e largamente usado em aplicacoes KDE,MACOS e Windows

## Feature
- Botões em QT segue o princípio de signal e slot
- Slot e quem vai receber o signal
- No caso criei 4 botoes e ambos utilizam recursos do frameqork qt
- As caixas de mensagens e possível usar tags html
- As construções dos componentes e feita em xml, com a IDE QTCREATOR abstrai o XML facilitando o trabalho
- This neste caso e um ponteiro que esta apontando a memória desse objeto, assim posso manipular os membros

```c++
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




```
