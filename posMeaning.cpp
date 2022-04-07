#include"posMeaning.h"

int Posmeaning(COORD position, int mapnum, Student& student) {
    int result = 0;
    if (mapnum == 1000 && position.X < 15 && position.Y>16) {
        if (student.GiveType() == VERY_GOOD_STUDENT) {
            student.GetHp(student.GiveConstHp() + 5);
        }
        else if (student.GiveType() == DRUNK_STUDENT) {
            MessageBox(0, L"    I have bad news for you, but it's your 'intresting skill', you can't heal:)",
                L"Ohh.. You need some HP??", MB_OK);
        }
        else {
            student.GetHp(student.GiveType());
        }
    }
    if (mapnum == 2000 && position.Y < 3 && student.GiveType()) {
        if (student.GiveType() == VERY_GOOD_STUDENT) {
            student.GetMorePower(2);
        }
        else if (student.GiveType() == DRUNK_STUDENT) {
            MessageBox(0, L"    I have bad news for you, but it's your 'intresting skill', you can't get more power:)",
                L"Ohh.. You need some POWER??", MB_OK);
            student.GetMorePower(-2);
        }
    }
    if (mapnum != 51000 && mapnum != 52000 && position.X < 7 && position.Y < 7) {
        result++;
    }
    if (mapnum != 1000 && position.X > 72 && position.Y < 7) {
        result--;
    }
    return result;
}