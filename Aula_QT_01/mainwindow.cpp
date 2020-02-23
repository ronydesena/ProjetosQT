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


void MainWindow::on_pushButton_clicked()
{
    //tudo que vai se relacionar como o formulario vai se relacionar com a classe "ui"
    ui->labelNome->setText("Alô, Mundo");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->labelNome->setText("Rony");
}
//Sinais são os eventos, clique, mouse precionado, alterar elemento de texto
//Slots são as ações, respostas aos sinais.

//Eu disparo um e chamo um slot
