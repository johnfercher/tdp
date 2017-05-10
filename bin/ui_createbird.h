/********************************************************************************
** Form generated from reading UI file 'createbird.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBIRD_H
#define UI_CREATEBIRD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateBird
{
public:
    QLineEdit *washerLine;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *nameLine;
    QPushButton *addBtn;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *race;
    QComboBox *ownersBox;

    void setupUi(QDialog *CreateBird)
    {
        if (CreateBird->objectName().isEmpty())
            CreateBird->setObjectName(QStringLiteral("CreateBird"));
        CreateBird->resize(450, 220);
        washerLine = new QLineEdit(CreateBird);
        washerLine->setObjectName(QStringLiteral("washerLine"));
        washerLine->setGeometry(QRect(110, 130, 331, 27));
        label_3 = new QLabel(CreateBird);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 134, 67, 17));
        label_2 = new QLabel(CreateBird);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 190, 241, 17));
        nameLine = new QLineEdit(CreateBird);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(110, 90, 331, 27));
        addBtn = new QPushButton(CreateBird);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(280, 180, 161, 27));
        label = new QLabel(CreateBird);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 94, 67, 17));
        label_4 = new QLabel(CreateBird);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 14, 91, 17));
        label_5 = new QLabel(CreateBird);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 54, 67, 17));
        race = new QLabel(CreateBird);
        race->setObjectName(QStringLiteral("race"));
        race->setGeometry(QRect(110, 54, 331, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        race->setFont(font);
        ownersBox = new QComboBox(CreateBird);
        ownersBox->setObjectName(QStringLiteral("ownersBox"));
        ownersBox->setGeometry(QRect(110, 10, 331, 27));

        retranslateUi(CreateBird);

        QMetaObject::connectSlotsByName(CreateBird);
    } // setupUi

    void retranslateUi(QDialog *CreateBird)
    {
        CreateBird->setWindowTitle(QApplication::translate("CreateBird", "Novo P\303\241ssaro", 0));
        label_3->setText(QApplication::translate("CreateBird", "Anilha:", 0));
        label_2->setText(QApplication::translate("CreateBird", "* Todos os campos s\303\243o obrigat\303\263rios", 0));
        addBtn->setText(QApplication::translate("CreateBird", "Adicionar", 0));
        label->setText(QApplication::translate("CreateBird", "Nome:", 0));
        label_4->setText(QApplication::translate("CreateBird", "Propriet\303\241rio:", 0));
        label_5->setText(QApplication::translate("CreateBird", "Ra\303\247a:", 0));
        race->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateBird: public Ui_CreateBird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBIRD_H
