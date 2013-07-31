#ifndef MACROFACTORY_H
#define MACROFACTORY_H
#include <QString>
#include <QChar>
#include <QList>
#include <QtDebug>
#include "keypresser.h"
#include "macro.h"

class MacroFactory
{
public:
    MacroFactory();
    void addMacro(QChar trigger, QString str);
    bool deleteMacro(QChar trigger);
    QList<Macro*> getMacros();
    static void executeMacro(QChar c);
private:        
    static QList<Macro*> macros;
    KeyPresser *pKp; //macros dependancy.
};

#endif // MACROFACTORY_H
