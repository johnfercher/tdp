#include "updatebird.h"
#include "ui_updatebird.h"

UpdateBird::UpdateBird(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateBird)
{
    ui->setupUi(this);
    connect(ui->addSave, SIGNAL (released()), this, SLOT (handleSave()));
}

UpdateBird::~UpdateBird()
{
    delete ui;
}

void UpdateBird::handleSave(){
    std::string name = ui->nameLine->text().toUtf8().constData();
    std::string washer = ui->washerLine->text().toUtf8().constData();

    if(name != "" && washer != ""){
        bird.name = name;
        bird.washer = washer;
        bird.race = ui->racesBox->currentIndex();
        bird.id_owner = owners.at(ui->ownersBox->currentIndex()).id;
        sql.updateBird(bird);
        this->close();
    }
}

void UpdateBird::setBird(Bird bird){
    this->bird = bird;
    ui->id_bird->setText(QString::number(bird.id));
    ui->nameLine->setText(QString::fromStdString(bird.name));
    ui->washerLine->setText(QString::fromStdString(bird.washer));

    QStringList list;
    list << "Bicudo Fibra" << "Curió Fibra" << "Chanchão Fibra" << "Coleiro" << "Trinca Ferro" << "Curió Canto-Livre";

    ui->racesBox->addItems(list);
    ui->racesBox->setCurrentIndex(bird.race);

    for(unsigned int i = 0 ; i < owners.size() ; i++){
        if(owners.at(i).id == bird.id_owner){
            ui->ownersBox->setCurrentIndex(i);
        }
    }
}

void UpdateBird::setOwners(std::vector<Owner> owners){
    this->owners = owners;
    QStringList list;

    for(unsigned int i = 0 ; i < owners.size() ; i++){
        list << QString::fromStdString(owners.at(i).name);
    }

    ui->ownersBox->addItems(list);
}

