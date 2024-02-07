#include <iostream>
#include "header.h"
using namespace std;

const char* arr_shapes[] = { "Clover", "Spade", "Diamond", "Heart" };
Game game;

/*
메모 : 분리하는데는 완성하였으나,
클래스는 조잡하고 카드는 8개까지 밖에 섞질 못합니다.
그래도 최소한 기능만큼은 동작합니다. (다만 카드 뽑을때 그 외 단어를 입력시 무한루프 발생)
그리고 모든 카드 1번 메뉴 진입후 카드 범위 문제 해결하였습니다.
*/

void main_menu() {
	cout << "========================" << endl;
	cout << "1.모든 카드를 보여줍니다." << endl;
	cout << "2.카드를 섞습니다. " << endl;
	cout << "3.카드를 뽑습니다." << endl;
	cout << "4.랜덤하게 카드를 뽑습니다." << endl;
	cout << "q나 Q를 누르면 종료합니다." << endl;
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
		cout << "종료합니다.."<<endl;
		break;
	default:
		cout << "잘못 입력하셨습니다."<<endl;
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