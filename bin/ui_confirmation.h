/********************************************************************************
** Form generated from reading UI file 'confirmation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATION_H
#define UI_CONFIRMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Confirmation
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *message;

    void setupUi(QDialog *Confirmation)
    {
        if (Confirmation->objectName().isEmpty())
            Confirmation->setObjectName(QStringLiteral("Confirmation"));
        Confirmation->resize(380, 160);
        buttonBox = new QDialogButtonBox(Confirmation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 120, 361, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        message = new QLabel(Confirmation);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(20, 20, 341, 81));
        message->setLayoutDirection(Qt::RightToLeft);
        message->setTextFormat(Qt::AutoText);
        message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message->setWordWrap(true);

        retranslateUi(Confirmation);
        QObject::connect(buttonBox, SIGNAL(rejected()), Confirmation, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), Confirmation, SLOT(accept()));

        QMetaObject::connectSlotsByName(Confirmation);
    } // setupUi

    void retranslateUi(QDialog *Confirmation)
    {
        Confirmation->setWindowTitle(QApplication::translate("Confirmation", "Confirma\303\247ao", 0));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Confirmation: public Ui_Confirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATION_H
