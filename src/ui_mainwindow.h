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
    QLineEdit *lineEdit;
    QPushButton *refreshOwnerBtn;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *curioTab;
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
        deleteOwnerBtn->setGeometry(QRect(1060, 530, 191, 51));
        updateOwnerBtn = new QPushButton(ownerTab);
        updateOwnerBtn->setObjectName(QStringLiteral("updateOwnerBtn"));
        updateOwnerBtn->setGeometry(QRect(1060, 590, 191, 51));
        readOwnerBtn = new QPushButton(ownerTab);
        readOwnerBtn->setObjectName(QStringLiteral("readOwnerBtn"));
        readOwnerBtn->setGeometry(QRect(1060, 250, 191, 51));
        lineEdit = new QLineEdit(ownerTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1060, 220, 191, 27));
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
        curioTab = new QWidget();
        curioTab->setObjectName(QStringLiteral("curioTab"));
        mainTabs->addTab(curioTab, QString());
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

        mainTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Beta", 0));
        label->setText(QApplication::translate("MainWindow", "Propriet\303\241rios", 0));
        createOwnerBtn->setText(QApplication::translate("MainWindow", "Adicionar Novo", 0));
        deleteOwnerBtn->setText(QApplication::translate("MainWindow", "Remover Propriet\303\241rio", 0));
        updateOwnerBtn->setText(QApplication::translate("MainWindow", "Alterar Dados", 0));
        readOwnerBtn->setText(QApplication::translate("MainWindow", "Buscar por Nome", 0));
        refreshOwnerBtn->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        mainTabs->setTabText(mainTabs->indexOf(ownerTab), QApplication::translate("MainWindow", "Propriet\303\241rios", 0));
        mainTabs->setTabText(mainTabs->indexOf(curioTab), QApplication::translate("MainWindow", "P\303\241ssaros", 0));
        mainTabs->setTabText(mainTabs->indexOf(chanchaoTab), QApplication::translate("MainWindow", "Competi\303\247\303\243o", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
