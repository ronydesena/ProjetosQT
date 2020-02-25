#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "janela.h"

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
    //Janela form2;
    //form2.exec();

    form2 = new Janela(this);
    form2->show();
}
