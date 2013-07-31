#include "macrofactory.h"

QList<Macro*> MacroFactory::macros;

MacroFactory::MacroFactory()
{
    pKp = new KeyPresser();
}

void MacroFactory::addMacro(QChar trigger, QString str)
{
    if(str!="")
    {
        macros.push_back(new Macro(trigger,str,pKp));
    }
}

bool MacroFactory::deleteMacro(QChar trigger)
{
    int i=0;

    for(;i<macros.length();i++)
    {

        if(macros.at(i)->getTrigger()==trigger)
        {
            macros.removeAt(i);
            return true;
        }
    }
    return false;

}

QList<Macro *> MacroFactory::getMacros()
{
    return macros;
}

void MacroFactory::executeMacro(QChar c)
{

    for(int i=0;i<macros.length(); i++)
    {

        Macro *pM = macros.at(i);
        if(pM->getTrigger()==c)
        {
            pM->executeKeys();
            return;
        }

    }

    qDebug()<<"No macro for : "<<c;
}
