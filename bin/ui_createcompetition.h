/********************************************************************************
** Form generated from reading UI file 'createcompetition.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOMPETITION_H
#define UI_CREATECOMPETITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateCompetition
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *createCompBtn;
    QLineEdit *lineQtdBicudos;
    QLineEdit *lineQtdCuriofs;
    QLineEdit *lineQtdCuriols;
    QLineEdit *lineQtdColeiros;
    QLineEdit *lineQtdChanchaos;
    QLineEdit *lineQtdTrincas;
    QLabel *lineDate;

    void setupUi(QDialog *CreateCompetition)
    {
        if (CreateCompetition->objectName().isEmpty())
            CreateCompetition->setObjectName(QStringLiteral("CreateCompetition"));
        CreateCompetition->resize(440, 330);
        label = new QLabel(CreateCompetition);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 55, 191, 17));
        label_2 = new QLabel(CreateCompetition);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 95, 191, 17));
        label_3 = new QLabel(CreateCompetition);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 135, 191, 17));
        label_4 = new QLabel(CreateCompetition);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 175, 191, 17));
        label_5 = new QLabel(CreateCompetition);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 215, 191, 17));
        label_6 = new QLabel(CreateCompetition);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 255, 191, 17));
        label_7 = new QLabel(CreateCompetition);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 15, 191, 17));
        createCompBtn = new QPushButton(CreateCompetition);
        createCompBtn->setObjectName(QStringLiteral("createCompBtn"));
        createCompBtn->setGeometry(QRect(270, 290, 161, 27));
        lineQtdBicudos = new QLineEdit(CreateCompetition);
        lineQtdBicudos->setObjectName(QStringLiteral("lineQtdBicudos"));
        lineQtdBicudos->setGeometry(QRect(200, 50, 231, 27));
        lineQtdCuriofs = new QLineEdit(CreateCompetition);
        lineQtdCuriofs->setObjectName(QStringLiteral("lineQtdCuriofs"));
        lineQtdCuriofs->setGeometry(QRect(200, 90, 231, 27));
        lineQtdCuriols = new QLineEdit(CreateCompetition);
        lineQtdCuriols->setObjectName(QStringLiteral("lineQtdCuriols"));
        lineQtdCuriols->setGeometry(QRect(200, 130, 231, 27));
        lineQtdColeiros = new QLineEdit(CreateCompetition);
        lineQtdColeiros->setObjectName(QStringLiteral("lineQtdColeiros"));
        lineQtdColeiros->setGeometry(QRect(200, 170, 231, 27));
        lineQtdChanchaos = new QLineEdit(CreateCompetition);
        lineQtdChanchaos->setObjectName(QStringLiteral("lineQtdChanchaos"));
        lineQtdChanchaos->setGeometry(QRect(200, 210, 231, 27));
        lineQtdTrincas = new QLineEdit(CreateCompetition);
        lineQtdTrincas->setObjectName(QStringLiteral("lineQtdTrincas"));
        lineQtdTrincas->setGeometry(QRect(200, 250, 231, 27));
        lineDate = new QLabel(CreateCompetition);
        lineDate->setObjectName(QStringLiteral("lineDate"));
        lineDate->setGeometry(QRect(200, 15, 231, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lineDate->setFont(font);

        retranslateUi(CreateCompetition);

        QMetaObject::connectSlotsByName(CreateCompetition);
    } // setupUi

    void retranslateUi(QDialog *CreateCompetition)
    {
        CreateCompetition->setWindowTitle(QApplication::translate("CreateCompetition", "Criar Competi\303\247\303\243o", 0));
        label->setText(QApplication::translate("CreateCompetition", "Qtd de Bicudos:", 0));
        label_2->setText(QApplication::translate("CreateCompetition", "Qtd de Curi\303\263s-Fibra:", 0));
        label_3->setText(QApplication::translate("CreateCompetition", "Qtd de Curi\303\263s Canto-Livre:", 0));
        label_4->setText(QApplication::translate("CreateCompetition", "Qtd de Coleiros:", 0));
        label_5->setText(QApplication::translate("CreateCompetition", "Qtd de Chanch\303\243os:", 0));
        label_6->setText(QApplication::translate("CreateCompetition", "Qtd de Trincas-Ferro:", 0));
        label_7->setText(QApplication::translate("CreateCompetition", "Data:", 0));
        createCompBtn->setText(QApplication::translate("CreateCompetition", "Criar Competi\303\247\303\243o", 0));
        lineDate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateCompetition: public Ui_CreateCompetition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOMPETITION_H
