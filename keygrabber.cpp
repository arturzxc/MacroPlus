#include "keygrabber.h"

KeyGrabber::KeyGrabber(int deley, void (*_callBackFunct)(QChar c))
{
    this->_exec=_callBackFunct;
    this->pmf=pmf;
    this->deley=deley;
}

void KeyGrabber::run()
{
    parseKeyboard();
}

void KeyGrabber::parseKeyboard()
{
    bool pause = false;
    for(;;)
    {
        Sleep(this->deley);
        if(GetAsyncKeyState(VK_F8) < 0)
        {
            pause = true;
            std::cout<<"Paused"<<std::endl;
        }
        if(GetAsyncKeyState(VK_F7) < 0)
        {
            pause = false;
            std::cout<<"Resumed"<<std::endl;
        }
        if(!pause){
            for(char c='a'; c<='z';c++)
            {
                if(GetAsyncKeyState(VkKeyScan(c))<0)
                {
                    _exec(c);
                }
            }
            for(int i='0'; i<='9';i++)
            {
                if(GetAsyncKeyState(VkKeyScan(i))<0)
                {
                    _exec(i);
                }
            }


            for(int i=VK_NUMPAD0; i<=VK_NUMPAD9;i++){
                if(GetAsyncKeyState(i)<0)
                {
                    qDebug()<<"dedected num key"<<endl;
                    _exec(i);
                }
            }

        }
    }
}


