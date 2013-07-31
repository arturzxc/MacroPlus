#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include "core.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    QLabel *key;
    QLabel *keys;
    QLabel *keyToDelete;
    QLineEdit *keyToDeleteT;
    QLineEdit *keyT;
    QLineEdit *keysT;
    QTextEdit *allMacros;
    QPushButton *add;
    QPushButton *pause;
    QPushButton *deleteBtn;
    QWidget *mainPanel;
    QWidget *top;
    QWidget *bottom;
    QWidget *bottom2;
    QWidget *left;
    QWidget *right;
    QVBoxLayout *mainLayout;
    QHBoxLayout *vLayoutTop;
    QVBoxLayout *vLayoutBottom;
    QVBoxLayout *hLayoutLeft;
    QVBoxLayout *hLayoutRight;
    QHBoxLayout *hLayoutDelete;
    Core *core;

signals:
    
public slots:
    void deleteMacro();
    void addMacro();
};

#endif // MAINWINDOW_H
