#include <iostream>
#include "header.h"
using namespace std;

Game::Game() {
	int arr[52] = {};
}
Game::~Game() {

}

string shape_choice(int num) {
	const char* arr_shapes[] = { "Clover", "Spade", "Diamond", "Heart" };
	if (num < 13)
		return arr_shapes[0];
	else if (num >= 13 && num < 26)
		return arr_shapes[1];
	else if (num >= 26 && num < 39)
		return arr_shapes[2];
	else if (num >= 39 && num < 52)
		return arr_shapes[3];
}
int Game::num_choice(int num)const {
	if (num < 13) {
		return num + 1;
	}
	else if (num >= 13 && num < 26) {
		return num - 12;
	}
	else if (num >= 26 && num < 39) {
		return num - 25;
	}
	else if (num >= 39 && num < 52) {
		return  num - 38;
	}
}

void Game::game_menu1()const {
	for (int i = 0; i < 52; i++) {
		cout << "카드 모양 : " << shape_choice(i) << " 카드 번호 : " << num_choice(i) << endl;
	}
}
void Game::game_menu2(int arr[]) const {
	for (int i = 0; i < sizeof(arr); i++) {
		arr[i] = (rand() % 52) + 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) i--;
		}
	}
	for (int i = 0; i < sizeof(arr); i++) {
		cout << "카드 모양 : " << shape_choice(arr[i]) << " 카드 번호 : " << num_choice(arr[i]) << endl;
	}
}
void  Game::game_menu3(int arr[])const {
	if (arr[0] == NULL) {
		cout << "아직 카드를 뽑지 않았습니다!"<<endl;
	}
	else {
		int want = 0;
		cout << "뽑고 싶은 카드의 숫자를 말하세요. 0~" << sizeof(arr) << endl;
		cin >> want;
		cout << "뽑은 카드는 " << endl;
		cout << "카드 모양 : " << shape_choice(arr[want]) << " 카드 번호 : " << num_choice(arr[want]) << endl;
	}
}
void  Game::game_menu4() const{
	int random = rand() % 53;
	cout << "뽑은 카드는 " << endl;
	cout << "카드 모양 : " << shape_choice(random) << " 카드 번호 : " << num_choice(random) << endl;
}