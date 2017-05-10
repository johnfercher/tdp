#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"
#include "commons.h"
#include "sqlite.h"

#include "createowner.h"
#include "updateowner.h"

#include "createbird.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();

    void initOwnerTab();
    void initBicudoTab();

    void updateOwnerTab();
    void updateBicudoTab();

    Sqlite sql;

    std::vector<Owner> owners;
    std::vector<Bird> bicudos;

    int ownerRowSelected;

private slots:
    void handleCreateOwner();
    void handleRefresnOwner();
    void handleCellClicked(int row,int col);
    void handleDeleteOwner();
    void handleUpdateOwner();

    void handleCreateBird();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
