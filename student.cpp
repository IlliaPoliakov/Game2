#include"student.h"

Student::Student(size_t hp_, size_t power_, std::string type_, StuType& t) :
    Character(hp_, power_) {
    type = t;
    score = 0;
};
Student::Student() :Character() { 
    type = VERY_GOOD_STUDENT;
    score = 0;
};
void Student::GetType(StuType& type_) {
    type = type_;
}
StuType& Student::GiveType() {
    return type;
}
void Student::GetMoreScore(int score_) {
    score += score_;
}
int Student::GiveScore() {
    return score;
}
