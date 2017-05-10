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

    ui->deleteBirdBtn->setStyleSheet("QPushButton{ background-color: #d00; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #700; } QPushButton:hover:!pressed{ background-color: #e00; color: #fff; }");
    ui->createBirdBtn->setStyleSheet("QPushButton{ background-color: #0a0; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #050; } QPushButton:hover:!pressed{ background-color: #0b0; color: #fff; }");
    ui->updateBirdBtn->setStyleSheet("QPushButton{ background-color: #00a; color: #eee; border-style: outset; border-width: 2px; border-radius: 5px; border-color: #003; } QPushButton:hover:!pressed{ background-color: #00c; color: #fff; }");

    init();

    ownerRowSelected = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    initOwnerTab();
    initBicudoTab();

    connect(ui->createOwnerBtn, SIGNAL (released()), this, SLOT (handleCreateOwner()));
    connect(ui->refreshOwnerBtn, SIGNAL (released()), this, SLOT (handleRefresnOwner()));
    connect(ui->ownerWidget, SIGNAL(cellClicked(int,int)), this, SLOT(handleCellClicked(int,int)));
    connect(ui->deleteOwnerBtn, SIGNAL (released()), this, SLOT (handleDeleteOwner()));
    connect(ui->updateOwnerBtn, SIGNAL (released()), this, SLOT (handleUpdateOwner()));

    connect(ui->createBirdBtn, SIGNAL (released()), this, SLOT (handleCreateBird()));
}

void MainWindow::initOwnerTab(){
    QStringList ownerHeader;
    ui->ownerWidget->setColumnCount(5);

    ownerHeader << "Id" << "Proprietário" << "CPF" << "CTF" << "Pássaros";

    ui->ownerWidget->setHorizontalHeaderLabels(ownerHeader);
    ui->ownerWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);

    ui->ownerWidget->setColumnWidth(0, 50);
    ui->ownerWidget->setColumnWidth(1, 300);
    ui->ownerWidget->setColumnWidth(2, 150);
    ui->ownerWidget->setColumnWidth(3, 150);
    ui->ownerWidget->setColumnWidth(4, 350);

    updateOwnerTab();
}

void MainWindow::initBicudoTab(){
    QStringList bicudoHeader;
    ui->bicudoWidget->setColumnCount(4);

    bicudoHeader << "Id" << "Pássaro" << "Anilha" << "Proprietário";

    ui->bicudoWidget->setHorizontalHeaderLabels(bicudoHeader);
    ui->bicudoWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);

    ui->bicudoWidget->setColumnWidth(0, 100);
    ui->bicudoWidget->setColumnWidth(1, 380);
    ui->bicudoWidget->setColumnWidth(2, 310);
    ui->bicudoWidget->setColumnWidth(3, 380);

    updateBicudoTab();
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

void MainWindow::handleCreateBird(){
    CreateBird dialog(this);

    dialog.setOwners(owners);
    dialog.setRace(BICUDO_F);
    dialog.setFixedSize(450, 220);

    dialog.exec();

    updateBicudoTab();
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

        std::stringstream bicudos;

        for(unsigned int j = 0 ; j < owners.at(i).bicudos.size() ; j++){
            bicudos << owners.at(i).bicudos.at(j).id << " ; ";
        }

        QTableWidgetItem *item5 = new QTableWidgetItem(QString::fromStdString(bicudos.str()));

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
    bicudos = sql.listBicudos();

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
