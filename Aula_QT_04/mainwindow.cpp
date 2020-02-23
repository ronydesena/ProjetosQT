#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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
    QMessageBox::StandardButton resposta = QMessageBox::question(this, "", "Deseja fechar o programa?", QMessageBox::Yes|QMessageBox::No);

    if(resposta == QMessageBox::Yes)
    {
        QApplication::quit();
    }else
    {
        QMessageBox::about(this, "", "Programa não foi fechado");
        //QDebug() << "Programa não finalizado";
    }
}

