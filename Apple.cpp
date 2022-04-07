#include"Apple.h"

Apple::Apple() :Fruits() {};
Apple::Apple(std::string name_, int score_) :Fruits(name_, score_) {};
void Apple::GetScore() {
    std::cout << "Apple additional score: " << score;
};
void Apple::GetName() {
    std::cout << "Name of this fruit is: " << name;
};