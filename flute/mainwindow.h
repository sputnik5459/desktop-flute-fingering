#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_do1_button_clicked();

    void on_re_button_clicked();

    void on_mi_button_clicked();

    void on_fa_button_clicked();

    void on_sol_button_clicked();

    void on_la_button_clicked();

    void on_si_button_clicked();

    void on_do2_button_clicked();

    void set_picture_on_label(QString style_sheet);

    void on_removeButton_clicked();

    void remove_last_picture_from_label();

    void on_clearButton_clicked();

    void on_clearButton_2_clicked();

    void on_do_up_button_clicked();

    void on_re_up_button_clicked();

    void on_mi_up_button_clicked();

    void on_fa_up_button_clicked();

    void on_sol_up_button_clicked();

    void on_la_up_button_clicked();

    void on_si_up_button_clicked();

private:
    Ui::MainWindow *ui;
    short unsigned cells_count;
    short unsigned current_cell;
    QVector<QLabel *> cells;
};
#endif // MAINWINDOW_H
