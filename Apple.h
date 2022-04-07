#pragma once
#include"cursor.h"
#include"Fruits.h"
class Apple :public Fruits {
public:
    Apple();
    Apple(std::string name_, int score_);
    void GetScore() ;
    void GetName() ;
protected:
};