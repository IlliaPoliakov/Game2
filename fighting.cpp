#include"fighting.h"

int Fighting(Student& st) {
    int result=0;
    std::vector<std::string> boses = { "Levakov", "Matveev"};
    std::vector<std::string> defmobs = { "Golovati", "Varvara", "Carpovich", "Philiptsov"};
    int vardef = rand() % 4;
    int varbos = rand() % 2;
    int chs = rand() % 2;
    if (chs == 0) {
        std::string opponent = defmobs[vardef];

    }
    else {
        if (MessageBox(0, L"Do you want to fight with boss?",
            L"     Do you want to fight with boss? ", MB_YESNO) == IDNO) {
            return result;
        }
        else {
            std::string opponent = boses[varbos];

        }
    }
        return result;
}