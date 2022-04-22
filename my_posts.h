#ifndef MY_POSTS_H
#define MY_POSTS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class My_posts; }
QT_END_NAMESPACE

class My_posts : public QMainWindow
{
    Q_OBJECT

public:
    My_posts(QWidget *parent = nullptr);
    ~My_posts();

private:
    Ui::My_posts *ui;
};
#endif // MY_POSTS_H
