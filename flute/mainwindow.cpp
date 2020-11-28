#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>


// CONSTRUCTOR / DESTRUCTOR

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    current_cell = 0;

    cells_count = 20;

    short unsigned x = 10;
    for(int i = 0; i < cells_count; i++){
        QLabel *label = new QLabel(this);
        label->setText("");
        label->setGeometry(x,10,31,210);
        cells.append(label);
        x = x + 30;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// HELP FUNCS

void MainWindow::remove_last_picture_from_label()
{
    if (current_cell > 0) cells[current_cell-1]->setStyleSheet("");
    else cells[0]->setStyleSheet("");

    if (current_cell > 0) {
        current_cell--;
    }
}

void MainWindow::set_picture_on_label(QString style_sheet)
{
    if (current_cell < cells_count) cells[current_cell]->setStyleSheet(style_sheet);

    if (current_cell < cells_count) {
        current_cell++;
    }
}

// BUTTONS

void MainWindow::on_clearButton_clicked()
{
    for(int i = 0; i < cells_count; i++){
        cells[i]->setStyleSheet("");
    }

    current_cell = 0;
}

void MainWindow::on_clearButton_2_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_do1_button_clicked()
{
    set_picture_on_label("border-image: url(:do1_flute.png);");
}

void MainWindow::on_re_button_clicked()
{
    set_picture_on_label("border-image: url(:re_flute.png);");
}

void MainWindow::on_mi_button_clicked()
{
    set_picture_on_label("border-image: url(:mi_flute.png);");
}

void MainWindow::on_fa_button_clicked()
{
    set_picture_on_label("border-image: url(:fa_flute.png);");
}

void MainWindow::on_sol_button_clicked()
{
    set_picture_on_label("border-image: url(:sol_flute.png);");
}

void MainWindow::on_la_button_clicked()
{
    set_picture_on_label("border-image: url(:la_flute.png);");
}

void MainWindow::on_si_button_clicked()
{
    set_picture_on_label("border-image: url(:si_flute.png);");
}

void MainWindow::on_do2_button_clicked()
{
    set_picture_on_label("border-image: url(:do2_flute.png);");
}

void MainWindow::on_removeButton_clicked()
{
    remove_last_picture_from_label();
}

void MainWindow::on_do_up_button_clicked()
{
    set_picture_on_label("border-image: url(:do_up_flute.png);");
}

void MainWindow::on_re_up_button_clicked()
{
    set_picture_on_label("border-image: url(:re_up_flute.png);");
}

void MainWindow::on_mi_up_button_clicked()
{
    set_picture_on_label("border-image: url(:mi_up_flute.png);");
}

void MainWindow::on_fa_up_button_clicked()
{
    set_picture_on_label("border-image: url(:fa_up_flute.png);");
}

void MainWindow::on_sol_up_button_clicked()
{
    set_picture_on_label("border-image: url(:sol_up_flute.png);");
}

void MainWindow::on_la_up_button_clicked()
{
    set_picture_on_label("border-image: url(:la_up_flute.png);");
}

void MainWindow::on_si_up_button_clicked()
{
    set_picture_on_label("border-image: url(:si_up_flute.png);");
}
