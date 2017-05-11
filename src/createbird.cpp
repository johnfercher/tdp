#include "createbird.h"
#include "ui_createbird.h"

CreateBird::CreateBird(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBird)
{
    ui->setupUi(this);
    connect(ui->addBtn, SIGNAL (released()), this, SLOT (handleAdd()));
}

CreateBird::~CreateBird()
{
    delete ui;
}

void CreateBird::handleAdd(){
    std::string name = ui->nameLine->text().toUtf8().constData();
    std::string washer = ui->washerLine->text().toUtf8().constData();

    if(name != "" && washer != ""){
        bird.name = name;
        bird.washer = washer;
        sql.addBird(bird, owners.at(ui->ownersBox->currentIndex()));
        this->close();
    }
}

void CreateBird::setRace(int race){
    bird.race = race;

    switch(bird.race){
        case UNKNONW:{
            ui->race->setText("Desconhecido");
        }break;
        case BICUDO_F:{
            ui->race->setText("Bicudo Fibra");
        }break;
        case CURIO_F:{
            ui->race->setText("Curió Fibra");
        }break;
        case CHANCHAO_F:{
            ui->race->setText("Chanchão Fibra");
        }break;
        case COLEIRO:{
            ui->race->setText("Coleiro");
        }break;
        case TRINCA_FERRO:{
            ui->race->setText("Trinca Ferro");
        }break;
        case CURIO_L:{
            ui->race->setText("Curió Canto-Livre");
        }break;
    }
}

void CreateBird::setOwners(std::vector<Owner> owners){
    this->owners = owners;
    QStringList list;

    for(unsigned int i = 0 ; i < owners.size() ; i++){
        list << QString::fromStdString(owners.at(i).name);
    }

    ui->ownersBox->addItems(list);
}
