#include"GameCursor.h"

int GameCursor(int mapnum, Student& student) {
    int result = 0;
    Maps m;
    std::vector<std::vector<std::string>> map=m.GetMap(mapnum);
    bool exit = false;
    int ch;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { 36,15 };//{7,5}
    SetConsoleCursorPosition(hConsole, position);
    std::cout << (char)64;
    SetConsoleCursorPosition(hConsole, position);
    int numofdraws = 0;
    int draws = 0;
    std::vector < std::vector <int>> elementpositions1;
    std::vector < std::vector <int>> elementpositions2;
    while (!exit) {
        SetConsoleCursorPosition(hConsole, { 75,1 });
        std::cout << student.GiveScore();
        SetConsoleCursorPosition(hConsole, position);
        if (numofdraws == 0) {
            numofdraws++;
            elementpositions1 = DrawPoints(mapnum,0);
            SetConsoleCursorPosition(hConsole, position);
        }
        if (draws == 0) {
            draws++;
            elementpositions2  = DrawPoints(mapnum,1);
            SetConsoleCursorPosition(hConsole, position);
        }
        int pmres = Posmeaning(position, mapnum, student);
        if (pmres==-1) {
            numofdraws = 0;
            draws = 0;
            system("cls");
            if (mapnum == 52000) Output(51000, student);
            else Output(mapnum - 1000, student);
            mapnum -= 1000;
            map = m.GetMap(mapnum);
            position = { 70,8 };
            SetConsoleCursorPosition(hConsole, position);
            continue;
        }
        else if (pmres == 1) {
            numofdraws = 0;
            draws = 0;
            system("cls");
            if (mapnum == 3000) Output(51000, student);
            else Output(mapnum + 1000, student);
            mapnum += 1000;
            map = m.GetMap(mapnum);
            position = { 7,6 };
            SetConsoleCursorPosition(hConsole, position);
            continue;
        }
        ch = _getch();
        switch (ch) {
        case 224: {
            switch (_getch()) {
            case 72: {               // up
                std::vector<int> vec = { position.X, position.Y - 1 };
                if (std::count(begin(elementpositions1), end(elementpositions1),
                    vec)>0) {
                    student.GetMoreScore(5);
                }
                if (std::count(begin(elementpositions2), end(elementpositions2),
                    vec)>0) {
                    //fighting(student);
                }
                if (map[position.Y - 1][0][position.X] != '*') {
                    std::cout << map[position.Y][0][position.X];
                    position.Y--;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)64;
                    SetConsoleCursorPosition(hConsole, position);
                }
                break;
            }
            case 80: {           // down
                std::vector<int> vec = { position.X, position.Y + 1 };
                if (std::count(begin(elementpositions1), end(elementpositions1),
                    vec) > 0) {
                    student.GetMoreScore(5);
                }
                if (std::count(begin(elementpositions2), end(elementpositions2),
                    vec) > 0) {
                    //fighting(student);
                }
                if (map[position.Y + 1][0][position.X] != '*') {
                    std::cout << map[position.Y][0][position.X];
                    position.Y++;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)64;
                    SetConsoleCursorPosition(hConsole, position);
                }
                break;
            }
            case 75: {           // left
                std::vector<int> vec = { position.X-1, position.Y  };
                if (std::count(begin(elementpositions1), end(elementpositions1),
                    vec) > 0) {
                    student.GetMoreScore(5);
                }
                if (std::count(begin(elementpositions2), end(elementpositions2),
                    vec) > 0) {
                    //fighting(student);
                }
                if (map[position.Y][0][position.X - 1] != '*') {
                    std::cout << map[position.Y][0][position.X];
                    position.X--;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)64;
                    SetConsoleCursorPosition(hConsole, position);
                }
                break;
            }
            case 77: {           // right
                std::vector<int> vec = { position.X+1, position.Y };
                if (std::count(begin(elementpositions1), end(elementpositions1),
                    vec) > 0) {
                    student.GetMoreScore(5);
                }
                if (std::count(begin(elementpositions2), end(elementpositions2),
                    vec) > 0) {
                //fighting(student);
                }
                if (map[position.Y][0][position.X + 1] != '*') {
                    std::cout << map[position.Y][0][position.X];
                    position.X++;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)64;
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
            exit = true;
            break;
        }
        default:
            break;
        }
    }
    return result;
 }