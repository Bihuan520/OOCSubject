#ifndef STARTSCREEN_H
#define STARTSCREEN_H

class Screen {

public:
    // 印出顯示在執行視窗上的文字
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

    void clear(); // 清除執行視窗上的文字

};

#endif