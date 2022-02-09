#include <iostream>
#include "TextScreen.h"
#include "Player.h"
#include <crtdbg.h>

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    TextScreen NewScreen(5, 5, "ㅁ");
    Player NewPlayer(&NewScreen, "★");
    NewScreen.SettingScreen();

    while (true)
    {
        NewScreen.SettingScreen();
        NewPlayer.Render();
        NewScreen.PrintScreen();
        NewPlayer.Update();
    }
}
