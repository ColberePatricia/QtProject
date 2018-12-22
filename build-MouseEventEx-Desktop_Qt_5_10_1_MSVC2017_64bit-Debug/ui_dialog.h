/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    MyLabel *lblMouse;
    QGroupBox *groupBox;
    QLabel *lblMouseEvents;
    QLabel *lblMouseCurrentPos;
    QLabel *lblMouseCurrentEv;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        lblMouse = new MyLabel(Dialog);
        lblMouse->setObjectName(QStringLiteral("lblMouse"));
        lblMouse->setGeometry(QRect(20, 20, 141, 241));
        lblMouse->setMouseTracking(true);
        lblMouse->setFrameShape(QFrame::Box);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(190, 10, 161, 251));
        lblMouseEvents = new QLabel(groupBox);
        lblMouseEvents->setObjectName(QStringLiteral("lblMouseEvents"));
        lblMouseEvents->setGeometry(QRect(10, 10, 91, 16));
        lblMouseCurrentPos = new QLabel(groupBox);
        lblMouseCurrentPos->setObjectName(QStringLiteral("lblMouseCurrentPos"));
        lblMouseCurrentPos->setGeometry(QRect(10, 30, 131, 41));
        lblMouseCurrentPos->setFrameShape(QFrame::Box);
        lblMouseCurrentPos->setFrameShadow(QFrame::Raised);
        lblMouseCurrentEv = new QLabel(Dialog);
        lblMouseCurrentEv->setObjectName(QStringLiteral("lblMouseCurrentEv"));
        lblMouseCurrentEv->setGeometry(QRect(200, 135, 131, 41));
        lblMouseCurrentEv->setFrameShape(QFrame::Box);
        lblMouseCurrentEv->setFrameShadow(QFrame::Raised);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        lblMouse->setText(QApplication::translate("Dialog", "Mouse Area", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        lblMouseEvents->setText(QApplication::translate("Dialog", "Mouse Events", nullptr));
        lblMouseCurrentPos->setText(QApplication::translate("Dialog", "X=0, Y=0", nullptr));
        lblMouseCurrentEv->setText(QApplication::translate("Dialog", "Mouse Current Event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
