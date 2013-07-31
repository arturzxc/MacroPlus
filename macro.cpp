#include "macro.h"

Macro::Macro(QChar trigger,QString keys, KeyPresser *pKp)
{
    delay=20;//initial defference between keystrokes.
    this->pKp = pKp;
    this->trigger=trigger;
    this->keys=keys;    
    this->isExec=false;
}

QString Macro::getKeys()
{
    return keys;
}

QChar Macro::getTrigger()
{
    return trigger;
}

void Macro::setTrigger(QChar trigger)
{
    this->trigger=trigger;
}

void Macro::setKeys(QString keys)
{
    this->keys=keys;
}

void Macro::executeKeys()
{
    pKp->typeString(delay, keys);
}

void Macro::setDelay(int n)
{
    delay = n;
}



