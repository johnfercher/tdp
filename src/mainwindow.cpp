#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commons.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusBar()->hide();

    ui->deleteOwnerBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createOwnerBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateOwnerBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteBicudoBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createBicudoBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateBicudoBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteCuriofBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createCuriofBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateCuriofBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteCuriolBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createCuriolBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateCuriolBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteChanchaoBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createChanchaoBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateChanchaoBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteColeiroBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createColeiroBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateColeiroBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    ui->deleteTrincaBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createTrincaBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateTrincaBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    init();

    ownerRowSelected = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    initOwnerTab();
    initBirdsTab();

    connect(ui->createOwnerBtn, SIGNAL (released()), this, SLOT (handleCreateOwner()));
    connect(ui->refreshOwnerBtn, SIGNAL (released()), this, SLOT (handleRefresnOwner()));
    connect(ui->ownerWidget, SIGNAL(cellClicked(int,int)), this, SLOT(handleCellClicked(int,int)));
    connect(ui->deleteOwnerBtn, SIGNAL (released()), this, SLOT (handleDeleteOwner()));
    connect(ui->updateOwnerBtn, SIGNAL (released()), this, SLOT (handleUpdateOwner()));

    connect(ui->createBicudoBtn, SIGNAL (released()), this, SLOT (handleCreateBicudo()));
    connect(ui->createCuriofBtn, SIGNAL (released()), this, SLOT (handleCreateCuriof()));
    connect(ui->createCuriolBtn, SIGNAL (released()), this, SLOT (handleCreateCuriol()));
    connect(ui->createChanchaoBtn, SIGNAL (released()), this, SLOT (handleCreateChanchao()));
    connect(ui->createColeiroBtn, SIGNAL (released()), this, SLOT (handleCreateColeiro()));
    connect(ui->createTrincaBtn, SIGNAL (released()), this, SLOT (handleCreateTrinca()));
}

void MainWindow::initOwnerTab(){
    QStringList ownerHeader;
    ui->ownerWidget->setColumnCount(5);

    ownerHeader << "Id" << "Proprietário" << "CPF" << "CTF" << "Pássaros";

    ui->ownerWidget->setHorizontalHeaderLabels(ownerHeader);
    ui->ownerWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);

    ui->ownerWidget->setColumnWidth(0, 40);
    ui->ownerWidget->setColumnWidth(1, 300);
    ui->ownerWidget->setColumnWidth(2, 120);
    ui->ownerWidget->setColumnWidth(3, 120);
    ui->ownerWidget->setColumnWidth(4, 390);

    updateOwnerTab();
}

void MainWindow::initBirdsTab(){
    QStringList birdsHeader;
    birdsHeader << "Id" << "Pássaro" << "Anilha" << "Proprietário";

    ui->bicudoWidget->setColumnCount(4);
    ui->curiofWidget->setColumnCount(4);
    ui->curiolWidget->setColumnCount(4);
    ui->chanchaoWidget->setColumnCount(4);
    ui->coleiroWidget->setColumnCount(4);
    ui->trincaWidget->setColumnCount(4);

    ui->bicudoWidget->setHorizontalHeaderLabels(birdsHeader);
    ui->curiofWidget->setHorizontalHeaderLabels(birdsHeader);
    ui->curiolWidget->setHorizontalHeaderLabels(birdsHeader);
    ui->chanchaoWidget->setHorizontalHeaderLabels(birdsHeader);
    ui->coleiroWidget->setHorizontalHeaderLabels(birdsHeader);
    ui->trincaWidget->setHorizontalHeaderLabels(birdsHeader);

    ui->bicudoWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->curiofWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->curiolWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->chanchaoWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->coleiroWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->trincaWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);

    ui->bicudoWidget->setColumnWidth(0, 100);
    ui->curiofWidget->setColumnWidth(0, 100);
    ui->curiolWidget->setColumnWidth(0, 100);
    ui->chanchaoWidget->setColumnWidth(0, 100);
    ui->coleiroWidget->setColumnWidth(0, 100);
    ui->trincaWidget->setColumnWidth(0, 100);

    ui->bicudoWidget->setColumnWidth(1, 380);
    ui->curiofWidget->setColumnWidth(1, 380);
    ui->curiolWidget->setColumnWidth(1, 380);
    ui->chanchaoWidget->setColumnWidth(1, 380);
    ui->coleiroWidget->setColumnWidth(1, 380);
    ui->trincaWidget->setColumnWidth(1, 380);

    ui->bicudoWidget->setColumnWidth(2, 310);
    ui->curiofWidget->setColumnWidth(2, 310);
    ui->curiolWidget->setColumnWidth(2, 310);
    ui->chanchaoWidget->setColumnWidth(2, 310);
    ui->coleiroWidget->setColumnWidth(2, 310);
    ui->trincaWidget->setColumnWidth(2, 310);

    ui->bicudoWidget->setColumnWidth(3, 380);
    ui->curiofWidget->setColumnWidth(3, 380);
    ui->curiolWidget->setColumnWidth(3, 380);
    ui->chanchaoWidget->setColumnWidth(3, 380);
    ui->coleiroWidget->setColumnWidth(3, 380);
    ui->trincaWidget->setColumnWidth(3, 380);

    updateBicudoTab();
    updateCuriofTab();
    updateCuriolTab();
    updateChanchaoTab();
    updateColeiroTab();
    updateTrincaTab();
}

