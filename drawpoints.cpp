#include"GameCursor.h"
std::vector<std::vector<int>> DrawPoints(int mapnum, int num) {
    std::vector < std::vector <int>> positions = { {} };
    if (num == 0) {
        if (mapnum > 1000 && mapnum < 52000) {
            Maps map;
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD position = { 0,0 };
            std::vector<std::vector<std::string>> m = map.GetMap(mapnum);
            int popos = 0;
            while (popos != 10) {
                int randX = rand() % 78 + 1;
                int randY = rand() % 8 + 13;
                if (m[randY][0][randX] != '*') {
                    positions.push_back({ randX,randY });
                    position.X = randX;
                    popos++;
                    position.Y = randY;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)36;
                }
            }
        }
    }
    else {
        if (mapnum > 1000 && mapnum < 52000) {
            Maps map;
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD position = { 0,0 };
            std::vector<std::vector<std::string>> m = map.GetMap(mapnum);
            int popos = 0;
            while (popos != 4) {
                int randX = rand() % 78 + 1;
                int randY = rand() % 8 + 13;
                if (m[randY][0][randX] != '*') {
                    positions.push_back({ randX,randY });
                    position.X = randX;
                    popos++;
                    position.Y = randY;
                    SetConsoleCursorPosition(hConsole, position);
                    std::cout << (char)37;
                }
            }
        }
    }
    return positions;
}