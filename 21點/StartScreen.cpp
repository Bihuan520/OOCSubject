#include "StartScreen.h"
#include <iostream>
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
    cout << "  2. 莊家(電腦) 會加牌直至≧17點；但玩家則不在此限。" << endl;
    cout << "  3. 賭注金額最低設置為50$，也不能超過錢包持有金額。" << endl;
    cout << "  4. 若錢包持有金額<50$，則遊戲結束（破產）。" << endl << endl;

    seperationLine();

    cout << ">> 賭金增減規則:" << endl << endl;
    cout << "．玩家獲勝時，皆另外獲得先前下注的賭金之金額。" << endl;
    cout << "．若有加成之遊戲結果，則依括號所表示。" << endl;
    cout << "  1. 若玩家持有五張牌且<21點，則直接獲勝（賭金*2）。" << endl;
    cout << "  2. 若玩家持有五張牌且=21點，則直接獲勝（賭金*4）。" << endl;
    cout << "  3. 玩家和莊家的總點數相同，則宣布和局（賭金發還）。" << endl;
    cout << "  4. 玩家和莊家的總點數都≦21點，則點數大者獲勝。" << endl;
    cout << "  5. 玩家的總點數爆了（≧21點），則玩家輸掉下注金額。" << endl;
    cout << "  6. 莊家的總點數爆了（≧21點），則玩家贏得下注金額。" << endl;
    cout << "  7. 玩家和莊家的總點數都爆了（≧21點），則玩家輸掉下注金額。" << endl << endl << endl;
}

void Screen::gameProgrammer() {
    cout << ">> PCCU PROJECT MADE BY: 6TH GROUP." << endl << endl;
}

void Screen::gameInstruction() {
    cout << ">> 操作說明:" << endl << endl;
    cout << "輸入(1) -> 要求給牌" << endl;
    cout << "輸入(2) -> 停止給牌" << endl << endl;
}

void Screen::betError() {
    cout << "SYS: 你賭注設定不合法或尚未設定，請重新下注！" << endl;
    cout << "請輸入下注金額（整數）：";
}

void Screen::betSuccess() {
    cout << "SYS: 賭注重新下注成功！" << endl << endl;
}
void Screen::succeedInformation() {
    cout << "SYS: 請輸入數字0以繼續..." << endl;
}

void Screen::askContinueDraw() {
    cout << "SYS: 是否繼續抽牌?" << endl;
}

void Screen::winMessage() {
    cout << "SYS: 你贏了！" << endl << endl;
}

void Screen::loseMessage() {
    cout << "SYS: 你輸了！" << endl << endl;
}

void Screen::tieMessage() {
    cout << "SYS: 平手！" << endl << endl;
}

void Screen::gameOverMessage() {
    cout << "SYS: 你破產了，遊戲結束！" << endl;
    cout << "SYS: 重啟遊戲視窗以開始新遊戲！" << endl << endl;
}

void Screen::seperationLine() {
    cout << "= = = = = = = = = = = = = = = = = = = =" << endl << endl;
}

void Screen::clear() {
    system("cls");
}