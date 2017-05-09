#ifndef INSERTNEWDIALOG_H
#define INSERTNEWDIALOG_H

#include <QDialog>

namespace Ui {
class InsertNewDialog;
}

class InsertNewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertNewDialog(QWidget *parent = 0);
    ~InsertNewDialog();

    void init();

private slots:
    void handleInsert();

private:
    Ui::InsertNewDialog *ui;
};

#endif // INSERTNEWDIALOG_H
