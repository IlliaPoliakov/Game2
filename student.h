#pragma once
#include"character.h"
#include"Stutype.h"

class Student : public Character {
public:
    Student(size_t hp_, size_t power_, std::string type_, StuType& t);
    Student();
    void GetType(StuType& type_);
    StuType& GiveType();
    void GetMoreScore(int score);
    int GiveScore();

protected:
    StuType type;
    int score;
};