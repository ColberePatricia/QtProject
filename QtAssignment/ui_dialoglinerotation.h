/********************************************************************************
** Form generated from reading UI file 'dialoglinerotation.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLINEROTATION_H
#define UI_DIALOGLINEROTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogLineRotation
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit;
    QLabel *label_7;
    QTextEdit *textEdit_4;
    QLabel *label_3;
    QLabel *label_6;
    QTextEdit *textEdit_7;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_4;
    QTextEdit *textEdit_6;
    QLabel *label;
    QTextEdit *textEdit_3;
    QLabel *label_5;

    void setupUi(QDialog *DialogLineRotation)
    {
        if (DialogLineRotation->objectName().isEmpty())
            DialogLineRotation->setObjectName(QStringLiteral("DialogLineRotation"));
        DialogLineRotation->resize(668, 436);
        buttonBox = new QDialogButtonBox(DialogLineRotation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit_2 = new QTextEdit(DialogLineRotation);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(180, 130, 111, 31));
        textEdit_5 = new QTextEdit(DialogLineRotation);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(440, 130, 111, 31));
        textEdit = new QTextEdit(DialogLineRotation);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 70, 111, 31));
        label_7 = new QLabel(DialogLineRotation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 200, 55, 16));
        textEdit_4 = new QTextEdit(DialogLineRotation);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(180, 190, 111, 31));
        label_3 = new QLabel(DialogLineRotation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 140, 55, 16));
        label_6 = new QLabel(DialogLineRotation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 80, 55, 16));
        textEdit_7 = new QTextEdit(DialogLineRotation);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(180, 260, 111, 31));
        label_2 = new QLabel(DialogLineRotation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 55, 16));
        label_8 = new QLabel(DialogLineRotation);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 270, 55, 16));
        label_4 = new QLabel(DialogLineRotation);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 200, 55, 16));
        textEdit_6 = new QTextEdit(DialogLineRotation);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(440, 190, 111, 31));
        label = new QLabel(DialogLineRotation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 461, 41));
        textEdit_3 = new QTextEdit(DialogLineRotation);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(440, 70, 111, 31));
        label_5 = new QLabel(DialogLineRotation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 140, 55, 16));

        retranslateUi(DialogLineRotation);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogLineRotation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogLineRotation, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLineRotation);
    } // setupUi

    void retranslateUi(QDialog *DialogLineRotation)
    {
        DialogLineRotation->setWindowTitle(QApplication::translate("DialogLineRotation", "Dialog", nullptr));
        label_7->setText(QApplication::translate("DialogLineRotation", "mu * d3", nullptr));
        label_3->setText(QApplication::translate("DialogLineRotation", "b2", nullptr));
        label_6->setText(QApplication::translate("DialogLineRotation", "mu * d1", nullptr));
        label_2->setText(QApplication::translate("DialogLineRotation", "b1", nullptr));
        label_8->setText(QApplication::translate("DialogLineRotation", "alpha", nullptr));
        label_4->setText(QApplication::translate("DialogLineRotation", "b3", nullptr));
        label->setText(QApplication::translate("DialogLineRotation", "Enter b+mu*d and alpha:", nullptr));
        label_5->setText(QApplication::translate("DialogLineRotation", "mu * d2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLineRotation: public Ui_DialogLineRotation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLINEROTATION_H
