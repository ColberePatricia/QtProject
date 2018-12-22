/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    MyLabel *lblMouse;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *lblMouseCurrentPos;
    QLabel *lblMouseCurrentEv;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        lblMouse = new MyLabel(Dialog);
        lblMouse->setObjectName(QStringLiteral("lblMouse"));
        lblMouse->setGeometry(QRect(10, 20, 141, 121));
        lblMouse->setFrameShape(QFrame::Box);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(210, 20, 151, 211));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 91, 20));
        lblMouseCurrentPos = new QLabel(groupBox);
        lblMouseCurrentPos->setObjectName(QStringLiteral("lblMouseCurrentPos"));
        lblMouseCurrentPos->setGeometry(QRect(10, 70, 131, 31));
        lblMouseCurrentPos->setFrameShape(QFrame::Box);
        lblMouseCurrentPos->setFrameShadow(QFrame::Raised);
        lblMouseCurrentEv = new QLabel(groupBox);
        lblMouseCurrentEv->setObjectName(QStringLiteral("lblMouseCurrentEv"));
        lblMouseCurrentEv->setGeometry(QRect(10, 120, 111, 21));
        lblMouseCurrentEv->setFrameShape(QFrame::Box);
        lblMouseCurrentEv->setFrameShadow(QFrame::Raised);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        lblMouse->setText(QApplication::translate("Dialog", "MouseArea", 0));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("Dialog", "Mouse Events", 0));
        lblMouseCurrentPos->setText(QApplication::translate("Dialog", "X=0, Y=0", 0));
        lblMouseCurrentEv->setText(QApplication::translate("Dialog", "Mouse Current Ev", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
