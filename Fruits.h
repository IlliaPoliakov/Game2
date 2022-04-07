#pragma once
#include"cursor.h"
class Fruits {
public:
    Fruits();
    Fruits(std::string name_, int score_);
    virtual void GetScore()=0;
    virtual void GetName()=0;
protected:
    std::string name;
    int score;
};