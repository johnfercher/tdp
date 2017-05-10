/********************************************************************************
** Form generated from reading UI file 'updateowner.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEOWNER_H
#define UI_UPDATEOWNER_H

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

class Ui_UpdateOwner
{
public:
    QLabel *label_2;
    QLineEdit *nameLine;
    QLabel *label;
    QPushButton *addSave;
    QLabel *label_3;
    QLabel *idOwner;
    QLabel *label_4;
    QLabel *birdsOwner;
    QLineEdit *cpfLine;
    QLabel *label_5;
    QLineEdit *ctfLine;
    QLabel *label_6;

    void setupUi(QDialog *UpdateOwner)
    {
        if (UpdateOwner->objectName().isEmpty())
            UpdateOwner->setObjectName(QStringLiteral("UpdateOwner"));
        UpdateOwner->resize(450, 240);
        label_2 = new QLabel(UpdateOwner);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 210, 241, 17));
        nameLine = new QLineEdit(UpdateOwner);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(90, 40, 351, 27));
        label = new QLabel(UpdateOwner);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 44, 67, 17));
        addSave = new QPushButton(UpdateOwner);
        addSave->setObjectName(QStringLiteral("addSave"));
        addSave->setGeometry(QRect(280, 200, 161, 27));
        label_3 = new QLabel(UpdateOwner);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 67, 17));
        idOwner = new QLabel(UpdateOwner);
        idOwner->setObjectName(QStringLiteral("idOwner"));
        idOwner->setGeometry(QRect(90, 10, 67, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        idOwner->setFont(font);
        label_4 = new QLabel(UpdateOwner);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 156, 67, 17));
        birdsOwner = new QLabel(UpdateOwner);
        birdsOwner->setObjectName(QStringLiteral("birdsOwner"));
        birdsOwner->setGeometry(QRect(90, 156, 67, 17));
        birdsOwner->setFont(font);
        cpfLine = new QLineEdit(UpdateOwner);
        cpfLine->setObjectName(QStringLiteral("cpfLine"));
        cpfLine->setGeometry(QRect(90, 77, 351, 27));
        label_5 = new QLabel(UpdateOwner);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 81, 67, 17));
        ctfLine = new QLineEdit(UpdateOwner);
        ctfLine->setObjectName(QStringLiteral("ctfLine"));
        ctfLine->setGeometry(QRect(90, 114, 351, 27));
        label_6 = new QLabel(UpdateOwner);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 118, 67, 17));

        retranslateUi(UpdateOwner);

        QMetaObject::connectSlotsByName(UpdateOwner);
    } // setupUi

    void retranslateUi(QDialog *UpdateOwner)
    {
        UpdateOwner->setWindowTitle(QApplication::translate("UpdateOwner", "Alterar Dados", 0));
        label_2->setText(QApplication::translate("UpdateOwner", "* Todos os campos s\303\243o obrigat\303\263rios", 0));
        label->setText(QApplication::translate("UpdateOwner", "Nome:", 0));
        addSave->setText(QApplication::translate("UpdateOwner", "Salvar", 0));
        label_3->setText(QApplication::translate("UpdateOwner", "Id:", 0));
        idOwner->setText(QApplication::translate("UpdateOwner", "0000", 0));
        label_4->setText(QApplication::translate("UpdateOwner", "P\303\241ssaros:", 0));
        birdsOwner->setText(QApplication::translate("UpdateOwner", "; ; ; ;", 0));
        label_5->setText(QApplication::translate("UpdateOwner", "CPF:", 0));
        label_6->setText(QApplication::translate("UpdateOwner", "CTF:", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateOwner: public Ui_UpdateOwner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEOWNER_H
