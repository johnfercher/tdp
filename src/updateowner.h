#ifndef UPDATEOWNER_H
#define UPDATEOWNER_H

#include <QDialog>
#include "QString"
#include "commons.h"
#include "sqlite.h"

namespace Ui {
class UpdateOwner;
}

class UpdateOwner : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateOwner(QWidget *parent = 0);
    ~UpdateOwner();

    void setOwner(Owner owner);

private slots:
    void handleSave();

private:
    Ui::UpdateOwner *ui;
    Sqlite sql;

    Owner owner;
};

#endif // UPDATEOWNER_H
