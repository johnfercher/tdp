#include "updateowner.h"
#include "ui_updateowner.h"

UpdateOwner::UpdateOwner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateOwner)
{
    ui->setupUi(this);

    connect(ui->addSave, SIGNAL (released()), this, SLOT (handleSave()));
}

UpdateOwner::~UpdateOwner()
{
    delete ui;
}

void UpdateOwner::handleSave(){
    std::string name = ui->nameLine->text().toUtf8().constData();
    std::string ctf = ui->ctfLine->text().toUtf8().constData();
    std::string cpf = ui->cpfLine->text().toUtf8().constData();

    if(name != "" && ctf != "" && cpf != ""){
        owner.name = name;
        owner.cpf = cpf;
        owner.ctf = ctf;
        sql.updateOwner(owner);
        this->close();
    }
}

void UpdateOwner::setOwner(Owner owner){
    this->owner = owner;
    ui->idOwner->setText(QString::number(owner.id));
    ui->nameLine->setText(QString::fromStdString(owner.name));
    ui->cpfLine->setText(QString::fromStdString(owner.cpf));
    ui->ctfLine->setText(QString::fromStdString(owner.ctf));
}
