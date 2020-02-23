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


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Olá, mundo", "Estudando QT para ficar profissional");//simples com botão de ok
    QMessageBox::aboutQt(this, "Olá, mundo2"); //Caixa de mensagem sobre o QT
    QMessageBox::critical(this, "Olá, mundo3", "Estudando QT para ficar profissional3"); //Caixa de erro
    QMessageBox::information(this, "Olá, mundo4", "Estudando QT para ficar profissional4");//caixa informativa
    QMessageBox::question(this, "Olá, mundo5", "Estudando QT para ficar profissional5?");//caixa de pergunta
    QMessageBox::warning(this, "Olá, mundo6", "Estudando QT para ficar profissional6");//caixa de alerta simples
}
