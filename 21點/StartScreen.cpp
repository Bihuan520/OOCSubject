#include "StartScreen.h"

#include <iostream>
#include <string>
using namespace std;

void Screen::getTitle() {
    cout << "*****************" << endl;
    cout << "* 21點卡牌遊戲  *" << endl;
    cout << "*****************" << endl << endl;

}

void Screen::getGameNotes() {
    cout << "PCCU PROJECT MADE BY: 6TH GROUP." << endl << endl;
}

void Screen::getInstruction() {
    cout << "操作說明:" << endl;
    cout << "輸入(1) -> 要求給牌" << endl;
    cout << "輸入(2) -> 停止給牌" << endl;
    cout << "輸入(3) -> 結束遊戲" << endl << endl;
}

void Screen::succeedInformation() {
    cout << "SYS: 請輸入數字0以繼續..." << endl;
}

void Screen::clear() {
    system("cls");
}