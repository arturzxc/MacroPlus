#ifndef SYSTEM_H
#define SYSTEM_H
#include "keygrabber.h"
#include "macrofactory.h"
#include "keypresser.h"

class Core
{
public:
    Core();
    void init();
    MacroFactory* getMacroFactory();
private:
    MacroFactory *pMf;
    KeyGrabber *pKg;
    KeyPresser *pKp;
};

#endif // SYSTEM_H
