#pragma once

void seleccion(int& OP, int& v, int& c, string TAC[22][20]) {
    TETRIS P;
    TABLERO O;
    string d;


    d = char(219);

    if (OP == 0) { gotoxy(1, 20);cout << " "; }
    if (OP == 1) { gotoxy(1, 21);cout << " "; }
    if (_kbhit()) {
        char tecla = _getch();

        if (OP == 0) {
            if (tecla == DE && v < 15) {
                v++;
            }
            else
                if (tecla == IZ && v > 1) {
                    v--;
                }
                else
                    if (tecla == AB || tecla == SP || tecla == EN) {
                        OP = 1;
                    }
        }
        else
            if (OP == 1) {
                if (tecla == DE && c < 9) {
                    c++;
                }
                if (tecla == IZ && c > 1) {
                    c--;
                }
                if (tecla == AR) {
                    OP = 0;
                }
                if (tecla == AB || tecla == SP || tecla == EN) {
                    OP = 2;
                }
            }

    }
    gotoxy(14, 20);cout << RESET << "   ";
    gotoxy(10, 21);cout << "       ";
    gotoxy(1, 20);cout << " ";
    gotoxy(1, 21);cout << " ";
    if (OP == 0) {
        gotoxy(1, 20);cout << char(254);
    }if (OP == 1) { gotoxy(1, 21);cout << char(254); }
    gotoxy(10, 20);cout << v;
    gotoxy(10, 21);
    switch (c) {
    case 1: cout << CYAN << "CYAN"; break;
    case 2: cout << RED << "RED"; break;
    case 3: cout << GREEN << "GREEN"; break;
    case 4: cout << YELLOW << "YELLOW"; break;
    case 5: cout << BLUE << "BLUE"; break;
    case 6: cout << BOMB << "NEON"; break;
    case 7: cout << MAGENTA << "MAGENTA"; break;
    case 8: cout << ORANGE << "ORANGE"; break;
    case 9: cout << GRAY << "GRAY"; break;
    }

}