#include "my_posts.h"
#include "ui_my_posts.h"

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

