#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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


void MainWindow::on_btn_mostrar_clicked()
{
    //No QT, os campos de textos são strings, e as strings são representadas no QT por QString
    QString nome = ui->txt_nome->text();
    QString fone = ui->txt_telefone->text();
    QString email = ui->txt_email->text();
    //Nas tres linha acima, armazenou-se nas variaveis o que foi digitado nos campos

    QMessageBox::information(this, "Dados Pessoais", "Nome: " + nome + "\nFone: " + fone + "\nE-mail: " + email);


}

void MainWindow::on_btn_cancelar_clicked()
{
    this->close();
}

void MainWindow::on_btn_limpar_clicked()
{
    ui->txt_nome->clear();
    ui->txt_email->clear();
    ui->txt_telefone->clear();

    ui->txt_nome->setFocus();
}
