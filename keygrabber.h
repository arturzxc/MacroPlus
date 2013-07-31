#ifndef KEYGRABBER_H
#define KEYGRABBER_H
#include <QThread>
#include <iostream>
#include <windows.h>
#include <QChar>
#include "macrofactory.h"

class KeyGrabber:public QThread
{
public:
    KeyGrabber(int deley, void (*_callBackFunct)(QChar c));
private:
    MacroFactory* pmf;
    void (*_exec)(QChar c);
    int deley;
    void run();
    void parseKeyboard();
};

#endif // KEYGRABBER_H
