#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commons.h"
#include "insertnewdialog.h"

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

    connect(ui->insertNew, SIGNAL (released()), this, SLOT (handleInsertNew()));
}

void MainWindow::initBicudoTab(){
    QStringList bicudoTabH;

    ui->bicudoTabW->setRowCount(100);
    ui->bicudoTabW->setColumnCount(5);

    bicudoTabH << "Proprietário" << "Nome do Pássaro" << "Anilha" << "CTF" << "Status";

    ui->bicudoTabW->setHorizontalHeaderLabels(bicudoTabH);
    ui->bicudoTabW->setEditTriggers(QAbstractItemView::AllEditTriggers);

    for(int i = 0 ; i < 4 ; i++)
        ui->bicudoTabW->setColumnWidth(i, 272);
}

void MainWindow::handleInsertNew(){
    InsertNewDialog dialog(this);
    dialog.setFixedSize(450, 260);
    dialog.exec();
}
