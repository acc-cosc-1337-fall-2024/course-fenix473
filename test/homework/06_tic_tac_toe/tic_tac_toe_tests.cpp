#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_winner function") {
   TicTacToeManager manager;  // Create manager
   TicTacToe game;
   game.start_game("x");
   
   game.mark_board(1); // x
   game.mark_board(2); // o
   game.mark_board(4); // x
   game.mark_board(3); // o
   game.mark_board(7); // x wins
   
   manager.save_game(game);  // Save game to manager.

   int o, x, t;
   manager.get_winner_totals(x, o, t); // call the manager data.
   REQUIRE(x == 1);  // We check for the win through the manager.
   REQUIRE(o == 0);
   REQUIRE(t == 0);
}

TEST_CASE("Test TicTacToeManager tallies") {
    TicTacToeManager manager;
    
    // Game 1 - X wins
    TicTacToe game1;
    game1.start_game("x");
    game1.mark_board(1); // x
    game1.mark_board(4); // o
    game1.mark_board(2); // x
    game1.mark_board(5); // o
    game1.mark_board(3); // x wins
    manager.save_game(game1);
    
    int o, x, t;
    manager.get_winner_totals(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);

    // Game 2 - O wins
    TicTacToe game2;
    game2.start_game("o");
    game2.mark_board(1); // o
    game2.mark_board(4); // x
    game2.mark_board(2); // o
    game2.mark_board(5); // x
    game2.mark_board(3); // o
    manager.save_game(game2);
    
    manager.get_winner_totals(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1); // o wins
    REQUIRE(t == 0);

    // Game 3 - Tie
    TicTacToe game3;
    game3.start_game("x");
    game3.mark_board(1); // x
    game3.mark_board(2); // o
    game3.mark_board(5); // x
    game3.mark_board(3); // o
    game3.mark_board(6); // x
    game3.mark_board(4); // o
    game3.mark_board(7); // x
    game3.mark_board(9); // o
    game3.mark_board(8); // x
    manager.save_game(game3);

    manager.get_winner_totals(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1); // tie
}

// TEST_CASE("Checking the game!"){
// 	TicTacToe Game;
// 	Game.start_game("x");

// 	Game.mark_board(1);
// 	REQUIRE(Game.get_current_player() == "o");

// 	Game.mark_board(2);
// 	REQUIRE(Game.get_current_player() == "x");

// 	Game.mark_board(3);
// 	REQUIRE(Game.get_current_player() == "o");

// 	Game.mark_board(5);
// 	REQUIRE(Game.get_current_player() == "x");

// 	Game.mark_board(6);
// 	REQUIRE(Game.get_current_player() == "o");

// 	Game.mark_board(7);
// 	REQUIRE(Game.get_current_player() == "x"); 

// 	Game.mark_board(8);
// 	REQUIRE(Game.get_current_player() == "o");

// 	Game.mark_board(9);
// 	REQUIRE(Game.get_current_player() == "x");

// 	// Last move, should end the game.
// 	// Here's logic, each turn player changes. Pass means game continues. Except after game over Player is set to None. That is what we check for end of the game!
// 	Game.mark_board(4);
// 	REQUIRE(Game.get_current_player() == "C");

// }

// TEST_CASE("Test first player X") {
//     TicTacToe game;
//     game.start_game("x");
// 	game.mark_board(1);
//     REQUIRE(game.get_current_player() == "o");
// }

// TEST_CASE("Test first player O") {
//     TicTacToe game; 
//     game.start_game("o");
// 	game.mark_board(1);
//     REQUIRE(game.get_current_player() == "x");
// }

// TEST_CASE("Win by first column") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(1); // X
// 	game.mark_board(2); // O
// 	game.mark_board(4); // X 
// 	game.mark_board(3); // O
// 	game.mark_board(7); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win by second column") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(2); // X
// 	game.mark_board(1); // O
// 	game.mark_board(5); // X
// 	game.mark_board(3); // O
// 	game.mark_board(8); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win by third column") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(3); // X
// 	game.mark_board(1); // O
// 	game.mark_board(6); // X
// 	game.mark_board(2); // O
// 	game.mark_board(9); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win by first row") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(1); // X
// 	game.mark_board(4); // O
// 	game.mark_board(2); // X
// 	game.mark_board(5); // O
// 	game.mark_board(3); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win by second row") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(4); // X
// 	game.mark_board(1); // O
// 	game.mark_board(5); // X
// 	game.mark_board(2); // O
// 	game.mark_board(6); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win by third row") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(7); // X
// 	game.mark_board(1); // O
// 	game.mark_board(8); // X
// 	game.mark_board(2); // O
// 	game.mark_board(9); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win diagonally top left") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(1); // X
// 	game.mark_board(2); // O
// 	game.mark_board(5); // X
// 	game.mark_board(3); // O
// 	game.mark_board(9); // X
// 	REQUIRE(game.game_over() == true);
// }

// TEST_CASE("Win diagonally bottom left") {
// 	TicTacToe game;
// 	game.start_game("x");
// 	game.mark_board(7); // X
// 	game.mark_board(1); // O
// 	game.mark_board(5); // X
// 	game.mark_board(2); // O
// 	game.mark_board(3); // X
// 	REQUIRE(game.game_over() == true);
// }