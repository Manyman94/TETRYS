#include "GLOBAL.h"
#include "TABLERO.h"
#include "TETRIS.h"
#include "SEL.h"
 
int main()
{
    off();
    srand(time(nullptr));
    TETRIS P, PG, PS, PSS, PSSS;
    TABLERO PANTALLA;
    string b;
    b = char(219);
    string TAB[22][13], TAC[22][20];
    int x = 5, y = 2, R = 0, T = 0, time = 0, xa = 14, v = 1, color = 1, OP = 0;

    for (int f = 0;f < 22;f++) {
        for (int c = 0;c < 19;c++) {
            TAC[f][c] = "0";
        }
    }

    PANTALLA.plogo(b);
    while (OP <= 1) {
        seleccion(OP, v, color, TAC);
        Sleep(20);
    };
   
    PANTALLA.clean();
    PANTALLA.setv(16000 - (v * 1000));   
    while (TAC[2][10] == "0") {
        x = rand() % 19;
        y = 2;
        R = rand() % 4;
        T = rand() % 7 + 1;
        P.pt(b, TAC, T, R, x, y);

    }
    x = 5; y = 2;
    PANTALLA.clean();
    PANTALLA.pcontorno(color);
    PANTALLA.loadtablero(TAB);
    PANTALLA.ptablero(TAB);

    P.ppieza(b, T, R, x, y, false);
    P.setcm(0);
    PS.sT();
    PSS.sT();
    PSSS.sT();
    P.pnp(b, PS, PSS, PSSS);
    while (!PANTALLA.getGO()) {

        P.mpieza(TAB, T, R, x, y, PG, PS, PSS, PSSS, PANTALLA);

        if (time < PANTALLA.getv()) {
            time++;
        }
        else {
            time = 0;

            gotoxy(13, 17);cout << "P:" << PANTALLA.getpuntos();
            gotoxy(13, 16);cout << "V:" << 16-(PANTALLA.getv()/1000);



            P.ppieza(" ", T, R, x, y, false);
            P.cpieza(TAB, T, R, x, y);
            P.ppieza(b, T, R, x, y, false);
            gotoxy(13, 15);cout << GRAY << b << b << b << b << b << b;
            gotoxy(13, 15); int i = PANTALLA.getpwc();
            if (i >= 24)cout << BOMB << b << b << b << b << b << b;
            else if (i >= 19)cout << RED << b << b << b << b << b;
            else if (i >= 14)cout << ORANGE << b << b << b << b;
            else if (i >= 9)cout << YELLOW << b << b << b;
            else if (i >= 5)cout << GREEN << b << b;
            else if (i >= 4)cout << CYAN << b;
            cout << RESET;
            if (P.pm(TAB, T, R, x, y, 3) == 0) {
                P.am();
                P.acm();


                if (P.pm(TAB, T, R, x, y, 3) == 0 && P.getmov() > 3) {
                    P.setmov(0);
                    P.setcm(0);

                    PANTALLA.stablero(TAB, T, R, x, y);
                    R = 0;
                    x = 5;
                    y = 2;

                    P.pnp(" ", PS, PSS, PSSS);
                    T = PS.getT();
                    PS.setT(PSS.getT());
                    PSS.setT(PSSS.getT());
                    PSSS.sT();
                    P.pnp(b, PS, PSS, PSSS);

                    PANTALLA.lineas(TAB, v);
                    PANTALLA.ptablero(TAB);
                    P.setsave(true);

                    if (P.pm(TAB, T, R, x, y, 3) == 0) {
                        PANTALLA.loadtablero(TAB);
                        PANTALLA.ptablero(TAB);
                        gotoxy(13, 18);cout << "V:  ";
                        PANTALLA.setv(15000);
                        PANTALLA.setpuntos(0);
                        gotoxy(13, 17);cout << "  ";
                        gotoxy(13, 18);cout << "  ";
                        if (PG.getT() == 6 || PG.getT() == 7 || PG.getT() == 2) {
                            PG.ppieza(" ", PG.getT(), 0, 15, 2, false);
                        }
                        else { PG.ppieza(" ", PG.getT(), 0, 15, 1, false); }
                        PG.setT(0);
                        P.sT();
                        PS.sT();
                        PSS.sT();
                        PSSS.sT();
                        OP = 0;
                        PANTALLA.clean();
                        PANTALLA.plogo(b);
                        while (OP <= 1) {
                            seleccion(OP, v, color, TAC);
                            Sleep(20);
                        };

                        PANTALLA.clean();
                        PANTALLA.setv(16000 - (v * 1000));
                        while (TAC[2][10] == "0") {
                            x = rand() % 19;
                            y = 2;
                            R = rand() % 4;
                            T = rand() % 7 + 1;
                            P.pt(b, TAC, T, R, x, y);

                        }
                        x = 5; y = 2;
                        PANTALLA.pcontorno(color);
                    }
                }
            }
            else { P.setmov(0); }
        }
    }
}