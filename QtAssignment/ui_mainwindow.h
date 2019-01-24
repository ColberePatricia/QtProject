/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRoty;
    QAction *actionRotx;
    QAction *actionLine_rotation;
    QAction *actionView_position;
    QAction *actionDefault_position;
    QAction *actionDefault_rotation;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuRotx;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionRoty = new QAction(MainWindow);
        actionRoty->setObjectName(QStringLiteral("actionRoty"));
        actionRotx = new QAction(MainWindow);
        actionRotx->setObjectName(QStringLiteral("actionRotx"));
        actionLine_rotation = new QAction(MainWindow);
        actionLine_rotation->setObjectName(QStringLiteral("actionLine_rotation"));
        actionView_position = new QAction(MainWindow);
        actionView_position->setObjectName(QStringLiteral("actionView_position"));
        actionDefault_position = new QAction(MainWindow);
        actionDefault_position->setObjectName(QStringLiteral("actionDefault_position"));
        actionDefault_rotation = new QAction(MainWindow);
        actionDefault_rotation->setObjectName(QStringLiteral("actionDefault_rotation"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menuRotx = new QMenu(menuBar);
        menuRotx->setObjectName(QStringLiteral("menuRotx"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuRotx->menuAction());
        menuRotx->addAction(actionLine_rotation);
        menuRotx->addAction(actionView_position);
        menuRotx->addAction(actionDefault_position);
        menuRotx->addAction(actionDefault_rotation);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRoty->setText(QApplication::translate("MainWindow", "Roty45", nullptr));
        actionRotx->setText(QApplication::translate("MainWindow", "Rotx45", nullptr));
        actionLine_rotation->setText(QApplication::translate("MainWindow", "Line rotation", nullptr));
        actionView_position->setText(QApplication::translate("MainWindow", "View position", nullptr));
        actionDefault_position->setText(QApplication::translate("MainWindow", "Default position", nullptr));
        actionDefault_rotation->setText(QApplication::translate("MainWindow", "Default rotation", nullptr));
        menuRotx->setTitle(QApplication::translate("MainWindow", "Rotation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
