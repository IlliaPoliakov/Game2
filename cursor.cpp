#include"cursor.h"

int Cursor(COORD pos, int tt, int mapnum) {
    bool exit = false;
    int ch;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = pos;
    SetConsoleCursorPosition(hConsole, position);
    int result = 0;
    if (tt == 0) {
        std::cout << (char)16;
        SetConsoleCursorPosition(hConsole, position);
        while (!exit) {
            ch = _getch();
            switch (ch) {
            case 224: {
                switch (_getch()) {
                case 72: {               // нажата клавиша вверх
                    if (position.Y != 11) {
                        std::cout << " ";
                        position.Y--;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else {
                        std::cout << " ";
                        position.Y += 3;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                case 80: {           // нажата клавиша вниз
                    if (position.Y != 14) {
                        std::cout << " ";
                        position.Y++;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else {
                        std::cout << " ";
                        position.Y -= 3;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                default:
                    break;
                }
                break;
            }
            case 13: {
                result = position.Y;
                exit = true;
                break;
            }
            default:
                break;
            }
        }
    }
    else {
        std::cout << (char)16;
        SetConsoleCursorPosition(hConsole, position);
        while (!exit) {
            ch = _getch();
            switch (ch) {
            case 224: {
                switch (_getch()) {
                case 72: {               // up
                    if (position.X == 25 && position.Y == 15) {
                        std::cout << " ";
                        position.X = 13;
                        position.Y = 6;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else if (position.X == 48 && position.Y == 15) {
                        std::cout << " ";
                        position.X = 36;
                        position.Y = 6;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                case 80: {           // down
                    if (position.X == 13 && position.Y == 6) {
                        std::cout << " ";
                        position.X = 25;
                        position.Y = 15;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else if (position.X == 36 && position.Y == 6) {
                        std::cout << " ";
                        position.X = 48;
                        position.Y = 15;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else if (position.X == 59 && position.Y == 6) {
                        std::cout << " ";
                        position.X = 48;
                        position.Y = 15;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                case 75: {           // left
                    if (position.X == 13 && position.Y == 6) {
                        std::cout << " ";
                        position.X = 48;
                        position.Y = 15;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else if (position.X == 25 && position.Y == 15) {
                        std::cout << " ";
                        position.Y = 6;
                        position.X = 59;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else {
                        std::cout << " ";
                        position.X -= 23;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                case 77: {           // right
                    if (position.X == 59 && position.Y == 6) {
                        std::cout << " ";
                        position.X = 25;
                        position.Y = 15;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else if (position.X == 48 && position.Y == 15) {
                        std::cout << " ";
                        position.X = 13;
                        position.Y = 6;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    else {
                        std::cout << " ";
                        position.X += 23;
                        SetConsoleCursorPosition(hConsole, position);
                        std::cout << (char)16;
                        SetConsoleCursorPosition(hConsole, position);
                    }
                    break;
                }
                default:
                    break;
                }
                break;
            }
            case 13: {
                result = position.X;
                std::cout << " ";
                exit = true;
                break;
            }
            default:
                break;
            }
        }
    }
    return result;
};