void MainWindow::handleCreateOwner(){
    CreateOwner dialog(this);
    dialog.setFixedSize(450, 190);
    dialog.exec();

    updateOwnerTab();
}

void MainWindow::handleRefresnOwner(){
    updateOwnerTab();
}

void MainWindow::handleDeleteOwner(){
    if(ownerRowSelected != -1){
        sql.deleteOwner(owners.at(ownerRowSelected));
        updateOwnerTab();
        ownerRowSelected = -1;
    }
}

void MainWindow::handleUpdateOwner(){
    if(ownerRowSelected != -1){
        UpdateOwner dialog(this);
        dialog.setFixedSize(450, 240);
        dialog.setOwner(owners.at(ownerRowSelected));
        dialog.exec();

        updateOwnerTab();
        ownerRowSelected = -1;
    }
}

void MainWindow::handleCellClicked(int row,int col)
{
    ownerRowSelected = row;
}

void MainWindow::handleCreateBicudo(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(BICUDO_F);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateBicudoTab();
}

void MainWindow::handleCreateCuriof(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(CURIO_F);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateCuriofTab();
}

void MainWindow::handleCreateCuriol(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(CURIO_L);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateCuriolTab();
}

void MainWindow::handleCreateChanchao(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(CHANCHAO_F);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateChanchaoTab();
}

void MainWindow::handleCreateColeiro(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(COLEIRO);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateColeiroTab();
}

void MainWindow::handleCreateTrinca(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(TRINCA_FERRO);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateTrincaTab();
}

