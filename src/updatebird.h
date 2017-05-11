#ifndef UPDATEBIRD_H
#define UPDATEBIRD_H

#include <QDialog>
#include "QString"
#include "commons.h"
#include "sqlite.h"

namespace Ui {
class UpdateBird;
}

class UpdateBird : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateBird(QWidget *parent = 0);
    ~UpdateBird();

    void setBird(Bird);
    void setOwners(std::vector<Owner>);

private slots:
    void handleSave();

private:
    Ui::UpdateBird *ui;

    Sqlite sql;

    Bird bird;
    std::vector<Owner> owners;
};

#endif // UPDATEBIRD_H
