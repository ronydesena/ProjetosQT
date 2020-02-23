#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//Controla a aplicação, vai rodar
    MainWindow w;
    w.show(); //o metodo show mostra a janela

    return a.exec();
}