void MainWindow::updateOwnerTab(){
    ui->ownerWidget->setRowCount(0);
    owners = sql.listOwners();

    for(unsigned int i = 0 ; i < owners.size() ; i++){
        ui->ownerWidget->insertRow( ui->ownerWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(owners.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(owners.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(owners.at(i).cpf));
        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(owners.at(i).ctf));

        std::stringstream birds;

        for(unsigned int j = 0 ; j < owners.at(i).bicudos.size() ; j++){
            birds << owners.at(i).bicudos.at(j).id << " ; ";
        }
        for(unsigned int j = 0 ; j < owners.at(i).curiofs.size() ; j++){
            birds << owners.at(i).curiofs.at(j).id << " ; ";
        }
        for(unsigned int j = 0 ; j < owners.at(i).curiols.size() ; j++){
            birds << owners.at(i).curiols.at(j).id << " ; ";
        }
        for(unsigned int j = 0 ; j < owners.at(i).coleiros.size() ; j++){
            birds << owners.at(i).coleiros.at(j).id << " ; ";
        }
        for(unsigned int j = 0 ; j < owners.at(i).chanchaos.size() ; j++){
            birds << owners.at(i).chanchaos.at(j).id << " ; ";
        }
        for(unsigned int j = 0 ; j < owners.at(i).trincas.size() ; j++){
            birds << owners.at(i).trincas.at(j).id << " ; ";
        }

        QTableWidgetItem *item5 = new QTableWidgetItem(QString::fromStdString(birds.str()));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->ownerWidget->setItem( ui->ownerWidget->rowCount() -1, 0, item1 );
        ui->ownerWidget->setItem( ui->ownerWidget->rowCount() -1, 1, item2 );
        ui->ownerWidget->setItem( ui->ownerWidget->rowCount() -1, 2, item3 );
        ui->ownerWidget->setItem( ui->ownerWidget->rowCount() -1, 3, item4 );
        ui->ownerWidget->setItem( ui->ownerWidget->rowCount() -1, 4, item5 );
    }
}

void MainWindow::updateBicudoTab(){
    ui->bicudoWidget->setRowCount(0);
    bicudos = sql.listBirds(BICUDO_F);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < bicudos.size() ; i++){
        ui->bicudoWidget->insertRow( ui->bicudoWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(bicudos.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(bicudos.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(bicudos.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).bicudos.size() ; k++){
                if(owners.at(j).bicudos.at(k).id == bicudos.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->bicudoWidget->setItem( ui->bicudoWidget->rowCount() -1, 0, item1 );
        ui->bicudoWidget->setItem( ui->bicudoWidget->rowCount() -1, 1, item2 );
        ui->bicudoWidget->setItem( ui->bicudoWidget->rowCount() -1, 2, item3 );
        ui->bicudoWidget->setItem( ui->bicudoWidget->rowCount() -1, 3, item4 );
    }
}

void MainWindow::updateCuriofTab(){
    ui->curiofWidget->setRowCount(0);
    curiofs = sql.listBirds(CURIO_F);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < curiofs.size() ; i++){
        ui->curiofWidget->insertRow( ui->curiofWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(curiofs.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(curiofs.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(curiofs.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).curiofs.size() ; k++){
                if(owners.at(j).curiofs.at(k).id == curiofs.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->curiofWidget->setItem( ui->curiofWidget->rowCount() -1, 0, item1 );
        ui->curiofWidget->setItem( ui->curiofWidget->rowCount() -1, 1, item2 );
        ui->curiofWidget->setItem( ui->curiofWidget->rowCount() -1, 2, item3 );
        ui->curiofWidget->setItem( ui->curiofWidget->rowCount() -1, 3, item4 );
    }
}

void MainWindow::updateCuriolTab(){
    ui->curiolWidget->setRowCount(0);
    curiols = sql.listBirds(CURIO_L);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < curiols.size() ; i++){
        ui->curiolWidget->insertRow( ui->curiolWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(curiols.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(curiols.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(curiols.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).curiols.size() ; k++){
                if(owners.at(j).curiols.at(k).id == curiols.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->curiolWidget->setItem( ui->curiolWidget->rowCount() -1, 0, item1 );
        ui->curiolWidget->setItem( ui->curiolWidget->rowCount() -1, 1, item2 );
        ui->curiolWidget->setItem( ui->curiolWidget->rowCount() -1, 2, item3 );
        ui->curiolWidget->setItem( ui->curiolWidget->rowCount() -1, 3, item4 );
    }
}

void MainWindow::updateChanchaoTab(){
    ui->chanchaoWidget->setRowCount(0);
    chanchaos = sql.listBirds(CHANCHAO_F);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < chanchaos.size() ; i++){
        ui->chanchaoWidget->insertRow( ui->chanchaoWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(chanchaos.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(chanchaos.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(chanchaos.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).chanchaos.size() ; k++){
                if(owners.at(j).chanchaos.at(k).id == chanchaos.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->chanchaoWidget->setItem( ui->chanchaoWidget->rowCount() -1, 0, item1 );
        ui->chanchaoWidget->setItem( ui->chanchaoWidget->rowCount() -1, 1, item2 );
        ui->chanchaoWidget->setItem( ui->chanchaoWidget->rowCount() -1, 2, item3 );
        ui->chanchaoWidget->setItem( ui->chanchaoWidget->rowCount() -1, 3, item4 );
    }
}

void MainWindow::updateColeiroTab(){
    ui->coleiroWidget->setRowCount(0);
    coleiros = sql.listBirds(COLEIRO);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < coleiros.size() ; i++){
        ui->coleiroWidget->insertRow( ui->coleiroWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(coleiros.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(coleiros.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(coleiros.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).coleiros.size() ; k++){
                if(owners.at(j).coleiros.at(k).id == coleiros.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->coleiroWidget->setItem( ui->coleiroWidget->rowCount() -1, 0, item1 );
        ui->coleiroWidget->setItem( ui->coleiroWidget->rowCount() -1, 1, item2 );
        ui->coleiroWidget->setItem( ui->coleiroWidget->rowCount() -1, 2, item3 );
        ui->coleiroWidget->setItem( ui->coleiroWidget->rowCount() -1, 3, item4 );
    }
}

void MainWindow::updateTrincaTab(){
    ui->trincaWidget->setRowCount(0);
    trincas = sql.listBirds(TRINCA_FERRO);

    updateOwnerTab();

    for(unsigned int i = 0 ; i < trincas.size() ; i++){
        ui->trincaWidget->insertRow( ui->trincaWidget->rowCount() );

        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(trincas.at(i).id));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(trincas.at(i).name));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(trincas.at(i).washer));

        std::string str = "";
        for(unsigned int j = 0 ; j < owners.size() ; j++){
            for(unsigned int k = 0 ; k < owners.at(j).trincas.size() ; k++){
                if(owners.at(j).trincas.at(k).id == trincas.at(i).id){
                    str = owners.at(j).name;
                }
            }
        }

        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(str));

        item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        item4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        ui->trincaWidget->setItem( ui->trincaWidget->rowCount() -1, 0, item1 );
        ui->trincaWidget->setItem( ui->trincaWidget->rowCount() -1, 1, item2 );
        ui->trincaWidget->setItem( ui->trincaWidget->rowCount() -1, 2, item3 );
        ui->trincaWidget->setItem( ui->trincaWidget->rowCount() -1, 3, item4 );
    }
}
