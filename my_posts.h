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

private slots:
    void on_btn_info_clicked();

    void on_btn_warning_clicked();

    void on_btn_danger_clicked();

    void on_btn_about_clicked();

private:
    Ui::My_posts *ui;
};
#endif // MY_POSTS_H
