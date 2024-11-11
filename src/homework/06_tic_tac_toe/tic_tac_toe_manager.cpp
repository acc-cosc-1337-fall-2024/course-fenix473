//cpp

#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe game){
    games.push_back(game);
    update_winner_count(game.get_winner());
    // We don't have clear winner determiner lol
}
#include <iostream>;
using std::cout;
    
void TicTacToeManager::update_winner_count(std::string winner){
    cout << "Debug - Winner is: " << winner << "\n"; // temp
    if (winner == "X" || winner == "x"){
        x_win ++;
    }

    else if (winner == "O" || winner == "o"){
        o_win ++;
    }

    else if (winner == "C" || winner == "c"){
        ties ++;
    }
}

void TicTacToeManager::get_winner_totals(int& o, int& w, int& t){
    o = o_win;
    w = x_win;
    t = ties;
}