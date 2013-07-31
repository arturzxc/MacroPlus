/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 7. Nov 04:12:53 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QWidget *centralwidget;
    QLineEdit *keys;
    QLineEdit *key;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pause;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 170);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        keys = new QLineEdit(centralwidget);
        keys->setObjectName(QString::fromUtf8("keys"));
        keys->setGeometry(QRect(150, 50, 171, 20));
        key = new QLineEdit(centralwidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setGeometry(QRect(30, 50, 51, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 30, 161, 16));
        pause = new QPushButton(centralwidget);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(30, 100, 301, 23));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Macro+", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit_2->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Listen to this key", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Press these keys", 0, QApplication::UnicodeUTF8));
        pause->setText(QApplication::translate("MainWindow", "Pause / Resume", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
