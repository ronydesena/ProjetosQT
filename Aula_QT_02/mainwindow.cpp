#include "mainwindow.h"
#include "ui_mainwindow.h"

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

//Sinais são os eventos, clique, mouse precionado, alterar elemento de texto
//Slots são as ações, respostas aos sinais.

//Eu disparo um e chamo um slot


void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString css = "background-color: #f00; color: #000;";
    ui->label->setStyleSheet(css);
}
