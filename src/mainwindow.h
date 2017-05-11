#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"
#include "commons.h"
#include "sqlite.h"

#include "createowner.h"
#include "updateowner.h"

#include "createbird.h"
#include "updatebird.h"

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

    void updateAllTabs();
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

    int bicudoRowSelected;
    int curiofRowSelected;
    int curiolRowSelected;
    int chanchaoRowSelected;
    int coleiroRowSelected;
    int trincaRowSelected;

private slots:
    void handleCreateOwner();
    void handleCellOwner(int row,int col);
    void handleRefreshOwner();
    void handleDeleteOwner();
    void handleUpdateOwner();

    void handleCreateBicudo();
    void handleCellBicudo(int row,int col);
    void handleRefreshBicudo();
    void handleDeleteBicudo();
    void handleUpdateBicudo();

    void handleCreateCuriof();
    void handleCellCuriof(int row,int col);
    void handleRefreshCuriof();
    void handleDeleteCuriof();

    void handleCreateCuriol();
    void handleCellCuriol(int row,int col);
    void handleRefreshCuriol();
    void handleDeleteCuriol();

    void handleCreateChanchao();
    void handleCellChanchao(int row,int col);
    void handleRefreshChanchao();
    void handleDeleteChanchao();

    void handleCreateColeiro();
    void handleCellColeiro(int row,int col);
    void handleRefreshColeiro();
    void handleDeleteColeiro();

    void handleCreateTrinca();
    void handleCellTrinca(int row,int col);
    void handleRefreshTrinca();
    void handleDeleteTrinca();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
