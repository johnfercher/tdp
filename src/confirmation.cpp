#include "confirmation.h"
#include "ui_confirmation.h"

Confirmation::Confirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirmation)
{
    ui->setupUi(this);

    ui->buttonBox->button(QDialogButtonBox::Ok)->setText(tr("Prosseguir"));
    ui->buttonBox->button(QDialogButtonBox::Cancel)->setText(tr("Cancelar"));
}

Confirmation::~Confirmation()
{
    delete ui;
}

void Confirmation::setMessage(QString msg){
    this->msg = msg;
    ui->message->setText(msg);
}
