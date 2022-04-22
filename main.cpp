#include "my_posts.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    My_posts w;
    w.show();
    return a.exec();
}
