#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <string>
using namespace std;

class Screen {

public:
    // �L�X��ܦb��������W����r
    void gameTitle();
    void gameRules();
    void gameProgrammer();
    void gameInstruction();
    void succeedInformation();
    void betError();
    void betSuccess();
    void askContinueDraw();
    void seperationLine();

    void clear(); // �M����������W����r

};

#endif