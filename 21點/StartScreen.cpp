#include "StartScreen.h"

#include <iostream>
#include <string>
using namespace std;

void Screen::getTitle() {
    cout << "*****************" << endl;
    cout << "* 21�I�d�P�C��  *" << endl;
    cout << "*****************" << endl << endl;

}

void Screen::getGameNotes() {
    cout << "PCCU PROJECT MADE BY: 6TH GROUP." << endl << endl;
}

void Screen::getInstruction() {
    cout << "�ާ@����:" << endl;
    cout << "��J(1) -> �n�D���P" << endl;
    cout << "��J(2) -> ����P" << endl;
    cout << "��J(3) -> �����C��" << endl << endl;
}

void Screen::succeedInformation() {
    cout << "SYS: �п�J�Ʀr0�H�~��..." << endl;
}

void Screen::clear() {
    system("cls");
}