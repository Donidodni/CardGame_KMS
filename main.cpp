#include <iostream>
#include "header.h"
using namespace std;

const char* arr_shapes[] = { "Clover", "Spade", "Diamond", "Heart" };
Game game;

/*
�޸� : �и��ϴµ��� �ϼ��Ͽ�����,
Ŭ������ �����ϰ� ī��� 8������ �ۿ� ���� ���մϴ�.
�׷��� �ּ��� ��ɸ�ŭ�� �����մϴ�. (�ٸ� ī�� ������ �� �� �ܾ �Է½� ���ѷ��� �߻�)
�׸��� ��� ī�� 1�� �޴� ������ ī�� ���� ���� �ذ��Ͽ����ϴ�.
*/

void main_menu() {
	cout << "========================" << endl;
	cout << "1.��� ī�带 �����ݴϴ�." << endl;
	cout << "2.ī�带 �����ϴ�. " << endl;
	cout << "3.ī�带 �̽��ϴ�." << endl;
	cout << "4.�����ϰ� ī�带 �̽��ϴ�." << endl;
	cout << "q�� Q�� ������ �����մϴ�." << endl;
	cout << "========================" << endl;
};


void run_menu(char str) {
	switch (str) {
	case '1':
		game.game_menu1();
		break;
	case '2':
		game.game_menu2(game.arr);
		break;
	case '3':
		game.game_menu3(game.arr);
		break;
	case '4':
		game.game_menu4();
		break;
	case 'q':
	case 'Q':
		cout << "�����մϴ�.."<<endl;
		break;
	default:
		cout << "�߸� �Է��ϼ̽��ϴ�."<<endl;
	}
}

void menu_select() {
	char select = NULL;

	do {
		main_menu();
		cin >> select;
		run_menu(select);

	} while (select != 'Q' && select != 'q');
}


int main() {
	menu_select();

	return 0;
}