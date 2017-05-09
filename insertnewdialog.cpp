#include "insertnewdialog.h"
#include "ui_insertnewdialog.h"

InsertNewDialog::InsertNewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsertNewDialog)
{
    ui->setupUi(this);

    init();
}

InsertNewDialog::~InsertNewDialog()
{
    delete ui;
}

void InsertNewDialog::init(){
    connect(ui->inserirBtn, SIGNAL (released()), this, SLOT (handleInsert()));
}

void InsertNewDialog::handleInsert(){
    this->close();
}
