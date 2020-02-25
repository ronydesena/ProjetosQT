/********************************************************************************
** Form generated from reading UI file 'janela.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_H
#define UI_JANELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Janela
{
public:
    QLabel *label;

    void setupUi(QDialog *Janela)
    {
        if (Janela->objectName().isEmpty())
            Janela->setObjectName(QString::fromUtf8("Janela"));
        Janela->resize(400, 300);
        label = new QLabel(Janela);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 47, 13));

        retranslateUi(Janela);

        QMetaObject::connectSlotsByName(Janela);
    } // setupUi

    void retranslateUi(QDialog *Janela)
    {
        Janela->setWindowTitle(QCoreApplication::translate("Janela", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Janela", "Janela 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela: public Ui_Janela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_H
