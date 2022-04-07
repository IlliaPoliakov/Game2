#pragma once
#include"cursor.h"
#include"Fruits.h"
class Chery:public Fruits {
public:
    Chery();
    Chery(std::string name_, int score_);
    void GetScore();
    void GetName();
protected:

};