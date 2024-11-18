//h

#ifndef tic_tac_toe_3_h
#define tic_tac_toe_3_h

#include "tic_tac_toe.h"

class TicTacToe3: public TicTacToe
{
    public:
        TicTacToe3() : TicTacToe(3) {}

    private:
        bool check_column_win() override;
        bool check_diagonal_win() override;
        bool check_row_win() override;
};
#endif