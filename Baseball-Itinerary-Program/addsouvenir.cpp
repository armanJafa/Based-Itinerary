#include "addsouvenir.h"
#include "ui_addsouvenir.h"

addsouvenir::addsouvenir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addsouvenir)
{
    ui->setupUi(this);
}

addsouvenir::~addsouvenir()
{
    delete ui;
}
