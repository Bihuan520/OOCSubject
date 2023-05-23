#include "StartScreen.h"
#include <iostream>
using namespace std;

void Screen::gameTitle() {
    cout << "               ********************             " << endl;
    cout << "               * �G�Q�@�I�d�P�C�� *               " << endl;
    cout << "               ********************             " << endl << endl << endl;
}

void Screen::gameRules() {
    cout << ">> �C������ & �W�h:" << endl << endl;
    cout << "�D�z�L�{�������i��21�I�d�P�C�����L�{�C" << endl;
    cout << "�D�����M�D���X�F�p����`����A�H�W�[�C���i���ʡC" << endl;
    cout << "�D�P�@�����d�P���k�õL�Ӥj�t���A²���W�h�P�C���覡�p�U�G" << endl;
    cout << "  1. A�i�@1�I��11�I�F2~10�̵P���ҥܡFJ�BQ�BK�@10�I�C" << endl;
    cout << "  2. ���a(�q��) �|�[�P���ܡ�17�I�F�����a�h���b�����C" << endl;
    cout << "  3. ��`���B�̧C�]�m��50$�A�]����W�L���]�������B�C" << endl;
    cout << "  4. �Y���]�������B<50$�A�h�C�������]�}���^�C" << endl << endl;

    seperationLine();

    cout << ">> ����W��W�h:" << endl << endl;
    cout << "�D���a��ӮɡA�ҥt�~��o���e�U�`����������B�C" << endl;
    cout << "�D�Y���[�����C�����G�A�h�̬A���Ҫ�ܡC" << endl;
    cout << "  1. �Y���a�������i�P�B<21�I�A�h������ӡ]���*2�^�C" << endl;
    cout << "  2. �Y���a�������i�P�B=21�I�A�h������ӡ]���*4�^�C" << endl;
    cout << "  3. ���a�M���a���`�I�ƬۦP�A�h�ť��M���]����o�١^�C" << endl;
    cout << "  4. ���a�M���a���`�I�Ƴ���21�I�A�h�I�Ƥj����ӡC" << endl;
    cout << "  5. ���a���`�I���z�F�]��21�I�^�A�h���a�鱼�U�`���B�C" << endl;
    cout << "  6. ���a���`�I���z�F�]��21�I�^�A�h���aĹ�o�U�`���B�C" << endl;
    cout << "  7. ���a�M���a���`�I�Ƴ��z�F�]��21�I�^�A�h���a�鱼�U�`���B�C" << endl << endl << endl;
}

void Screen::gameProgrammer() {
    cout << ">> PCCU PROJECT MADE BY: 6TH GROUP." << endl << endl;
}

void Screen::gameInstruction() {
    cout << ">> �ާ@����:" << endl << endl;
    cout << "��J(1) -> �n�D���P" << endl;
    cout << "��J(2) -> ����P" << endl << endl;
}

void Screen::betError() {
    cout << "SYS: �A��`�]�w���X�k�Ω|���]�w�A�Э��s�U�`�I" << endl;
    cout << "�п�J�U�`���B�]��ơ^�G";
}

void Screen::betSuccess() {
    cout << "SYS: ��`���s�U�`���\�I" << endl << endl;
}
void Screen::succeedInformation() {
    cout << "SYS: �п�J�Ʀr0�H�~��..." << endl;
}

void Screen::askContinueDraw() {
    cout << "SYS: �O�_�~���P?" << endl;
}

void Screen::winMessage() {
    cout << "SYS: �AĹ�F�I" << endl << endl;
}

void Screen::loseMessage() {
    cout << "SYS: �A��F�I" << endl << endl;
}

void Screen::tieMessage() {
    cout << "SYS: ����I" << endl << endl;
}

void Screen::gameOverMessage() {
    cout << "SYS: �A�}���F�A�C�������I" << endl;
    cout << "SYS: ���ҹC�������H�}�l�s�C���I" << endl << endl;
}

void Screen::seperationLine() {
    cout << "= = = = = = = = = = = = = = = = = = = =" << endl << endl;
}

void Screen::clear() {
    system("cls");
}