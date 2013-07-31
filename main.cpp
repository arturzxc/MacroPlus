#include <QApplication>
#include "keygrabber.h"
#include "macro.h"
#include <QtDebug>
#include "core.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);
    MainWindow *window = new MainWindow();  
    window->show();
    return app.exec();
}
