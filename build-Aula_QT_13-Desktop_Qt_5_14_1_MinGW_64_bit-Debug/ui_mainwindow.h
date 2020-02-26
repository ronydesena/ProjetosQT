/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionEditar;
    QAction *actionExcluir;
    QAction *actionSair;
    QAction *actionPesquisar;
    QAction *actionNovo_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(346, 265);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icones/\303\215cones/salve-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icones/\303\215cones/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditar->setIcon(icon1);
        actionExcluir = new QAction(MainWindow);
        actionExcluir->setObjectName(QString::fromUtf8("actionExcluir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icones/\303\215cones/lixo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExcluir->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionPesquisar = new QAction(MainWindow);
        actionPesquisar->setObjectName(QString::fromUtf8("actionPesquisar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icones/\303\215cones/encontrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPesquisar->setIcon(icon3);
        actionNovo_2 = new QAction(MainWindow);
        actionNovo_2->setObjectName(QString::fromUtf8("actionNovo_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icones/\303\215cones/novo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo_2->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 346, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArquivo->addAction(actionNovo_2);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionEditar);
        menuArquivo->addAction(actionExcluir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionPesquisar);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionExcluir);
        toolBar->addAction(actionPesquisar);
        toolBar->addAction(actionNovo_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionEditar->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        actionExcluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionPesquisar->setText(QCoreApplication::translate("MainWindow", "Pesquisar", nullptr));
        actionNovo_2->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
