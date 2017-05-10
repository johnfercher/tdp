/********************************************************************************
** Form generated from reading UI file 'createowner.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEOWNER_H
#define UI_CREATEOWNER_H

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

class Ui_CreateOwner
{
public:
    QLabel *label;
    QLineEdit *nameLine;
    QPushButton *addBtn;
    QLabel *label_2;
    QLineEdit *cpfLine;
    QLabel *label_3;
    QLineEdit *ctfLine;
    QLabel *label_4;

    void setupUi(QDialog *CreateOwner)
    {
        if (CreateOwner->objectName().isEmpty())
            CreateOwner->setObjectName(QStringLiteral("CreateOwner"));
        CreateOwner->resize(450, 190);
        label = new QLabel(CreateOwner);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 67, 17));
        nameLine = new QLineEdit(CreateOwner);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(70, 16, 371, 27));
        addBtn = new QPushButton(CreateOwner);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(280, 150, 161, 27));
        label_2 = new QLabel(CreateOwner);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 160, 241, 17));
        cpfLine = new QLineEdit(CreateOwner);
        cpfLine->setObjectName(QStringLiteral("cpfLine"));
        cpfLine->setGeometry(QRect(70, 56, 371, 27));
        label_3 = new QLabel(CreateOwner);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 67, 17));
        ctfLine = new QLineEdit(CreateOwner);
        ctfLine->setObjectName(QStringLiteral("ctfLine"));
        ctfLine->setGeometry(QRect(70, 96, 371, 27));
        label_4 = new QLabel(CreateOwner);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 67, 17));

        retranslateUi(CreateOwner);

        QMetaObject::connectSlotsByName(CreateOwner);
    } // setupUi

    void retranslateUi(QDialog *CreateOwner)
    {
        CreateOwner->setWindowTitle(QApplication::translate("CreateOwner", "Novo Propriet\303\241rio", 0));
        label->setText(QApplication::translate("CreateOwner", "Nome:", 0));
        addBtn->setText(QApplication::translate("CreateOwner", "Adicionar", 0));
        label_2->setText(QApplication::translate("CreateOwner", "* Todos os campos s\303\243o obrigat\303\263rios", 0));
        label_3->setText(QApplication::translate("CreateOwner", "CPF:", 0));
        label_4->setText(QApplication::translate("CreateOwner", "CTF:", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateOwner: public Ui_CreateOwner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEOWNER_H
