#include "janela.h"
#include "ui_janela.h"

Janela::Janela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Janela)
{
    ui->setupUi(this);
}

Janela::~Janela()
{
    delete ui;
}
