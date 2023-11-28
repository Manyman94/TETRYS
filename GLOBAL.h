#pragma once
#include <iostream>
#include <Windows.h>    
#include <string>
#include <conio.h>
#include <stdio.h>
#define AR 72   //definir arriba
#define AB 80   //definir abajo
#define IZ 75   //definir izquierda
#define DE 77   //definir derecha
#define SP 32   //definir espacio
#define CG 67   //definir C
#define CC 99   //definir c
#define VG 86   //definir V
#define VC 118   //definir v
#define EN 13   

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BOMB  "\033[1;33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define ORANGE  "\033[38;5;208m"
#define GRAY    "\033[90m"
using namespace std;
void gotoxy(int x, int y) {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

void off() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    // Obtiene la información actual del cursor
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = false; // Oculta el cursor
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}