#include "StartScreen.h"

#include <iostream>
#include <string>
using namespace std;

void Startscreen::getTitle() {
    cout << "*****************" << endl;
    cout << "* 21�I�d�P�C��  *" << endl;
    cout << "*****************" << endl << endl;

}

void Startscreen::getGameNotes() {
    cout << "PCCU PROJECT MADE BY: 9TH GROUP." << endl << endl;
}

void Startscreen::getInstruction() {
    cout << "�ާ@����:" << endl;
    cout << "��J(1) -> �n�D���P" << endl;
    cout << "��J(2) -> ����P" << endl;
    cout << "��J(3) -> ���s�C��" << endl;
    cout << "��J(4) -> ����C��" << endl << endl;
}

void Startscreen::succeedInformation() {
    cout << "SYS: �п�J�Ʀr0�H�~��..." << endl;
}

void Startscreen::clear() {
    system("cls");
}