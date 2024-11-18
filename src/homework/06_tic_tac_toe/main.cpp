#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include<memory>
#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;

int main() {
	TicTacToeManager manager;
	string play = "Y";

	while (play == "Y" || play == "y"){
		std::unique_ptr<TicTacToe> game;
		int game_type;
		
		cout << "3x3 or 4x4? 3/4.\n";
		cin >> game_type;

		if (game_type == 3){
			game = std::make_unique<TicTacToe3>();
		}
		else if (game_type == 4) {
			game = std::make_unique<TicTacToe4>();
		}

		string first_player = game -> get_player();
		game -> start_game(first_player);

		int position;
		do {
			cout << "Enter position from 1-9: ";
			cin >> position;
			game -> mark_board(position);
		} while (!game -> game_over());
		manager.save_game(game);

	int o, x, t;

	manager.get_winner_totals(o, x, t);
	cout << "\nGame History:\n";
	cout << "X wins: " << x;
	cout << "O wins: " << o;
	cout << "Ties: " << t;
	cout << "Play again? (y/n)";
	cin >> play;

	}
	
	return 0;
};
// {
// 	TicTacToe game;

// 	int position;
// 	string asker;
// 	asker = "y";
	
// 	while (asker == "y"){

// 		string first_player = game.get_player();
// 		game.start_game(first_player);

// 		do {
// 			cout << "enter position 1-9";
// 			cin >> position;
// 			game.mark_board(position);
// 		} while (!game.game_over());
// 	cout << "Do you want to play the game again? y/n\n";
// 	cin >> asker;
// 	}
// 	return 0;
// }