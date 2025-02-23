#include "snake.h"
#include "game.h"
#include "utils.h"
#include "art.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, int nCmdShow) {
    bool pause = false;
 
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);

    const int consoleWidth = 4000;//1100
    const int consoleHeight = 2000;//576
    disableResizeAndMaximize(); // Self explanatory
    setConsoleFontSize(7);
    configureConsoleForGame(); // Puts console in Raw mode and disables quick edit.
    windowManagement(450, 200, consoleHeight, consoleWidth);//Manages console position and size
    printf("\033[40m\033[2J");//Cleans the console and sets the background to black
  
    SetConsoleTitleA("SNAKE");
    enableAnsiEscapeCodes();
    
    
    while (1)
    {

        ///////////// VARIABLES INITILAZATION
        int points = 0;
        int snakeSize = 0;
        int snakeDirection = 0;
        int ticks = 0;
        int gameTalkerFase = 0;
        int talkerFaseBuffer = 0;
        int gameTalkerMap = 0;
        int internalTimer = 0;
        int randText = rand() % 3;
        int scroll = 0;
        int registryAmount = 0;

        //Windows size, everything will be based on it

        int FontSizeX = 8;
        int FontSizeY = 16;

        //A position buffer that will go behind the snakes head
        COORD pos = GetMouseConsolePosition();
        int x_buffer = 0;
        int y_buffer = 0;

        

        //Starts random seed
        initializeRandomSeed();

        printf("\033[?25l");//Hides cursor
        printf("\033[H");//Positions the cursor at the start of the console matrix
        printf("\033[40m\033[2J");//Cleans the console and sets the background to black
        printf("%s", ANSI_COLOR_DARK_PINK);

        while (1)
        {
          get_console_font_size(&FontSizeY, &FontSizeX);
          ConsoleCursor(&y_buffer, &x_buffer);
            
            
        }
    }
    return 0;
}
