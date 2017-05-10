#include "createowner.h"
#include "ui_createowner.h"

CreateOwner::CreateOwner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateOwner)
{
    ui->setupUi(this);
    init();
}

CreateOwner::~CreateOwner()
{
    delete ui;
}

void CreateOwner::init(){
    connect(ui->addBtn, SIGNAL (released()), this, SLOT (handleAdd()));
}

void CreateOwner::handleAdd(){
    std::string name = ui->nameLine->text().toUtf8().constData();
    std::string ctf = ui->ctfLine->text().toUtf8().constData();
    std::string cpf = ui->cpfLine->text().toUtf8().constData();

    if(name != "" && ctf != "" && cpf != ""){
        owner.name = name;
        owner.cpf = cpf;
        owner.ctf = ctf;
        sql.addOwner(owner);
        this->close();
    }
}
