/********************************************************************************
** Form generated from reading UI file 'dialogviewposition.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVIEWPOSITION_H
#define UI_DIALOGVIEWPOSITION_H

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

class Ui_DialogViewPosition
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QLabel *label_6;
    QLabel *label_2;
    QTextEdit *textEdit_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QTextEdit *textEdit_6;

    void setupUi(QDialog *DialogViewPosition)
    {
        if (DialogViewPosition->objectName().isEmpty())
            DialogViewPosition->setObjectName(QStringLiteral("DialogViewPosition"));
        DialogViewPosition->resize(628, 393);
        buttonBox = new QDialogButtonBox(DialogViewPosition);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(DialogViewPosition);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 200, 55, 16));
        textEdit_2 = new QTextEdit(DialogViewPosition);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(160, 130, 111, 31));
        textEdit_4 = new QTextEdit(DialogViewPosition);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(160, 190, 111, 31));
        textEdit = new QTextEdit(DialogViewPosition);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(160, 70, 111, 31));
        textEdit_3 = new QTextEdit(DialogViewPosition);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(420, 70, 111, 31));
        label_6 = new QLabel(DialogViewPosition);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 80, 61, 16));
        label_2 = new QLabel(DialogViewPosition);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 55, 16));
        textEdit_5 = new QTextEdit(DialogViewPosition);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(420, 130, 111, 31));
        label = new QLabel(DialogViewPosition);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 461, 41));
        label_3 = new QLabel(DialogViewPosition);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 55, 16));
        label_5 = new QLabel(DialogViewPosition);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 140, 61, 16));
        label_7 = new QLabel(DialogViewPosition);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 200, 71, 16));
        textEdit_6 = new QTextEdit(DialogViewPosition);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(420, 190, 111, 31));

        retranslateUi(DialogViewPosition);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogViewPosition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogViewPosition, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogViewPosition);
    } // setupUi

    void retranslateUi(QDialog *DialogViewPosition)
    {
        DialogViewPosition->setWindowTitle(QApplication::translate("DialogViewPosition", "Dialog", nullptr));
        label_4->setText(QApplication::translate("DialogViewPosition", "eye3", nullptr));
        label_6->setText(QApplication::translate("DialogViewPosition", "direction1", nullptr));
        label_2->setText(QApplication::translate("DialogViewPosition", "eye1", nullptr));
        label->setText(QApplication::translate("DialogViewPosition", "Enter the eye position and the point you are looking at:", nullptr));
        label_3->setText(QApplication::translate("DialogViewPosition", "eye2", nullptr));
        label_5->setText(QApplication::translate("DialogViewPosition", "direction2", nullptr));
        label_7->setText(QApplication::translate("DialogViewPosition", "direction3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogViewPosition: public Ui_DialogViewPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVIEWPOSITION_H
