#include "StartScreen.h"

#include <iostream>
#include <string>
using namespace std;

void Startscreen::getTitle() {
    cout << "*****************" << endl;
    cout << "* 21點卡牌遊戲  *" << endl;
    cout << "*****************" << endl << endl;

}

void Startscreen::getGameNotes() {
    cout << "PCCU PROJECT MADE BY: 9TH GROUP." << endl << endl;
}

void Startscreen::getInstruction() {
    cout << "操作說明:" << endl;
    cout << "輸入(1) -> 要求給牌" << endl;
    cout << "輸入(2) -> 停止給牌" << endl;
    cout << "輸入(3) -> 重新遊戲" << endl;
    cout << "輸入(4) -> 停止遊戲" << endl << endl;
}

void Startscreen::succeedInformation() {
    cout << "SYS: 請輸入數字0以繼續..." << endl;
}

void Startscreen::clear() {
    system("cls");
}