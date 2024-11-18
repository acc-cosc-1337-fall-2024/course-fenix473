//cpp

//cpp
#include"tic_tac_toe.h"
#include<string>
#include<iostream>
#include<vector>
        
        
using std::vector;
using std::string;
using std::cout;
using std::cin;


bool TicTacToe::game_over(){
    
//     for (int i = 0; i < 9; i += 3){
//         if(pegs[i] != " " &&
//         pegs[i] == pegs[i+1]&&
//         pegs[i] == pegs[i+2]){
//         player = "None";
//         cout << player << " Wins!\n";        
//         return true;}
//     }
        
//     for (int i = 0; i < 3; i ++){
//         if(pegs[i] != " " &&
//         pegs[i] == pegs[i+3]&&
//         pegs[i] == pegs[i+6]){
//         player = "None";
//         cout << player << " Wins!\n";
//         return true;}
//     }

//     if(pegs[0] != " " &&
//         pegs[0] == pegs[4]&&
//         pegs[4] == pegs[8]){
//         player = "None";
//         cout << player << " Wins!\n";
//         return true;}

//     if(pegs[2] != " " &&
//         pegs[2] == pegs[4]&&
//         pegs[4] == pegs[6]){
//         player = "None";
//         cout << player << " Wins!\n";
//         return true;}
    
//     if(check_board_full()) {
//        cout << "Draw!\n";
//        player = "None";
//        return true;
//    }

    if(check_row_win()) {
        set_winner();
        return true;
    }
    
    if(check_column_win()) {
        set_winner(); 
        return true;
    }
    
    if(check_diagonal_win()) {
        set_winner();
        return true;
    }
   
    if(check_board_full()) {
        winner = "C";
        return true;
   }

    return false;
}

void TicTacToe::start_game(string first_player){
    player = first_player;
    winner = "";
    clear_board();
    display_board();
}

void TicTacToe::mark_board(int position){
    // add max size

    int max_position = pegs.size();

    if (position < 1 || position > max_position){
        cout << "Invalid position, only between 1 and" << max_position << "!";
        return;
    }
    
    if (pegs[position-1] != " ") {
        cout << "Position already taken";
        return;
    }

    pegs[position-1] = player;
    display_board();
    if(!game_over()){
        set_next_player();
    }

}

string const TicTacToe::get_player(){
    // CONST
    string first_player = "None";
    cout << "Please select fist player. First player is x or o. Second player auto O.\n";
    cin >> first_player;
    return first_player;
}

#include<cmath>
void const TicTacToe::display_board() {
    int size = sqrt(pegs.size());  
    for(int i = 0; i < pegs.size(); i += size) {

        for(int j = 0; j < size - 1; j++) {
            cout << pegs[i + j] << "|";
        }
        cout << pegs[i + size - 1] << "\n";


        if(i < pegs.size() - size) {
            for(int j = 0; j < size - 1; j++) {
                cout << "-+";
            }
            cout << "-\n";
        }
    }
}

void TicTacToe::set_next_player(){
    
    if (player == "x") {
        player = "o";
    }
    else {
        player = "x";
    }
}

bool TicTacToe::check_board_full(){
    for(int i = 0; i < pegs.size(); i++)
    // altering to pegs.size to accomodate for new functionality.
    {
        if (pegs[i] == " "){
            return false;
        
        }
    }
    return true;
}

bool TicTacToe::check_column_win(){
    return false;
}

bool TicTacToe::check_diagonal_win(){
    return false;
}

bool TicTacToe::check_row_win(){
    return false;
}

void TicTacToe::set_winner(){
    if (player == "x") {
        winner = "o";
    }
    else {
        winner = "x";
    }
}

void TicTacToe::clear_board(){
    for(int i = 0; i < 9; i++) {
        pegs[i] = " ";
    }
}