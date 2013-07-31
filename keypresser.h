#ifndef KEYPRESSER_H
#define KEYPRESSER_H
#include <windows.h>
#include <QString>
#include <QChar>
#include <iostream>
#include <QtDebug>

class KeyPresser
{
public:
    KeyPresser();
    void typeString(int delay, QString str);
};

#endif // KEYPRESSER_H
