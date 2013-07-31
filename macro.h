#ifndef MACRO_H
#define MACRO_H
#include <QChar>
#include <QString>
#include <QThread>
#include <QtDebug>
#include <windows.h>
#include "keypresser.h"

class Macro
{
public:
    Macro(QChar,QString, KeyPresser *pKp);
    QChar getTrigger();
    QString getKeys();
    void setTrigger(QChar trigger);
    void setKeys(QString keys);
    void executeKeys();
    void setDelay(int n);

private:
    KeyPresser *pKp;
    QChar trigger;
    QString keys;
    int delay;
    bool isExec;
};

#endif // MACRO_H
