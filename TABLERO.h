#pragma once
class TABLERO {
private:
    int puntos;
    int v;
    int contv;
    bool GO;
    bool pw;
    int pwc;
public:
    TABLERO() {
        puntos = 0;
        GO = false;
        contv = 0;
        v = 15000;
        pw = false;
        pwc = 0;
    };
    int getpuntos() { return puntos; }
    void setpuntos(int puntos_) { puntos = puntos_; };
    int getv() { return v; }
    void setv(int v_) { v = v_; };
    int getcontv() { return contv; }
    void setcontv(int contv_) { v = contv_; };
    int getpwc() { return pwc; }
    void setpwc(int pwc_) { pwc = pwc_; };
    bool getGO() { return GO; }
    void setGO(bool GO_) { GO = GO_; };
    bool getpw() { return pw; }
    void setpw(bool pw_) { pw = pw_; };

    void pcontorno(int color) {
        switch (color) {
        case 1: cout << CYAN;break;
        case 2: cout << RED; break;
        case 3: cout << GREEN; break;
        case 4: cout << YELLOW; break;
        case 5: cout << BLUE; break;
        case 6: cout << BOMB; break;
        case 7: cout << MAGENTA; break;
        case 8: cout << ORANGE; break;
        case 9: cout << GRAY; break;
        }

        gotoxy(0, 0);cout << char(201);
        gotoxy(0, 21);cout << char(200);
        gotoxy(11, 0);cout << char(187);
        gotoxy(11, 21);cout << char(188);

        gotoxy(13, 5);cout << char(201);
        gotoxy(18, 5);cout << char(187);

        gotoxy(13, 8);cout << char(204);
        gotoxy(13, 11);cout << char(204);
        gotoxy(18, 8);cout << char(185);
        gotoxy(18, 11);cout << char(185);

        gotoxy(13, 14);cout << char(200);
        gotoxy(18, 14);cout << char(188);

        gotoxy(13, 0);cout << GREEN << char(201);
        gotoxy(13, 3);cout << char(200);
        gotoxy(18, 0);cout << char(187);
        gotoxy(18, 3);cout << char(188) << RESET;


    }
    void loadtablero(string TAB[22][13]) {
        for (int f = 1; f <= 20;f++) {
            for (int c = 1; c <= 10;c++) {
                TAB[f][c] = "0";
            }
        }
        for (int f = 1;f < 21;f++) {
            TAB[f][0] = "1";
            TAB[f][11] = "1";
        }
        for (int c = 1;c < 11;c++) {
            TAB[0][c] = "1";
            TAB[21][c] = "1";
        }
    }
    void ptablero(string TAB[22][13]) {
        for (int f = 1; f <= 20;f++) {
            for (int c = 1; c <= 10;c++) {
                if (TAB[f][c] == "1") {
                    gotoxy(c, f);cout << CYAN << char(219) << RESET;
                }
                else if (TAB[f][c] == "2") {
                    gotoxy(c, f);cout << YELLOW << char(219) << RESET;
                }
                else if (TAB[f][c] == "3") {
                    gotoxy(c, f);cout << MAGENTA << char(219) << RESET;
                }
                else if (TAB[f][c] == "4") {
                    gotoxy(c, f);cout << ORANGE << char(219) << RESET;
                }
                else if (TAB[f][c] == "5") {
                    gotoxy(c, f);cout << BLUE << char(219) << RESET;
                }
                else if (TAB[f][c] == "6") {
                    gotoxy(c, f);cout << GREEN << char(219) << RESET;
                }
                else if (TAB[f][c] == "7") {
                    gotoxy(c, f);cout << RED << char(219) << RESET;
                }
                else if (TAB[f][c] == "8") {
                    gotoxy(c, f);cout << BOMB << char(219) << RESET;
                }
                else {
                    gotoxy(c, f);cout << " ";
                }
            }
        }
    }
    void ptablero2(string TAB[22][13]) {
        for (int f = 0; f <= 22;f++) {
            for (int c = 0; c <= 20;c++) {
                if (TAB[f][c] != "0") { gotoxy(c, f);cout << TAB[f][c]; }
                else
                {
                    gotoxy(c, f);cout << " ";
                }

            }
        }
    }
    void stablero(string TAB[22][13], int T, int R, int x, int y) {
        int TR = (T * 10) + R;
        switch (TR) {
        case 10: {
            TAB[y][x] = "1";
            TAB[y][x - 1] = "1";
            TAB[y][x + 1] = "1";
            TAB[y][x + 2] = "1";
            break;
        }
        case 11: {
            TAB[y][x] = "1";
            TAB[y - 1][x] = "1";
            TAB[y + 1][x] = "1";
            TAB[y + 2][x] = "1";
            break;
        }
        case 12: {
            TAB[y][x] = "1";
            TAB[y][x - 1] = "1";
            TAB[y][x + 1] = "1";
            TAB[y][x + 2] = "1";
            break;
        }
        case 13: {
            TAB[y][x] = "1";
            TAB[y - 1][x] = "1";
            TAB[y + 1][x] = "1";
            TAB[y + 2][x] = "1";
            break;
        }
        case 20: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 21: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 22: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 23: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 30: {
            TAB[y][x] = "3";
            TAB[y][x - 1] = "3";
            TAB[y][x + 1] = "3";
            TAB[y + 1][x] = "3";
            break;
        }
        case 31: {
            TAB[y][x] = "3";
            TAB[y - 1][x] = "3";
            TAB[y + 1][x] = "3";
            TAB[y][x - 1] = "3";
            break;
        }
        case 32: {
            TAB[y][x] = "3";
            TAB[y][x - 1] = "3";
            TAB[y][x + 1] = "3";
            TAB[y - 1][x] = "3";
            break;
        }
        case 33: {
            TAB[y][x] = "3";
            TAB[y - 1][x] = "3";
            TAB[y + 1][x] = "3";
            TAB[y][x + 1] = "3";
            break;
        }
        case 40: {
            TAB[y][x] = "4";
            TAB[y][x + 1] = "4";
            TAB[y][x - 1] = "4";
            TAB[y + 1][x - 1] = "4";
            break;
        }
        case 41: {
            TAB[y][x] = "4";
            TAB[y - 1][x] = "4";
            TAB[y + 1][x] = "4";
            TAB[y - 1][x - 1] = "4";
            break;
        }
        case 42: {
            TAB[y][x] = "4";
            TAB[y][x - 1] = "4";
            TAB[y][x + 1] = "4";
            TAB[y - 1][x + 1] = "4";
            break;
        }
        case 43: {
            TAB[y][x] = "4";
            TAB[y - 1][x] = "4";
            TAB[y + 1][x] = "4";
            TAB[y + 1][x + 1] = "4";
            break;
        }
        case 53: {
            TAB[y][x] = "5";
            TAB[y - 1][x] = "5";
            TAB[y + 1][x] = "5";
            TAB[y - 1][x + 1] = "5";
            break;
        }
        case 50: {
            TAB[y][x] = "5";
            TAB[y][x + 1] = "5";
            TAB[y][x - 1] = "5";
            TAB[y + 1][x + 1] = "5";
            break;
        }
        case 51: {
            TAB[y][x] = "5";
            TAB[y - 1][x] = "5";
            TAB[y + 1][x] = "5";
            TAB[y + 1][x - 1] = "5";
            break;
        }
        case 52: {
            TAB[y][x] = "5";
            TAB[y][x + 1] = "5";
            TAB[y][x - 1] = "5";
            TAB[y - 1][x - 1] = "5";
            break;
        }


        case 60: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x] = "6";
            TAB[y - 1][x + 1] = "6";
            break;
        }
        case 61: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x - 1] = "6";
            TAB[y + 1][x] = "6";
            break;
        }
        case 62: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x] = "6";
            TAB[y - 1][x + 1] = "6";
            break;
        }
        case 63: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x - 1] = "6";
            TAB[y + 1][x] = "6";
            break;
        }
        case 70: {
            TAB[y][x] = "7";
            TAB[y][x + 1] = "7";
            TAB[y - 1][x] = "7";
            TAB[y - 1][x - 1] = "7";
            break;
        }
        case 71: {
            TAB[y][x] = "7";
            TAB[y - 1][x] = "7";
            TAB[y][x - 1] = "7";
            TAB[y + 1][x - 1] = "7";
            break;
        }
        case 72: {
            TAB[y][x] = "7";
            TAB[y][x + 1] = "7";
            TAB[y - 1][x] = "7";
            TAB[y - 1][x - 1] = "7";
            break;
        }
        case 73: {
            TAB[y][x] = "7";
            TAB[y - 1][x] = "7";
            TAB[y][x - 1] = "7";
            TAB[y + 1][x - 1] = "7";
            break;
        }
        }
    }
    void stablero2(string TAB[22][20], int T, int R, int x, int y) {
        int TR = (T * 10) + R;
        switch (TR) {
        case 10: {
            TAB[y][x] = "1";
            TAB[y][x - 1] = "1";
            TAB[y][x + 1] = "1";
            TAB[y][x + 2] = "1";
            break;
        }
        case 11: {
            TAB[y][x] = "1";
            TAB[y - 1][x] = "1";
            TAB[y + 1][x] = "1";
            TAB[y + 2][x] = "1";
            break;
        }
        case 12: {
            TAB[y][x] = "1";
            TAB[y][x - 1] = "1";
            TAB[y][x + 1] = "1";
            TAB[y][x + 2] = "1";
            break;
        }
        case 13: {
            TAB[y][x] = "1";
            TAB[y - 1][x] = "1";
            TAB[y + 1][x] = "1";
            TAB[y + 2][x] = "1";
            break;
        }
        case 20: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 21: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 22: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 23: {
            TAB[y][x] = "2";
            TAB[y - 1][x] = "2";
            TAB[y][x + 1] = "2";
            TAB[y - 1][x + 1] = "2";
            break;
        }
        case 30: {
            TAB[y][x] = "3";
            TAB[y][x - 1] = "3";
            TAB[y][x + 1] = "3";
            TAB[y + 1][x] = "3";
            break;
        }
        case 31: {
            TAB[y][x] = "3";
            TAB[y - 1][x] = "3";
            TAB[y + 1][x] = "3";
            TAB[y][x - 1] = "3";
            break;
        }
        case 32: {
            TAB[y][x] = "3";
            TAB[y][x - 1] = "3";
            TAB[y][x + 1] = "3";
            TAB[y - 1][x] = "3";
            break;
        }
        case 33: {
            TAB[y][x] = "3";
            TAB[y - 1][x] = "3";
            TAB[y + 1][x] = "3";
            TAB[y][x + 1] = "3";
            break;
        }
        case 40: {
            TAB[y][x] = "4";
            TAB[y][x + 1] = "4";
            TAB[y][x - 1] = "4";
            TAB[y + 1][x - 1] = "4";
            break;
        }
        case 41: {
            TAB[y][x] = "4";
            TAB[y - 1][x] = "4";
            TAB[y + 1][x] = "4";
            TAB[y - 1][x - 1] = "4";
            break;
        }
        case 42: {
            TAB[y][x] = "4";
            TAB[y][x - 1] = "4";
            TAB[y][x + 1] = "4";
            TAB[y - 1][x + 1] = "4";
            break;
        }
        case 43: {
            TAB[y][x] = "4";
            TAB[y - 1][x] = "4";
            TAB[y + 1][x] = "4";
            TAB[y + 1][x + 1] = "4";
            break;
        }
        case 53: {
            TAB[y][x] = "5";
            TAB[y - 1][x] = "5";
            TAB[y + 1][x] = "5";
            TAB[y - 1][x + 1] = "5";
            break;
        }
        case 50: {
            TAB[y][x] = "5";
            TAB[y][x + 1] = "5";
            TAB[y][x - 1] = "5";
            TAB[y + 1][x + 1] = "5";
            break;
        }
        case 51: {
            TAB[y][x] = "5";
            TAB[y - 1][x] = "5";
            TAB[y + 1][x] = "5";
            TAB[y + 1][x - 1] = "5";
            break;
        }
        case 52: {
            TAB[y][x] = "5";
            TAB[y][x + 1] = "5";
            TAB[y][x - 1] = "5";
            TAB[y - 1][x - 1] = "5";
            break;
        }


        case 60: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x] = "6";
            TAB[y - 1][x + 1] = "6";
            break;
        }
        case 61: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x - 1] = "6";
            TAB[y + 1][x] = "6";
            break;
        }
        case 62: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x] = "6";
            TAB[y - 1][x + 1] = "6";
            break;
        }
        case 63: {
            TAB[y][x] = "6";
            TAB[y][x - 1] = "6";
            TAB[y - 1][x - 1] = "6";
            TAB[y + 1][x] = "6";
            break;
        }
        case 70: {
            TAB[y][x] = "7";
            TAB[y][x + 1] = "7";
            TAB[y - 1][x] = "7";
            TAB[y - 1][x - 1] = "7";
            break;
        }
        case 71: {
            TAB[y][x] = "7";
            TAB[y - 1][x] = "7";
            TAB[y][x - 1] = "7";
            TAB[y + 1][x - 1] = "7";
            break;
        }
        case 72: {
            TAB[y][x] = "7";
            TAB[y][x + 1] = "7";
            TAB[y - 1][x] = "7";
            TAB[y - 1][x - 1] = "7";
            break;
        }
        case 73: {
            TAB[y][x] = "7";
            TAB[y - 1][x] = "7";
            TAB[y][x - 1] = "7";
            TAB[y + 1][x - 1] = "7";
            break;
        }
        }
    }
    void clean() {
        for (int j = 0;j < 22;j++) {
            for (int i = 0;i <= 20;i++) {
                gotoxy(i, j);cout << " ";
            }
            Sleep(10);
        }
    }
    void lineas(string TAB[22][13], int& vel) {
        for (int f = 1; f <= 20; f++) {
            bool fila = true;
            for (int c = 1; c <= 10; c++) {
                if (TAB[f][c] == "0") {
                    fila = false;
                    break;
                }
            }
            if (fila) {
                puntos++;
                contv++;
                pwc++;
                vel++;
                if (contv > 10) {
                    contv = 0;
                    v = v - 500;
                }
                if (pwc == 24) {
                    pw = true;
                }
                for (int k = f; k > 1; k--) {
                    for (int l = 1; l <= 10; l++) {
                        TAB[k][l] = TAB[k - 1][l];
                    }
                }
                for (int l = 1; l <= 10; l++) {
                    TAB[1][l] = "0";
                }
            }
        }
    }
    void pwr(string TAB[22][13]) {
        for (int f = 17;f <= 20;f++) {
            for (int c = 1;c <= 10;c++) {
                TAB[f][c] = "8";
                ptablero(TAB);

            }
        }
    }
    void plogo(string b) {
        gotoxy(1, 1);cout << RED << b << b << b;
        gotoxy(1, 2);cout << " " << b << " ";
        gotoxy(1, 3);cout << " " << b << " ";
        gotoxy(1, 4);cout << " " << b << " ";
        gotoxy(1, 5);cout << " " << b << " ";

        gotoxy(4, 1);cout << ORANGE << b << b << b;
        gotoxy(4, 2);cout << b << " " << " ";
        gotoxy(4, 3);cout << b << b << " ";
        gotoxy(4, 4);cout << b << " " << " ";
        gotoxy(4, 5);cout << b << b << b;

        gotoxy(7, 1);cout << YELLOW << b << b << b;
        gotoxy(7, 2);cout << " " << b << " ";
        gotoxy(7, 3);cout << " " << b << " ";
        gotoxy(7, 4);cout << " " << b << " ";
        gotoxy(7, 5);cout << " " << b << " ";

        gotoxy(10, 1);cout << GREEN << b << b << b;
        gotoxy(10, 2);cout << b << " " << b;
        gotoxy(10, 3);cout << b << b << " ";
        gotoxy(10, 4);cout << b << " " << b;
        gotoxy(10, 5);cout << b << " " << b;

        gotoxy(13, 1);cout << CYAN << b << " " << b;
        gotoxy(13, 2);cout << b << " " << b;
        gotoxy(13, 3);cout << " " << b << " ";
        gotoxy(13, 4);cout << " " << b << " ";
        gotoxy(13, 5);cout << " " << b << " ";

        gotoxy(16, 1);cout << MAGENTA << b << b << b;
        gotoxy(16, 2);cout << b << " " << " ";
        gotoxy(16, 3);cout << b << b << b;
        gotoxy(16, 4);cout << " " << " " << b;
        gotoxy(16, 5);cout << b << b << b << RESET;


        gotoxy(1, 20);cout << "  SPEED: ";
        gotoxy(1, 21);cout << "  COLOR: ";

    }


};
