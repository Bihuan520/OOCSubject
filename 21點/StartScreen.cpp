#include "StartScreen.h"

#include <iostream>
#include <string>
using namespace std;

void Screen::gameTitle() {
    cout << "               ********************             " << endl;
    cout << "               * 二十一點卡牌遊戲 *               " << endl;
    cout << "               ********************             " << endl << endl << endl;
}

void Screen::gameRules() {
    cout << ">> 遊戲說明 & 規則:" << endl << endl;
    cout << "．透過程式模擬進行21點卡牌遊戲的過程。" << endl;
    cout << "．本次專題結合了小型賭注機制，以增加遊戲可玩性。" << endl;
    cout << "．與一般實體卡牌玩法並無太大差異，簡易規則與遊玩方式如下：" << endl;
    cout << "  1. A可作1點或11點；2~10依牌面所示；J、Q、K作10點。" << endl;
    cout << "  2. 擁有最高點數的玩家獲勝，但其點數必須等於或低於21點。" << endl;
    cout << "  3. 若抽滿五張卡且點數≦21點，則可直接宣布獲勝。" << endl;
    cout << "  4. 莊家(電腦)會加牌直至≧17點；但玩家則不在此限。" << endl;
    cout << "  5. 賭注金額最低為50$" << endl << endl << endl;
}

void Screen::gameProgrammer() {
    cout << ">> PCCU PROJECT MADE BY: 6TH GROUP." << endl << endl;
}

void Screen::gameInstruction() {
    cout << ">> 操作說明:" << endl << endl;
    cout << "輸入(1) -> 要求給牌" << endl;
    cout << "輸入(2) -> 停止給牌" << endl;
    cout << "輸入(3) -> 放棄本局" << endl;
    cout << "輸入(4) -> 關閉遊戲" << endl << endl;
}

void Screen::betError() {
    cout << "SYS: 你賭注設定不合法或尚未設定，請重新下注！" << endl;
}

void Screen::betSuccess() {
    cout << "SYS: 賭注重新下注成功！" << endl << endl;
}
void Screen::succeedInformation() {
    cout << "SYS: 請輸入數字0以繼續..." << endl;
}

void Screen::askContinueDraw() {
    cout << "是否繼續抽牌?" << endl;
}

void Screen::seperationLine() {
    cout << "= = = = = = = = = = = = = = = = = = = =" << endl << endl;
}

void Screen::clear() {
    system("cls");
}