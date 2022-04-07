#include<iostream>
#include <windows.h>
#include <conio.h>
#include "maps.h" 
#include "output.h" 
#include "cursor.h"
#include "student.h"
#include "character.h"
#include "game.h" 
#include"Fruits.h"
#include"Cherry.h"
#include"Apple.h"

int main() {
    Maps map;
    Student student;//our game person
    system("color 02");
    Output(0, student);//hello screan
    Sleep(1000);
    if (MessageBox(0, L"4496 5501 6478 7878 - support developers ^_^",
        L"     Just a little problem... ", MB_YESNO) == IDYES) {
        MessageBox(0, L"    Good luck to you!!!", L"Oh!!!", MB_OK);
    }
    else {
        system("color 04");
        Output(100, student);
        std::cout << std::endl;
        return 0;
    }
    while (true) {
        system("cls");
        Output(1, student);//menu screan
        int chosenResult = Cursor({ 3,11 }, 0, 0);
        int mainScore;
        switch (chosenResult) {
        case 11:
            system("cls");
            Output(2, student);
            while (true) {
                chosenResult = Cursor({ 13,6 }, 1, 0);
                if (chosenResult != 25 && chosenResult != 48) break;
                else {
                    MessageBox(0, L"    Chose another one.", L"You don't have enough experience for these heroes.", MB_OK);
                }
            }
            system("cls");
            mainScore = Game(1000, chosenResult, student);
            break;
        case 12:
            MessageBox(0, L"    You don't have any unfinished games yet.", L"Hm...", MB_OK);
            break;
        case 13:
            MessageBox(0, L"    You don't have any records yet.", L"Hm...", MB_OK);
            break;
        case 14:
            system("cls");
            Output(100, student);
            std::cout << std::endl;
            return 0;
        }
    }
}