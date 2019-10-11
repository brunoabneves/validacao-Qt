#include "widget.h"
#include "ui_widget.h"
#include <QRegExpValidator>

#define NOME_RX "^[A-Za-záàâãéèêíïóôõöúçñÁÀÂÃÉÈÍÏÓÔÕÖÚÇÑ ]+$"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Expressão regular
    QRegExp regExp(NOME_RX);
    QRegExpValidator *validatorNome = new QRegExpValidator(regExp, this);

    ui->lineEditNome->setValidator(validatorNome);
}

Widget::~Widget()
{
    delete ui;
}
