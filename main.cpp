#include <iostream>
#include "Validator.h"
#include "Player.h"

int main()
{
    Validator _validator;
    Player _player;

    std::string board[3][3] = {
        {"1","2","3"},
        {"4","5","6"},
        {"7","8","9"}
    };

    _player.Play(board, 'X', 'Q');

}