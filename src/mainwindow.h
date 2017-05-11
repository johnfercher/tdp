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
    void initBirdsTab();

    void updateOwnerTab();
    void updateBicudoTab();
    void updateCuriofTab();
    void updateCuriolTab();
    void updateChanchaoTab();
    void updateColeiroTab();
    void updateTrincaTab();

    Sqlite sql;

    std::vector<Owner> owners;
    std::vector<Bird> bicudos;
    std::vector<Bird> curiofs;
    std::vector<Bird> curiols;
    std::vector<Bird> chanchaos;
    std::vector<Bird> coleiros;
    std::vector<Bird> trincas;

    int ownerRowSelected;

private slots:
    void handleCreateOwner();
    void handleRefresnOwner();
    void handleCellClicked(int row,int col);
    void handleDeleteOwner();
    void handleUpdateOwner();

    void handleCreateBicudo();

    void handleCreateCuriof();

    void handleCreateCuriol();

    void handleCreateChanchao();

    void handleCreateColeiro();

    void handleCreateTrinca();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
