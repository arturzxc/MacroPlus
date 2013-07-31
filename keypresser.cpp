#include "keypresser.h"


KeyPresser::KeyPresser()
{
}

void KeyPresser::typeString(int delay, QString str)
{
    for(int i=0;i<str.length();i++)
    {
        char c = str.at(i).toAscii();//will convert QChar to char

        short vk=VkKeyScan(c); // keycode of char
        if((vk>>8)&1){keybd_event(VK_LSHIFT,0,0,0);} // hold shift if necessary
        keybd_event((unsigned char)vk,0,0,0); // key in
        keybd_event((unsigned char)vk,0,KEYEVENTF_KEYUP,0); // key out
        if((vk>>8)&1){keybd_event(VK_LSHIFT,0,KEYEVENTF_KEYUP,0);} // release shift if necessary

        Sleep(delay);

    }
}

