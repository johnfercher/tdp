#ifndef CREATEOWNER_H
#define CREATEOWNER_H

#include <QDialog>
#include "commons.h"
#include "sqlite.h"

namespace Ui {
class CreateOwner;
}

class CreateOwner : public QDialog
{
    Q_OBJECT

public:
    explicit CreateOwner(QWidget *parent = 0);
    ~CreateOwner();

    void init();

private slots:
    void handleAdd();

private:
    Ui::CreateOwner *ui;
    Sqlite sql;
    Owner owner;
};

#endif // CREATEOWNER_H
