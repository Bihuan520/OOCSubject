#ifndef STARTSCREEN_H
#define STARTSCREEN_H

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
    void winMessage();
    void loseMessage();
    void tieMessage();
    void gameOverMessage();
    void seperationLine();

    void clear(); // �M����������W����r

};

#endif