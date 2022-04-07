#include"character.h"

Character::Character(size_t hp_, size_t power_) :
    hp(hp_), power(power_) {   };
Character::Character() {
    hp = 0;
    power = 0;
};


void Character::GetPower(size_t power_) {
    power = power_;
};
void Character::GetMorePower(int n) {
    power += n;
};
void Character::GetHp(size_t hp_) {
    hp = hp_;
};
size_t Character::GivePower() {
    return power;
};
size_t Character::GiveHp() {
    return hp;
};
size_t Character::GiveConstHp() {
    return consthp;
};
