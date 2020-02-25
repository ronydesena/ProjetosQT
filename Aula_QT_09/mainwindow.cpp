#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo(":/imgs/Imagens/logo.png");
    ui->lb_logo->setPixmap(logo);

}

MainWindow::~MainWindow()
{
    delete ui;
}

