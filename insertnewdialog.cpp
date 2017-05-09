#include "insertnewdialog.h"
#include "ui_insertnewdialog.h"

InsertNewDialog::InsertNewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsertNewDialog)
{
    ui->setupUi(this);
}

InsertNewDialog::~InsertNewDialog()
{
    delete ui;
}
