#pragma once
#include<vector>
#include<string>
class Character {
public:
    Character(size_t hp_, size_t power_);
    Character();

    void GetPower(size_t power_);
    void GetHp(size_t hp_);
    size_t GivePower();
    size_t GiveHp();
    size_t GiveConstHp();
    //virtual void ShowSkils();
    void GetMorePower(int n);
protected:
    size_t hp;
    size_t consthp;
    size_t power;
};