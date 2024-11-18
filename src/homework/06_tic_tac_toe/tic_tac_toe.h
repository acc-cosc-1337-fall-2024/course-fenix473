//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class TicTacToe {
public:
    TicTacToe(int s) : pegs(s * s, " ") {}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string const get_player();
    void const display_board();
    string const get_current_player() const { return player; }
    string get_winner() const { return winner;}

protected:
    vector<string> pegs;
    virtual bool check_column_win() = 0;
    virtual bool check_diagonal_win() = 0;
    virtual bool check_row_win() = 0;
    

private:
    string player;
    string winner;
    
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();

};

#endif