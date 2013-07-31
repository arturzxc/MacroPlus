#include "core.h"

Core::Core()
{
}

void Core::init()
{
    pMf = new MacroFactory();
    pKg = new KeyGrabber(5, &MacroFactory::executeMacro);


    pKg->start();
}
MacroFactory* Core::getMacroFactory()
{
    return pMf;
}



