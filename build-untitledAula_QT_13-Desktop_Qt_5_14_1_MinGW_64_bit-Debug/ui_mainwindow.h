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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *rb_java;
    QRadioButton *rb_cpp;
    QRadioButton *rb_cs;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_vermelho;
    QRadioButton *rb_verde;
    QRadioButton *rb_azul;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_aviao;
    QRadioButton *rb_carro;
    QRadioButton *rb_navio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(392, 260);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 60, 120, 80));
        rb_java = new QRadioButton(groupBox);
        rb_java->setObjectName(QString::fromUtf8("rb_java"));
        rb_java->setGeometry(QRect(10, 60, 82, 17));
        rb_cpp = new QRadioButton(groupBox);
        rb_cpp->setObjectName(QString::fromUtf8("rb_cpp"));
        rb_cpp->setGeometry(QRect(10, 20, 82, 17));
        rb_cs = new QRadioButton(groupBox);
        rb_cs->setObjectName(QString::fromUtf8("rb_cs"));
        rb_cs->setGeometry(QRect(10, 40, 82, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 180, 75, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 84, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rb_vermelho = new QRadioButton(widget);
        rb_vermelho->setObjectName(QString::fromUtf8("rb_vermelho"));

        verticalLayout->addWidget(rb_vermelho);

        rb_verde = new QRadioButton(widget);
        rb_verde->setObjectName(QString::fromUtf8("rb_verde"));

        verticalLayout->addWidget(rb_verde);

        rb_azul = new QRadioButton(widget);
        rb_azul->setObjectName(QString::fromUtf8("rb_azul"));

        verticalLayout->addWidget(rb_azul);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 120, 84, 65));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rb_aviao = new QRadioButton(widget1);
        rb_aviao->setObjectName(QString::fromUtf8("rb_aviao"));

        verticalLayout_2->addWidget(rb_aviao);

        rb_carro = new QRadioButton(widget1);
        rb_carro->setObjectName(QString::fromUtf8("rb_carro"));

        verticalLayout_2->addWidget(rb_carro);

        rb_navio = new QRadioButton(widget1);
        rb_navio->setObjectName(QString::fromUtf8("rb_navio"));

        verticalLayout_2->addWidget(rb_navio);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 392, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        rb_java->setText(QCoreApplication::translate("MainWindow", "Java", nullptr));
        rb_cpp->setText(QCoreApplication::translate("MainWindow", "C++", nullptr));
        rb_cs->setText(QCoreApplication::translate("MainWindow", "C#", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Verificar", nullptr));
        rb_vermelho->setText(QCoreApplication::translate("MainWindow", "Vermelho", nullptr));
        rb_verde->setText(QCoreApplication::translate("MainWindow", "Verde", nullptr));
        rb_azul->setText(QCoreApplication::translate("MainWindow", "Azul", nullptr));
        rb_aviao->setText(QCoreApplication::translate("MainWindow", "Avi\303\243o", nullptr));
        rb_carro->setText(QCoreApplication::translate("MainWindow", "Carro", nullptr));
        rb_navio->setText(QCoreApplication::translate("MainWindow", "Navio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
