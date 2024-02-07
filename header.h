#pragma once

class Game {
protected:

public :
	int arr[52] = {};
	Game();
	~Game();

public:
	void game_menu1()const;
	void game_menu2(int arr[])const;
	void game_menu3(int arr[])const;
	void game_menu4()const;
	int num_choice(int num) const;

};

