#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    core = new Core();
    core->init();

    keyToDelete=new QLabel("Trigger key");
    keyToDeleteT=new QLineEdit;
    deleteBtn=new QPushButton("Delete Trigger");
    key = new QLabel("Listen for key");
    keys = new QLabel("Press Keys");
    keyT = new QLineEdit();
    keysT = new QLineEdit();
    allMacros = new QTextEdit();
    add = new QPushButton("Add Macro");
    pause = new QPushButton("Pause/resume   (F8/F7)");
    mainPanel = new QWidget();
    top = new QWidget();
    bottom = new QWidget();
    bottom2 = new QWidget();
    left = new QWidget();
    right = new QWidget();
    mainLayout = new QVBoxLayout;
    vLayoutTop = new QHBoxLayout;
    vLayoutBottom = new QVBoxLayout;
    hLayoutLeft = new QVBoxLayout;
    hLayoutRight = new QVBoxLayout;
    hLayoutDelete=new QHBoxLayout;



    hLayoutLeft->addWidget(key);
    hLayoutLeft->addWidget(keys);

    hLayoutRight->addWidget(keyT);
    hLayoutRight->addWidget(keysT);

    vLayoutTop->addWidget(left);
    vLayoutTop->addWidget(right);

    vLayoutBottom->addWidget(add);
    vLayoutBottom->addWidget(pause);
    vLayoutBottom->addWidget(allMacros);

    hLayoutDelete->addWidget(keyToDelete);
    hLayoutDelete->addWidget(keyToDeleteT);
    hLayoutDelete->addWidget(deleteBtn);

    mainLayout->addWidget(top);
    mainLayout->addWidget(bottom);
    mainLayout->addWidget(bottom2);

    left->setLayout(hLayoutLeft);
    right->setLayout(hLayoutRight);
    top->setLayout(vLayoutTop);
    bottom->setLayout(vLayoutBottom);
    bottom2->setLayout(hLayoutDelete);
    mainPanel->setLayout(mainLayout);

    this->setCentralWidget(mainPanel);

    QObject::connect(add,SIGNAL(clicked()),this, SLOT(addMacro()) );
    QObject::connect(deleteBtn,SIGNAL(clicked()),this, SLOT(deleteMacro()) );
}

void MainWindow::deleteMacro()
{
    QChar c = keyToDeleteT->text().at(0);
    core->getMacroFactory()->deleteMacro(c);
    QString temp="";
    for(int i=0;i<core->getMacroFactory()->getMacros().size();i++)
    {
        QString temp1 = core->getMacroFactory()->getMacros().at(i)->getTrigger();
        QString temp2 = core->getMacroFactory()->getMacros().at(i)->getKeys();
        temp.append(temp1.append("  ")+temp2.append("\n"));
    }


    allMacros->setText(temp);
}

void MainWindow::addMacro()
{
    QChar c =  keyT->text().at(0);
    QString s = keysT->text();

    core->getMacroFactory()->addMacro(c,s);
    QString temp="";
    for(int i=0;i<core->getMacroFactory()->getMacros().size();i++)
    {
        QString temp1 = core->getMacroFactory()->getMacros().at(i)->getTrigger();
        QString temp2 = core->getMacroFactory()->getMacros().at(i)->getKeys();
        temp.append(temp1.append("  ")+temp2.append("\n"));
    }


    allMacros->setText(temp);
}
