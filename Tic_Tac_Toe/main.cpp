#include <iostream>
#include <windows.h>
#include "Validator.h"
#include "Player.h"
#include "Drawer.h"



int main()
{
    Validator _validator;
    Player _player;
    Drawer _drawer;

    char board[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'}
    };

    _drawer.DrawInstructions();
    _drawer.DrawBoard();

    _player.SetMark('_');

    do
    {
        _player.ChangePlayer();
        char move = '_';

        std::cout << "Haga su jugada" << std::endl;
        std::cin >> move;
        _player.Play(_player.GetMatrix(), _player.GetMark(), move);
        
        system("cls");
        
        _drawer.UpdateBoard(_player.GetMatrix());

    } while (!_validator.Validate(_player.GetMatrix(), _player.GetMark()));
    
    std::cout << "Fin del juego" << std::endl;
}