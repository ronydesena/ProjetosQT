#ifndef JANELA_H
#define JANELA_H

#include <QDialog>

namespace Ui {
class Janela;
}

class Janela : public QDialog
{
    Q_OBJECT

public:
    explicit Janela(QWidget *parent = nullptr);
    ~Janela();

private:
    Ui::Janela *ui;
};

#endif // JANELA_H
