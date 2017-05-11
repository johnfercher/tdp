/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *mainTabs;
    QWidget *ownerTab;
    QTableWidget *ownerWidget;
    QLabel *label;
    QPushButton *createOwnerBtn;
    QPushButton *deleteOwnerBtn;
    QPushButton *updateOwnerBtn;
    QPushButton *readOwnerBtn;
    QLineEdit *searchNameLine;
    QPushButton *refreshOwnerBtn;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *birdTab;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QTableWidget *bicudoWidget;
    QPushButton *refreshBicudoBtn;
    QPushButton *createBicudoBtn;
    QPushButton *deleteBicudoBtn;
    QPushButton *updateBicudoBtn;
    QWidget *tab_2;
    QLabel *label_3;
    QPushButton *updateCuriofBtn;
    QPushButton *deleteCuriofBtn;
    QPushButton *createCuriofBtn;
    QTableWidget *curiofWidget;
    QPushButton *refreshCuriofBtn;
    QWidget *tab_3;
    QPushButton *updateChanchaoBtn;
    QPushButton *refreshChanchaoBtn;
    QPushButton *createChanchaoBtn;
    QLabel *label_4;
    QTableWidget *chanchaoWidget;
    QPushButton *deleteChanchaoBtn;
    QWidget *tab_4;
    QTableWidget *coleiroWidget;
    QLabel *label_5;
    QPushButton *updateColeiroBtn;
    QPushButton *refreshColeiroBtn;
    QPushButton *deleteColeiroBtn;
    QPushButton *createColeiroBtn;
    QWidget *tab_5;
    QPushButton *deleteTrincaBtn;
    QPushButton *createTrincaBtn;
    QPushButton *updateTrincaBtn;
    QPushButton *refreshTrincaBtn;
    QLabel *label_6;
    QTableWidget *trincaWidget;
    QWidget *tab_6;
    QPushButton *updateCuriolBtn;
    QTableWidget *curiolWidget;
    QPushButton *createCuriolBtn;
    QLabel *label_7;
    QPushButton *deleteCuriolBtn;
    QPushButton *refreshCuriolBtn;
    QWidget *chanchaoTab;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(1280, 720));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainTabs = new QTabWidget(centralWidget);
        mainTabs->setObjectName(QStringLiteral("mainTabs"));
        mainTabs->setGeometry(QRect(10, 10, 1261, 691));
        ownerTab = new QWidget();
        ownerTab->setObjectName(QStringLiteral("ownerTab"));
        ownerWidget = new QTableWidget(ownerTab);
        ownerWidget->setObjectName(QStringLiteral("ownerWidget"));
        ownerWidget->setGeometry(QRect(10, 70, 1041, 581));
        label = new QLabel(ownerTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1041, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        createOwnerBtn = new QPushButton(ownerTab);
        createOwnerBtn->setObjectName(QStringLiteral("createOwnerBtn"));
        createOwnerBtn->setGeometry(QRect(1060, 470, 191, 51));
        deleteOwnerBtn = new QPushButton(ownerTab);
        deleteOwnerBtn->setObjectName(QStringLiteral("deleteOwnerBtn"));
        deleteOwnerBtn->setGeometry(QRect(1060, 590, 191, 51));
        updateOwnerBtn = new QPushButton(ownerTab);
        updateOwnerBtn->setObjectName(QStringLiteral("updateOwnerBtn"));
        updateOwnerBtn->setGeometry(QRect(1060, 530, 191, 51));
        readOwnerBtn = new QPushButton(ownerTab);
        readOwnerBtn->setObjectName(QStringLiteral("readOwnerBtn"));
        readOwnerBtn->setGeometry(QRect(1060, 250, 191, 51));
        searchNameLine = new QLineEdit(ownerTab);
        searchNameLine->setObjectName(QStringLiteral("searchNameLine"));
        searchNameLine->setGeometry(QRect(1060, 220, 191, 27));
        refreshOwnerBtn = new QPushButton(ownerTab);
        refreshOwnerBtn->setObjectName(QStringLiteral("refreshOwnerBtn"));
        refreshOwnerBtn->setGeometry(QRect(1060, 10, 191, 51));
        line = new QFrame(ownerTab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(1060, 70, 191, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ownerTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(1060, 80, 191, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ownerTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(1060, 440, 191, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(ownerTab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(1060, 430, 191, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        mainTabs->addTab(ownerTab, QString());
        birdTab = new QWidget();
        birdTab->setObjectName(QStringLiteral("birdTab"));
        tabWidget = new QTabWidget(birdTab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1241, 641));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 1221, 51));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        bicudoWidget = new QTableWidget(tab);
        bicudoWidget->setObjectName(QStringLiteral("bicudoWidget"));
        bicudoWidget->setGeometry(QRect(10, 70, 1221, 471));
        refreshBicudoBtn = new QPushButton(tab);
        refreshBicudoBtn->setObjectName(QStringLiteral("refreshBicudoBtn"));
        refreshBicudoBtn->setGeometry(QRect(1030, 550, 191, 51));
        createBicudoBtn = new QPushButton(tab);
        createBicudoBtn->setObjectName(QStringLiteral("createBicudoBtn"));
        createBicudoBtn->setGeometry(QRect(20, 550, 191, 51));
        deleteBicudoBtn = new QPushButton(tab);
        deleteBicudoBtn->setObjectName(QStringLiteral("deleteBicudoBtn"));
        deleteBicudoBtn->setGeometry(QRect(420, 550, 191, 51));
        updateBicudoBtn = new QPushButton(tab);
        updateBicudoBtn->setObjectName(QStringLiteral("updateBicudoBtn"));
        updateBicudoBtn->setGeometry(QRect(220, 550, 191, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 1221, 51));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        updateCuriofBtn = new QPushButton(tab_2);
        updateCuriofBtn->setObjectName(QStringLiteral("updateCuriofBtn"));
        updateCuriofBtn->setGeometry(QRect(220, 550, 191, 51));
        deleteCuriofBtn = new QPushButton(tab_2);
        deleteCuriofBtn->setObjectName(QStringLiteral("deleteCuriofBtn"));
        deleteCuriofBtn->setGeometry(QRect(420, 550, 191, 51));
        createCuriofBtn = new QPushButton(tab_2);
        createCuriofBtn->setObjectName(QStringLiteral("createCuriofBtn"));
        createCuriofBtn->setGeometry(QRect(20, 550, 191, 51));
        curiofWidget = new QTableWidget(tab_2);
        curiofWidget->setObjectName(QStringLiteral("curiofWidget"));
        curiofWidget->setGeometry(QRect(10, 70, 1221, 471));
        refreshCuriofBtn = new QPushButton(tab_2);
        refreshCuriofBtn->setObjectName(QStringLiteral("refreshCuriofBtn"));
        refreshCuriofBtn->setGeometry(QRect(1030, 550, 191, 51));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        updateChanchaoBtn = new QPushButton(tab_3);
        updateChanchaoBtn->setObjectName(QStringLiteral("updateChanchaoBtn"));
        updateChanchaoBtn->setGeometry(QRect(220, 550, 191, 51));
        QFont font1;
        font1.setPointSize(10);
        updateChanchaoBtn->setFont(font1);
        refreshChanchaoBtn = new QPushButton(tab_3);
        refreshChanchaoBtn->setObjectName(QStringLiteral("refreshChanchaoBtn"));
        refreshChanchaoBtn->setGeometry(QRect(1030, 550, 191, 51));
        createChanchaoBtn = new QPushButton(tab_3);
        createChanchaoBtn->setObjectName(QStringLiteral("createChanchaoBtn"));
        createChanchaoBtn->setGeometry(QRect(20, 550, 191, 51));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 1221, 51));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(false);
        chanchaoWidget = new QTableWidget(tab_3);
        chanchaoWidget->setObjectName(QStringLiteral("chanchaoWidget"));
        chanchaoWidget->setGeometry(QRect(10, 70, 1221, 471));
        deleteChanchaoBtn = new QPushButton(tab_3);
        deleteChanchaoBtn->setObjectName(QStringLiteral("deleteChanchaoBtn"));
        deleteChanchaoBtn->setGeometry(QRect(420, 550, 191, 51));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        coleiroWidget = new QTableWidget(tab_4);
        coleiroWidget->setObjectName(QStringLiteral("coleiroWidget"));
        coleiroWidget->setGeometry(QRect(10, 70, 1221, 471));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 1221, 51));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        updateColeiroBtn = new QPushButton(tab_4);
        updateColeiroBtn->setObjectName(QStringLiteral("updateColeiroBtn"));
        updateColeiroBtn->setGeometry(QRect(220, 550, 191, 51));
        refreshColeiroBtn = new QPushButton(tab_4);
        refreshColeiroBtn->setObjectName(QStringLiteral("refreshColeiroBtn"));
        refreshColeiroBtn->setGeometry(QRect(1030, 550, 191, 51));
        deleteColeiroBtn = new QPushButton(tab_4);
        deleteColeiroBtn->setObjectName(QStringLiteral("deleteColeiroBtn"));
        deleteColeiroBtn->setGeometry(QRect(420, 550, 191, 51));
        createColeiroBtn = new QPushButton(tab_4);
        createColeiroBtn->setObjectName(QStringLiteral("createColeiroBtn"));
        createColeiroBtn->setGeometry(QRect(20, 550, 191, 51));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        deleteTrincaBtn = new QPushButton(tab_5);
        deleteTrincaBtn->setObjectName(QStringLiteral("deleteTrincaBtn"));
        deleteTrincaBtn->setGeometry(QRect(420, 550, 191, 51));
        createTrincaBtn = new QPushButton(tab_5);
        createTrincaBtn->setObjectName(QStringLiteral("createTrincaBtn"));
        createTrincaBtn->setGeometry(QRect(20, 550, 191, 51));
        updateTrincaBtn = new QPushButton(tab_5);
        updateTrincaBtn->setObjectName(QStringLiteral("updateTrincaBtn"));
        updateTrincaBtn->setGeometry(QRect(220, 550, 191, 51));
        refreshTrincaBtn = new QPushButton(tab_5);
        refreshTrincaBtn->setObjectName(QStringLiteral("refreshTrincaBtn"));
        refreshTrincaBtn->setGeometry(QRect(1030, 550, 191, 51));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 1221, 51));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(false);
        trincaWidget = new QTableWidget(tab_5);
        trincaWidget->setObjectName(QStringLiteral("trincaWidget"));
        trincaWidget->setGeometry(QRect(10, 70, 1221, 471));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        updateCuriolBtn = new QPushButton(tab_6);
        updateCuriolBtn->setObjectName(QStringLiteral("updateCuriolBtn"));
        updateCuriolBtn->setGeometry(QRect(220, 550, 191, 51));
        curiolWidget = new QTableWidget(tab_6);
        curiolWidget->setObjectName(QStringLiteral("curiolWidget"));
        curiolWidget->setGeometry(QRect(10, 70, 1221, 471));
        createCuriolBtn = new QPushButton(tab_6);
        createCuriolBtn->setObjectName(QStringLiteral("createCuriolBtn"));
        createCuriolBtn->setGeometry(QRect(20, 550, 191, 51));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 1221, 51));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(false);
        deleteCuriolBtn = new QPushButton(tab_6);
        deleteCuriolBtn->setObjectName(QStringLiteral("deleteCuriolBtn"));
        deleteCuriolBtn->setGeometry(QRect(420, 550, 191, 51));
        refreshCuriolBtn = new QPushButton(tab_6);
        refreshCuriolBtn->setObjectName(QStringLiteral("refreshCuriolBtn"));
        refreshCuriolBtn->setGeometry(QRect(1030, 550, 191, 51));
        tabWidget->addTab(tab_6, QString());
        mainTabs->addTab(birdTab, QString());
        chanchaoTab = new QWidget();
        chanchaoTab->setObjectName(QStringLiteral("chanchaoTab"));
        mainTabs->addTab(chanchaoTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        mainTabs->setCurrentIndex(1);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Beta", 0));
        label->setText(QApplication::translate("MainWindow", "Propriet\303\241rios", 0));
        createOwnerBtn->setText(QApplication::translate("MainWindow", "Novo Propriet\303\241rio", 0));
        deleteOwnerBtn->setText(QApplication::translate("MainWindow", "Remover Propriet\303\241rio", 0));
        updateOwnerBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Prop.", 0));
        readOwnerBtn->setText(QApplication::translate("MainWindow", "Buscar por Nome", 0));
        refreshOwnerBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        mainTabs->setTabText(mainTabs->indexOf(ownerTab), QApplication::translate("MainWindow", "Propriet\303\241rios", 0));
        label_2->setText(QApplication::translate("MainWindow", "Bicudo Fibra", 0));
        refreshBicudoBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        createBicudoBtn->setText(QApplication::translate("MainWindow", "Novo Bicudo", 0));
        deleteBicudoBtn->setText(QApplication::translate("MainWindow", "Remover Bicudo", 0));
        updateBicudoBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Bicudo", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Bicudo Fibra", 0));
        label_3->setText(QApplication::translate("MainWindow", "Curi\303\263 Fibra", 0));
        updateCuriofBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Curi\303\263", 0));
        deleteCuriofBtn->setText(QApplication::translate("MainWindow", "Remover Curi\303\263", 0));
        createCuriofBtn->setText(QApplication::translate("MainWindow", "Novo Curi\303\263", 0));
        refreshCuriofBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Curi\303\263 Fibra", 0));
        updateChanchaoBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Chanch\303\243o", 0));
        refreshChanchaoBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        createChanchaoBtn->setText(QApplication::translate("MainWindow", "Novo Chanch\303\243o", 0));
        label_4->setText(QApplication::translate("MainWindow", "Chanch\303\243o Fibra", 0));
        deleteChanchaoBtn->setText(QApplication::translate("MainWindow", "Remover Chanch\303\243o", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Chanch\303\243o Fibra", 0));
        label_5->setText(QApplication::translate("MainWindow", "Coleiro", 0));
        updateColeiroBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Coleiro", 0));
        refreshColeiroBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        deleteColeiroBtn->setText(QApplication::translate("MainWindow", "Remover Coleiro", 0));
        createColeiroBtn->setText(QApplication::translate("MainWindow", "Novo Coleiro", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Coleiro", 0));
        deleteTrincaBtn->setText(QApplication::translate("MainWindow", "Remover Trinca Ferro", 0));
        createTrincaBtn->setText(QApplication::translate("MainWindow", "Novo Trinca Ferro", 0));
        updateTrincaBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de T. Ferro", 0));
        refreshTrincaBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        label_6->setText(QApplication::translate("MainWindow", "Trinca Ferro", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Trinca Ferro", 0));
        updateCuriolBtn->setText(QApplication::translate("MainWindow", "Alterar Dados de Curi\303\263", 0));
        createCuriolBtn->setText(QApplication::translate("MainWindow", "Novo Curi\303\263", 0));
        label_7->setText(QApplication::translate("MainWindow", "Curi\303\263 Canto-Livre", 0));
        deleteCuriolBtn->setText(QApplication::translate("MainWindow", "Remover Curi\303\263", 0));
        refreshCuriolBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Curi\303\263 Canto-Livre", 0));
        mainTabs->setTabText(mainTabs->indexOf(birdTab), QApplication::translate("MainWindow", "P\303\241ssaros", 0));
        mainTabs->setTabText(mainTabs->indexOf(chanchaoTab), QApplication::translate("MainWindow", "Competi\303\247\303\243o", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
