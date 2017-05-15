#include "createcompetition.h"
#include "ui_createcompetition.h"

CreateCompetition::CreateCompetition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCompetition)
{
    ui->setupUi(this);
    ui->lineDate->setText(QDateTime::currentDateTime().toString("dd-MMM-yyyy hh:mm:ss"));
    ui->lineQtdBicudos->setText("100");
    ui->lineQtdCuriofs->setText("50");
    ui->lineQtdCuriols->setText("50");
    ui->lineQtdChanchaos->setText("60");
    ui->lineQtdColeiros->setText("60");
    ui->lineQtdTrincas->setText("60");

    connect(ui->createCompBtn, SIGNAL (released()), this, SLOT (handleCreateComp()));
}

CreateCompetition::~CreateCompetition()
{
    delete ui;
}

void CreateCompetition::handleCreateComp(){
    std::string qtd_bicudo = ui->lineQtdBicudos->text().toUtf8().constData();
    std::string qtd_curiof = ui->lineQtdCuriofs->text().toUtf8().constData();
    std::string qtd_curiol = ui->lineQtdCuriols->text().toUtf8().constData();
    std::string qtd_chanchao = ui->lineQtdChanchaos->text().toUtf8().constData();
    std::string qtd_coleiro = ui->lineQtdColeiros->text().toUtf8().constData();
    std::string qtd_trinca = ui->lineQtdTrincas->text().toUtf8().constData();

    if(qtd_bicudo != "" && qtd_curiof != "" && qtd_curiol != "" && qtd_chanchao != "" && qtd_coleiro != "" && qtd_trinca != ""){
        competition.qtd_bicudo = std::stoi(qtd_bicudo);
        competition.qtd_curiof = std::stoi(qtd_curiof);
        competition.qtd_curiol = std::stoi(qtd_curiol);
        competition.qtd_chanchao = std::stoi(qtd_chanchao);
        competition.qtd_coleiro = std::stoi(qtd_coleiro);
        competition.qtd_trinca = std::stoi(qtd_trinca);
        competition.date = ui->lineDate->text().toUtf8().constData();

        //competition.debug();
        sql.addCompetition(competition);

        this->close();
    }
}
