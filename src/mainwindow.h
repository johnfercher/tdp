#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"
#include <QDateTime>

#include "commons.h"
#include "sqlite.h"

#include "createowner.h"
#include "updateowner.h"

#include "createbird.h"
#include "updatebird.h"

#include "createcompetition.h"

#include "confirmation.h"

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

    void updateCompetitionBox();
    void updateOwnerBox();

    Sqlite sql;

    std::vector<Owner> owners;
    std::vector<Owner> owners_comp;

    std::vector<Bird> bicudos;
    std::vector<Bird> curiofs;
    std::vector<Bird> curiols;
    std::vector<Bird> chanchaos;
    std::vector<Bird> coleiros;
    std::vector<Bird> trincas;

    int id_competition;
    std::vector<Competition> competitions;

    int ownerRowSelected;

    int bicudoRowSelected;
    int curiofRowSelected;
    int curiolRowSelected;
    int chanchaoRowSelected;
    int coleiroRowSelected;
    int trincaRowSelected;

    int deleteCompRowSelected;
    int reloadCompRowSelected;
    int birdRaceRowSelected;

private slots:
    void handleCreateOwner();
    void handleCellOwner(int row);
    void handleRefreshOwner();
    void handleDeleteOwner();
    void handleUpdateOwner();

    void handleCreateBicudo();
    void handleCellBicudo(int row);
    void handleRefreshBicudo();
    void handleDeleteBicudo();
    void handleUpdateBicudo();

    void handleCreateCuriof();
    void handleCellCuriof(int row);
    void handleRefreshCuriof();
    void handleDeleteCuriof();

    void handleCreateCuriol();
    void handleCellCuriol(int row);
    void handleRefreshCuriol();
    void handleDeleteCuriol();

    void handleCreateChanchao();
    void handleCellChanchao(int row);
    void handleRefreshChanchao();
    void handleDeleteChanchao();

    void handleCreateColeiro();
    void handleCellColeiro(int row);
    void handleRefreshColeiro();
    void handleDeleteColeiro();

    void handleCreateTrinca();
    void handleCellTrinca(int row);
    void handleRefreshTrinca();
    void handleDeleteTrinca();

    void handleCreateComp();
    void handleReloadComp();
    void handleDeleteComp();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
