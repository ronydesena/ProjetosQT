#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString cursos[5] = {"C++", "QT", "PHP", "Unity", "JavaScript"};
    QString icones[5] = {":/icones/Icones/c++.png", ":/icones/Icones/qt.png", ":/icones/Icones/php.png", ":/icones/Icones/unity.png", ":/icones/Icones/js.png"};
    for(int i = 0; i < 5; i++)
    {
        ui->comboBox->addItem(QIcon(icones[i]), cursos[i]);
    }

    ui->comboBox->insertItem(3, "HTML");
    //ui->comboBox->addItem("C++");
    //ui->comboBox->addItem("QT");
    //ui->comboBox->addItem("PHP");
    //ui->comboBox->addItem("Unity");
    //ui->comboBox->addItem("JavaScript");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString linguagem = ui->comboBox->currentText();
    QMessageBox::about(this, "Cursos", "Linguagem escolhida: " + linguagem);
}
