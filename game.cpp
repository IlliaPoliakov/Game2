#include"game.h"

int Game(int mapnum, int stutype, Student& student) {
    std::vector<std::vector<std::string>> map;
    int cursorResult;
    StuType t;
    switch (stutype) {
    case 13: {
        student.GetHp(15);
        student.GetPower(20);
        t = VERY_GOOD_STUDENT;
        student.GetType(t);
        break;
    }
    case 36: {
        student.GetHp(20);
        student.GetPower(40);
        t = STILL_SCHOOL_BOY;
        student.GetType(t);
        break;
    }
    case 59: {
        student.GetHp(40);
        student.GetPower(40);
        t = DRUNK_STUDENT;
        student.GetType(t);
        break;
    }
    }
    Output(mapnum, student);
    int resultScore = GameCursor(mapnum, student);

    return resultScore;
};