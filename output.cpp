#include"output.h"

void Output(int num, Student& student) {
    Maps map;
    std::vector<std::vector<std::string>> matr = map.GetMap(num);
    switch (num) {
    case 0:
    case 1:
    case 2:
    case 10:
    case 100: {
        for (size_t i = 0; i < 24; ++i) {
            std::cout << matr[i][0];
            std::cout << std::endl;
        }
        break;
    }
    case 1000:
    case 2000:
    case 3000:
    case 51000: {
        for (size_t i = 0; i < 24; ++i) {
            std::cout << matr[i][0];
            std::cout << std::endl;
        }
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD position = { 8,1 };
        SetConsoleCursorPosition(hConsole, position);
        std::cout << student.GiveHp();
        position = { 8,2 };
        SetConsoleCursorPosition(hConsole, position);
        std::cout << student.GivePower();
        position = { 75,1 };
        SetConsoleCursorPosition(hConsole, position);
        std::cout << student.GiveScore();
        break;
    }
    case 52000: {
        for (size_t i = 0; i < 24; ++i) {
            std::cout << matr[i][0];
            std::cout << std::endl;
        }
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD position = { 8,1 };
        SetConsoleCursorPosition(hConsole, position);
        std::cout << student.GiveHp();
        position = { 8,2 };
        SetConsoleCursorPosition(hConsole, position);
        std::cout << student.GivePower();
        break;
    }
    }
}