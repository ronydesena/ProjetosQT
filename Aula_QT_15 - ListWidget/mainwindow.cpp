#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

QVector <int> marcados;

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

void MainWindow::on_btn_adicionar_clicked()
{
    QString texto = ui->txt_item->text();
    if(texto != "")
    {
    ui->listWidget->addItem(texto);
    ui->txt_item->clear();
    ui->txt_item->setFocus();
    }
}

void MainWindow::on_btn_adicionarVarios_clicked()
{
    QListWidgetItem *item1 = new QListWidgetItem("C++");
    QListWidgetItem *item2 = new QListWidgetItem("Java");
    QListWidgetItem *item3 = new QListWidgetItem("Python");
    QListWidgetItem *item4 = new QListWidgetItem("JavaScript");
    QListWidgetItem *item5 = new QListWidgetItem("HTML");

    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
    ui->listWidget->addItem(item4);
    ui->listWidget->addItem(item5);
}

void MainWindow::on_btn_marcar_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::lightGray); //texto cinza
    ui->listWidget->currentItem()->setBackground(Qt::red); //fundo vermelho
    int linhaCorrente = ui->listWidget->currentRow(); //capturando o numero da linha corrente
    marcados.push_back(linhaCorrente);
    qDebug() << "Marcados: " << marcados;
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::black); //texto cinza
    ui->listWidget->currentItem()->setBackground(Qt::white); //fundo vermelho
    marcados.erase(marcados.begin()+ui->listWidget->currentRow()); //o elemento exluido será o inicio+o numero do elemento corrente
    qDebug() << "Marcados: " << marcados;
}

void MainWindow::on_pushButton_2_clicked()
{
    while(!marcados.empty())//enquanto o vetor nao estiver vazio
    {
        ui->listWidget->setCurrentRow(marcados.last());//pegando o ultimo elemento
        ui->listWidget->currentItem()->setForeground(Qt::black); //texto cinza
        ui->listWidget->currentItem()->setBackground(Qt::white); //fundo vermelho
        marcados.pop_back(); //remove o ultimo elemento do vector
    }
    qDebug() << "Marcados: " << marcados;
}
