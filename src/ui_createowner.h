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

    void setupUi(QDialog *CreateOwner)
    {
        if (CreateOwner->objectName().isEmpty())
            CreateOwner->setObjectName(QStringLiteral("CreateOwner"));
        CreateOwner->resize(450, 260);
        label = new QLabel(CreateOwner);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 67, 17));
        nameLine = new QLineEdit(CreateOwner);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(70, 16, 371, 27));
        addBtn = new QPushButton(CreateOwner);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(280, 220, 161, 27));

        retranslateUi(CreateOwner);

        QMetaObject::connectSlotsByName(CreateOwner);
    } // setupUi

    void retranslateUi(QDialog *CreateOwner)
    {
        CreateOwner->setWindowTitle(QApplication::translate("CreateOwner", "Novo Propriet\303\241rio", 0));
        label->setText(QApplication::translate("CreateOwner", "Nome:", 0));
        addBtn->setText(QApplication::translate("CreateOwner", "Adicionar", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateOwner: public Ui_CreateOwner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEOWNER_H
