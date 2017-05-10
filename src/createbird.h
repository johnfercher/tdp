#ifndef CREATEBIRD_H
#define CREATEBIRD_H

#include <QDialog>

#include "commons.h"
#include "sqlite.h"

namespace Ui {
class CreateBird;
}

class CreateBird : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBird(QWidget *parent = 0);
    ~CreateBird();

    void setRace(int);
    void setOwners(std::vector<Owner>);

private slots:
    void handleAdd();

private:
    Ui::CreateBird *ui;
    Sqlite sql;

    Bird bird;
    std::vector<Owner> owners;
};

#endif // CREATEBIRD_H
