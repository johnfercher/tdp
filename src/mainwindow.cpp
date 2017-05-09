#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commons.h"
#include "createowner.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusBar()->hide();

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    initBicudoTab();

    connect(ui->createOwnerBtn, SIGNAL (released()), this, SLOT (handleCreateOwner()));
}

void MainWindow::initBicudoTab(){
    QStringList ownerHeader;

    ui->ownerWidget->setColumnCount(3);

    ownerHeader << "Id" << "Proprietário" << "Pássaros";

    ui->ownerWidget->setHorizontalHeaderLabels(ownerHeader);
    ui->ownerWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);

    ui->ownerWidget->setColumnWidth(0, 100);
    ui->ownerWidget->setColumnWidth(1, 450);
    ui->ownerWidget->setColumnWidth(2, 470);
}

void MainWindow::handleCreateOwner(){
    CreateOwner dialog(this);
    dialog.setFixedSize(450, 260);
    dialog.exec();
}
