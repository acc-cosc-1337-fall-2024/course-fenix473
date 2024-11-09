//cpp

#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe game){
    games.push_back(game);
    update_winner_count(game.get_winner);
    // We don't have clear winner determiner lol
}