#pragma once
class TETRIS {
private:
    int T;
    int R;
    int mov;
    int cm;
    bool save;
public:
    TETRIS() {
        R = 0;
        mov = 0;
        cm = 0;
        T = 0;
        save = true;
    };
    void setT(int T_) { T = T_; }
    int getT() { return T; }
    void setmov(int mov_) { mov = mov_; }
    int getmov() { return mov; }
    void setcm(int cm_) { cm = cm_; }
    int getcm() { return cm; }
    void setsave(bool save_) { save = save_; }
    bool getsave() { return save; }

    void am() {
        mov++;
    }
    void acm() {
        cm++;
    }
    void sT() { T = rand() % 7 + 1; }
    void ppieza(string b, int T, int R, int x, int y, bool f) {
        int TR = (T * 10) + R;
        if (!f) {
            switch (T) {
            case 1: cout << CYAN;
                break;
            case 2: cout << YELLOW;
                break;
            case 3: cout << MAGENTA;
                break;
            case 4: cout << ORANGE;
                break;
            case 5: cout << BLUE;
                break;
            case 6: cout << GREEN;
                break;
            case 7: cout << RED;
                break;
            }
        }
        else {
            cout << GRAY;
        }
        switch (TR) {
            {

        case 00: gotoxy(x, y);cout << b; break;
        case 01: gotoxy(x, y);cout << b; break;
        case 02: gotoxy(x, y);cout << b; break;
        case 03: gotoxy(x, y);cout << b << RESET; break;
            }
            {
        case 10: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 2, y);cout << b << RESET;
            break;}
        case 11: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x, y + 2);cout << b << RESET;
            break;}
        case 12: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 2, y);cout << b << RESET;
            break;}
        case 13: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x, y + 2);cout << b << RESET;
            break;}
            }
            {
        case 20: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 21: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 22: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 23: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
            }
            {
        case 30: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x, y + 1);cout << b << RESET;
            break;}
        case 31: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x - 1, y);cout << b << RESET;
            break;}
        case 32: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x, y - 1);cout << b << RESET;
            break;}
        case 33: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x + 1, y);cout << b << RESET;
            break;}
            }
            {
        case 42: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 43: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x + 1, y + 1);cout << b << RESET;
            break;}

        case 40: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y + 1);cout << b << RESET;
            break;}
        case 41: {

            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x - 1, y - 1);cout << b << RESET;
            break;}
            }
            {
        case 53: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 50: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x + 1, y + 1);cout << b << RESET;
            break;}
        case 51: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b;
            gotoxy(x - 1, y + 1);cout << b << RESET;
            break;}
        case 52: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y - 1);cout << b << RESET;
            break;}
            }
            {
        case 60: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 61: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b << RESET;
            break;}
        case 62: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x + 1, y - 1);cout << b << RESET;
            break;}
        case 63: {
            gotoxy(x, y);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y - 1);cout << b;
            gotoxy(x, y + 1);cout << b << RESET;
            break;}

            }

            {
        case 70: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x - 1, y - 1);cout << b << RESET;
            break;}
        case 71: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y + 1);cout << b << RESET;
            break;}
        case 72: {
            gotoxy(x, y);cout << b;
            gotoxy(x + 1, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x - 1, y - 1);cout << b << RESET;
            break;}
        case 73: {
            gotoxy(x, y);cout << b;
            gotoxy(x, y - 1);cout << b;
            gotoxy(x - 1, y);cout << b;
            gotoxy(x - 1, y + 1);cout << b << RESET;
            break;}
            }
        }
    }
    void cpieza(string TAB[22][13], int& T, int& R, int& x, int& y) {
        if (pm(TAB, T, R, x, y, 3) == 1) {
            y++;
        }
    }
    void mpieza(string TAB[22][13], int& T, int& R, int& x, int& y, TETRIS& PG, TETRIS& PS, TETRIS& PSS, TETRIS& PSSS, TABLERO& PANTALLA) {
        if (_kbhit()) {
            string b;
            b = char(219);
            int m = 0;
            char tecla = _getch();
            ppieza(" ", T, R, x, y, false);
            pf(" ", TAB, T, R, x, y);
            if (tecla == IZ) { m = 1; }
            if (tecla == DE) { m = 2; }
            if (tecla == AB) { m = 3; }
            if (tecla == AR) { m = 4; }
            if (tecla == SP) { while (pm(TAB, T, R, x, y, 3) == 1) { y++; }mov = 4; cm = 15; }
            if (tecla == CG || tecla == CC) {
                if (save == true) {
                    save = false;
                    int ta = T;
                    if (PG.getT() != 0) {
                        T = PG.getT();
                    }
                    else {
                        pnp(" ", PS, PSS, PSSS);
                        T = PS.getT();
                        PS.setT(PSS.getT());
                        PSS.setT(PSSS.getT());
                        PSSS.sT();
                        pnp(b, PS, PSS, PSSS);
                    }
                    x = 5;
                    y = 2;
                    
                    if (PG.getT() == 6 || PG.getT() == 7 || PG.getT() == 2) {
                        PG.ppieza(" ", PG.getT(), 0, 15, 2, false);
                    }
                    else { PG.ppieza(" ", PG.getT(), 0, 15, 1, false); }
                    PG.setT(ta);
                    if (PG.getT() == 6 || PG.getT() == 7 || PG.getT() == 2) {
                        PG.ppieza(b, PG.getT(), 0, 15, 2, false);
                    }
                    else { PG.ppieza(b, PG.getT(), 0, 15, 1, false); }


                }
            }
            if (tecla == VG || tecla == VC) {
                if (PANTALLA.getpw() == true) {
                    PANTALLA.setpw(false);
                    PANTALLA.setpwc(0);
                    PANTALLA.pwr(TAB);

                }
            }

            if (pm(TAB, T, R, x, y, m) == 1 && cm < 15) {
                switch (m) {
                case 1: x--; mov = 0;break;
                case 2: x++; mov = 0;break;
                case 3: y++; mov = 0;break;
                case 4: R++; mov = 0;break;
                }
            }
            if (R > 3) { R = 0; }
            pf(b, TAB, T, R, x, y);
            ppieza(b, T, R, x, y, false);


        }

    }

    int pm(string TAB[22][13], int T, int R, int x, int y, int m) {
        int mTR = (m * 100) + (T * 10) + R;
        switch (mTR) {
            {
        case 100: if (TAB[y][x - 1] == "0" && x >= 1) { return 1; }
                else return 0;
        case 200: if (TAB[y][x + 1] == "0" && x <= 10) { return 1; }
                else return 0;
        case 300: if (TAB[y + 1][x] == "0" && y < 20) { return 1; }
                else return 0;
        case 400: if (TAB[y][x] == "0") { return 1; }
                else return 0;
            }
            {
        case 110: if (TAB[y][x - 2] == "0" && x > 2) { return 1; }
                else return 0;
        case 210: if (TAB[y][x + 3] == "0" && x < 8) { return 1; }
                else return 0;
        case 310: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 410: if (TAB[y - 1][x] == "0" && TAB[y + 1][x] == "0" && TAB[y + 2][x] == "0") { return 1; }
                else return 0;

        case 111: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 2][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 211: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 2][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 311: if (y < 18 && TAB[y + 3][x] == "0") { return 1; }
                else return 0;
        case 411: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;

        case 112: if (TAB[y][x - 2] == "0" && x > 2) { return 1; }
                else return 0;
        case 212: if (TAB[y][x + 3] == "0" && x < 8) { return 1; }
                else return 0;
        case 312: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 412: if (TAB[y - 1][x] == "0" && TAB[y + 1][x] == "0" && TAB[y + 2][x] == "0") { return 1; }
                else return 0;

        case 113: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 2][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 213: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 2][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 313: if (y < 18 && TAB[y + 3][x] == "0") { return 1; }
                else return 0;
        case 413: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
            }
            {
        case 120: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 220: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 320: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 420: return 1;
        case 121: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 221: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 321: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 421: return 1;
        case 122: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 222: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 322: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 422: return 1;
        case 123: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 223: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 323: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 423: return 1;
            }
            {
        case 130: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 230: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 330: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 430: if (TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 131: if (x > 1 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 231: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 331: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 431: if (TAB[y][x + 1] == "0") { return 1; }
                else return 0;

        case 132: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 232: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 332: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 432: if (TAB[y + 1][x] == "0") { return 1; }
                else return 0;

        case 133: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 233: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 333: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 433: if (TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 140: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 2] == "0") { return 1; }
                else return 0;
        case 240: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 340: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 440: if (TAB[y + 1][x] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 141: if (x > 1 && TAB[y - 1][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 241: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 341: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 441: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;

        case 142: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 242: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 342: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 442: if (TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 143: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 243: if (x < 9 && TAB[y + 1][x + 2] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 343: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 2][x + 1] == "0") { return 1; }
                else return 0;
        case 443: if (TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 150: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 250: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 350: if (y < 19 && TAB[y + 2][x + 1] == "0" && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 450: if (TAB[y + 1][x] == "0" && TAB[y - 1][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;

        case 151: if (x > 1 && TAB[y + 1][x - 2] == "0" && TAB[y - 1][x - 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 251: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 351: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 2][x - 1] == "0") { return 1; }
                else return 0;
        case 451: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 152: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 252: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 352: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 452: if (TAB[y + 1][x] == "0" && TAB[y - 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;

        case 153: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 253: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 353: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 453: if (TAB[y + 1][x + 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 160: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 260: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 360: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 460: if (TAB[y + 1][x] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 161: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 261: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 361: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 461: if (TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;

        case 162: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 262: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 362: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 462: if (TAB[y + 1][x] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 163: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 263: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 363: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 463: if (TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 170: if (x > 2 && TAB[y - 1][x - 2] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 270: if (x < 9 && TAB[y - 1][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
        case 370: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 470: if (TAB[y + 1][x - 1] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 171: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 271: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 371: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 471: if (TAB[y][x + 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 172: if (x > 2 && TAB[y - 1][x - 2] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 272: if (x < 9 && TAB[y - 1][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
        case 372: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 472: if (TAB[y + 1][x - 1] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 173: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 273: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 373: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 473: if (TAB[y][x + 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

            }

        default: return 1;
        }
    }

    void pf(string b, string TAB[22][13], int T, int R, int x, int y) {
        while (pm(TAB, T, R, x, y, 3) == 1) { y++; };
        ppieza(b, T, R, x, y, true);
    }

    int pm2(string TAB[22][20], int T, int R, int x, int y, int m) {
        int mTR = (m * 100) + (T * 10) + R;
        switch (mTR) {
            {
        case 100: if (TAB[y][x - 1] == "0" && x >= 1) { return 1; }
                else return 0;
        case 200: if (TAB[y][x + 1] == "0" && x <= 10) { return 1; }
                else return 0;
        case 300: if (TAB[y + 1][x] == "0" && y < 20) { return 1; }
                else return 0;
        case 400: if (TAB[y][x] == "0") { return 1; }
                else return 0;
            }
            {
        case 110: if (TAB[y][x - 2] == "0" && x > 2) { return 1; }
                else return 0;
        case 210: if (TAB[y][x + 3] == "0" && x < 8) { return 1; }
                else return 0;
        case 310: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 410: if (TAB[y - 1][x] == "0" && TAB[y + 1][x] == "0" && TAB[y + 2][x] == "0") { return 1; }
                else return 0;

        case 111: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 2][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 211: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 2][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 311: if (y < 18 && TAB[y + 3][x] == "0") { return 1; }
                else return 0;
        case 411: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;

        case 112: if (TAB[y][x - 2] == "0" && x > 2) { return 1; }
                else return 0;
        case 212: if (TAB[y][x + 3] == "0" && x < 8) { return 1; }
                else return 0;
        case 312: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 412: if (TAB[y - 1][x] == "0" && TAB[y + 1][x] == "0" && TAB[y + 2][x] == "0") { return 1; }
                else return 0;

        case 113: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 2][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 213: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y + 2][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 313: if (y < 18 && TAB[y + 3][x] == "0") { return 1; }
                else return 0;
        case 413: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
            }
            {
        case 120: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 220: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 320: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 420: return 1;
        case 121: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 221: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 321: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 421: return 1;
        case 122: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 222: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 322: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 422: return 1;
        case 123: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 223: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 323: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 423: return 1;
            }
            {
        case 130: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 230: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 330: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 430: if (TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 131: if (x > 1 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 231: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 331: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 431: if (TAB[y][x + 1] == "0") { return 1; }
                else return 0;

        case 132: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 232: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 332: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 432: if (TAB[y + 1][x] == "0") { return 1; }
                else return 0;

        case 133: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 233: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 333: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 433: if (TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 140: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 2] == "0") { return 1; }
                else return 0;
        case 240: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 340: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 440: if (TAB[y + 1][x] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 141: if (x > 1 && TAB[y - 1][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 241: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 341: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 441: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;

        case 142: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 242: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x + 2] == "0") { return 1; }
                else return 0;
        case 342: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 442: if (TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 143: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 243: if (x < 9 && TAB[y + 1][x + 2] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 343: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 2][x + 1] == "0") { return 1; }
                else return 0;
        case 443: if (TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 150: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 250: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y + 1][x + 2] == "0") { return 1; }
                else return 0;
        case 350: if (y < 19 && TAB[y + 2][x + 1] == "0" && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 450: if (TAB[y + 1][x] == "0" && TAB[y - 1][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;

        case 151: if (x > 1 && TAB[y + 1][x - 2] == "0" && TAB[y - 1][x - 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 251: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 351: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 2][x - 1] == "0") { return 1; }
                else return 0;
        case 451: if (TAB[y][x - 1] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 152: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 252: if (x < 9 && TAB[y][x + 2] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 352: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y + 1][x + 1] == "0") { return 1; }
                else return 0;
        case 452: if (TAB[y + 1][x] == "0" && TAB[y - 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;

        case 153: if (x > 1 && TAB[y][x - 1] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;
        case 253: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y][x + 1] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 353: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 453: if (TAB[y + 1][x + 1] == "0" && TAB[y][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 160: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 260: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 360: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 460: if (TAB[y + 1][x] == "0" && TAB[y][x - 1] == "0" && TAB[y - 2][x - 1] == "0") { return 1; }
                else return 0;

        case 161: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 261: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 361: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 461: if (TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;

        case 162: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 262: if (x < 9 && TAB[y - 1][x + 2] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
        case 362: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y][x + 1] == "0") { return 1; }
                else return 0;
        case 462: if (TAB[y + 1][x] == "0" && TAB[y][x - 1] == "0" && TAB[y - 2][x - 1] == "0") { return 1; }
                else return 0;

        case 163: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 263: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 363: if (y < 19 && TAB[y + 2][x] == "0" && TAB[y + 1][x - 1] == "0") { return 1; }
                else return 0;
        case 463: if (TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x + 1] == "0") { return 1; }
                else return 0;
            }
            {
        case 170: if (x > 2 && TAB[y - 1][x - 2] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 270: if (x < 9 && TAB[y - 1][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
        case 370: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 470: if (TAB[y - 1][x - 1] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 171: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 271: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 371: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 471: if (TAB[y][x + 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

        case 172: if (x > 2 && TAB[y - 1][x - 2] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 272: if (x < 9 && TAB[y - 1][x + 1] == "0" && TAB[y][x + 2] == "0") { return 1; }
                else return 0;
        case 372: if (y < 20 && TAB[y + 1][x] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y][x - 1] == "0") { return 1; }
                else return 0;
        case 472: if (TAB[y - 1][x - 1] == "0" && TAB[y][x - 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;

        case 173: if (x > 2 && TAB[y][x - 2] == "0" && TAB[y + 1][x - 1] == "0" && TAB[y - 1][x - 2] == "0") { return 1; }
                else return 0;
        case 273: if (x < 10 && TAB[y][x + 1] == "0" && TAB[y + 1][x + 1] == "0" && TAB[y - 1][x] == "0") { return 1; }
                else return 0;
        case 373: if (y < 19 && TAB[y + 2][x - 1] == "0" && TAB[y + 1][x] == "0") { return 1; }
                else return 0;
        case 473: if (TAB[y][x + 1] == "0" && TAB[y - 1][x] == "0" && TAB[y - 1][x - 1] == "0") { return 1; }
                else return 0;

            }

        default: return 1;
        }
    }
    void pt(string b, string TAC[22][20], int T, int R, int x, int& y) {
        TABLERO K;
        while (pm2(TAC, T, R, x, y, 3) == 1) {

            ppieza(" ", T, R, x, y, false);y++; ppieza(b, T, R, x, y, false);Sleep(10);
        };
        K.stablero2(TAC, T, R, x, y);
    }

    void pnp(string b, TETRIS PS, TETRIS PSS, TETRIS PSSS) {
        int xa = 15;

        if (PS.getT() == 6 || PS.getT() == 7 || PS.getT() == 2) {
            PS.ppieza(b, PS.getT(), 0, xa, 7, false);
        }
        else { PS.ppieza(b, PS.getT(), 0, xa, 6, false); }

        if (PSS.getT() == 6 || PSS.getT() == 7 || PSS.getT() == 2) {
            PSS.ppieza(b, PSS.getT(), 0, xa, 10, false);
        }
        else { PSS.ppieza(b, PSS.getT(), 0, xa, 9, false); }

        if (PSSS.getT() == 6 || PSSS.getT() == 7 || PSSS.getT() == 2) {
            PSSS.ppieza(b, PSSS.getT(), 0, xa, 13, false);
        }
        else { PSSS.ppieza(b, PSSS.getT(), 0, xa, 12, false); }
    }
};
