#ifndef CREATECOMPETITION_H
#define CREATECOMPETITION_H

#include <QDialog>
#include <QDateTime>
#include <cstdlib>

#include "commons.h"
#include "sqlite.h"

namespace Ui {
class CreateCompetition;
}

class CreateCompetition : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCompetition(QWidget *parent = 0);
    ~CreateCompetition();

private slots:
    void handleCreateComp();

private:
    Ui::CreateCompetition *ui;
    Sqlite sql;

    QDateTime date;
    Competition competition;
};

#endif // CREATECOMPETITION_H
