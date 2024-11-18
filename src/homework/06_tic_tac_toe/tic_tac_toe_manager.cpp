//cpp

#include "tic_tac_toe_manager.h"
#include <memory>


#include <iostream>
using std::cout;
 
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game) {
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
    // We don't have clear winner determiner lol
}

void TicTacToeManager::display_games() {
    for(auto& game : games) {
        (*game).display_board();
        cout << "\n";
    }
}

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