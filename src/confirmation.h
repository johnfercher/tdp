#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QDialog>
#include "QString"
#include <QPushButton>

namespace Ui {
class Confirmation;
}

class Confirmation : public QDialog
{
    Q_OBJECT

public:
    explicit Confirmation(QWidget *parent = 0);
    ~Confirmation();

    void setMessage(QString);

private:
    Ui::Confirmation *ui;
    QString msg;
};

#endif // CONFIRMATION_H
