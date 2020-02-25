#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     //Se ja for adicionado no construtor, então já sai direto na barra de status
     ui->statusbar->addPermanentWidget(ui->pushButton_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_ok_clicked()
{
    QString nome = ui->txt_nome->text();
    QString email = ui->txt_email->text();
    ui->statusbar->showMessage("Nome: " + nome + " | Email: " + email);//O que for passado como parâmetro na String, vai ser passado na barra de status
}

void MainWindow::on_pushButton_2_clicked()
{
    QString msg = "www.youtube.com/cfbcursos";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this, "Canal", msg);
}
