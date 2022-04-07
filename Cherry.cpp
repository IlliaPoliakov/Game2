#include"Cherry.h"

Chery::Chery() :Fruits() {};
Chery::Chery(std::string name_, int score_) :Fruits(name_, score_) {};
void Chery::GetScore() {
    std::cout << "Cherry additional score: " << score;
};
void Chery :: GetName() {
    std::cout << "Name of this fruit is: " << name;
};