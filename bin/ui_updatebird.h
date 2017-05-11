/********************************************************************************
** Form generated from reading UI file 'updatebird.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBIRD_H
#define UI_UPDATEBIRD_H

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

class Ui_UpdateBird
{
public:
    QLabel *label_2;
    QLineEdit *washerLine;
    QLineEdit *nameLine;
    QLabel *label_5;
    QLabel *label_3;
    QComboBox *ownersBox;
    QLabel *label;
    QPushButton *addSave;
    QLabel *label_4;
    QComboBox *racesBox;
    QLabel *label_6;
    QLabel *id_bird;

    void setupUi(QDialog *UpdateBird)
    {
        if (UpdateBird->objectName().isEmpty())
            UpdateBird->setObjectName(QStringLiteral("UpdateBird"));
        UpdateBird->resize(450, 260);
        label_2 = new QLabel(UpdateBird);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 230, 241, 17));
        washerLine = new QLineEdit(UpdateBird);
        washerLine->setObjectName(QStringLiteral("washerLine"));
        washerLine->setGeometry(QRect(110, 170, 331, 27));
        nameLine = new QLineEdit(UpdateBird);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(110, 130, 331, 27));
        label_5 = new QLabel(UpdateBird);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 94, 67, 17));
        label_3 = new QLabel(UpdateBird);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 174, 67, 17));
        ownersBox = new QComboBox(UpdateBird);
        ownersBox->setObjectName(QStringLiteral("ownersBox"));
        ownersBox->setGeometry(QRect(110, 50, 331, 27));
        label = new QLabel(UpdateBird);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 134, 67, 17));
        addSave = new QPushButton(UpdateBird);
        addSave->setObjectName(QStringLiteral("addSave"));
        addSave->setGeometry(QRect(280, 220, 161, 27));
        label_4 = new QLabel(UpdateBird);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 54, 91, 17));
        racesBox = new QComboBox(UpdateBird);
        racesBox->setObjectName(QStringLiteral("racesBox"));
        racesBox->setGeometry(QRect(110, 90, 331, 27));
        label_6 = new QLabel(UpdateBird);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 13, 91, 17));
        id_bird = new QLabel(UpdateBird);
        id_bird->setObjectName(QStringLiteral("id_bird"));
        id_bird->setGeometry(QRect(110, 13, 331, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        id_bird->setFont(font);

        retranslateUi(UpdateBird);

        QMetaObject::connectSlotsByName(UpdateBird);
    } // setupUi

    void retranslateUi(QDialog *UpdateBird)
    {
        UpdateBird->setWindowTitle(QApplication::translate("UpdateBird", "Dialog", 0));
        label_2->setText(QApplication::translate("UpdateBird", "* Todos os campos s\303\243o obrigat\303\263rios", 0));
        label_5->setText(QApplication::translate("UpdateBird", "Ra\303\247a:", 0));
        label_3->setText(QApplication::translate("UpdateBird", "Anilha:", 0));
        label->setText(QApplication::translate("UpdateBird", "Nome:", 0));
        addSave->setText(QApplication::translate("UpdateBird", "Salvar", 0));
        label_4->setText(QApplication::translate("UpdateBird", "Propriet\303\241rio:", 0));
        label_6->setText(QApplication::translate("UpdateBird", "Id:", 0));
        id_bird->setText(QApplication::translate("UpdateBird", "0000", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateBird: public Ui_UpdateBird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBIRD_H
