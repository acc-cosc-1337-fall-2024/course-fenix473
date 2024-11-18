//h

#define tic_tac_toe_manager_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include <memory>

class TicTacToeManager {
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(std::string vinner);

public:
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_totals(int& ,int& ,int&);
    void display_games();
};
