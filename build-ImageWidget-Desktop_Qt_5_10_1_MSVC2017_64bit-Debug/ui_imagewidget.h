/********************************************************************************
** Form generated from reading UI file 'imagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEWIDGET_H
#define UI_IMAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageWidget
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageWidget)
    {
        if (ImageWidget->objectName().isEmpty())
            ImageWidget->setObjectName(QStringLiteral("ImageWidget"));
        ImageWidget->resize(467, 644);
        centralWidget = new QWidget(ImageWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 471, 581));
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 530, 93, 28));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 170, 255);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 530, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 170, 255);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 530, 93, 28));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 170, 255);"));
        ImageWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 467, 26));
        ImageWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageWidget->setStatusBar(statusBar);

        retranslateUi(ImageWidget);

        QMetaObject::connectSlotsByName(ImageWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ImageWidget)
    {
        ImageWidget->setWindowTitle(QApplication::translate("ImageWidget", "ImageWidget", nullptr));
        label->setText(QApplication::translate("ImageWidget", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("ImageWidget", "Close", nullptr));
        pushButton_2->setText(QApplication::translate("ImageWidget", "||", nullptr));
        pushButton_3->setText(QApplication::translate("ImageWidget", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageWidget: public Ui_ImageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEWIDGET_H
