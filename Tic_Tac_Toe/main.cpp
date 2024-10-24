#include <iostream>
#include <windows.h>
#include "Validator.h"
#include "Player.h"
#include "Drawer.h"



int main()
{
    //Create a instance of each of my classes
    Validator _validator; //Validator instance
    Player _player; //Player instance
    Drawer _drawer; //Drawer instance

    _drawer.DrawInstructions(); //Draw instructions
    _drawer.DrawBoard(); //Draw the board

    _player.SetMark('_'); //Define the mark like '_'

    do //Create a do-while loop
    {
        _player.ChangePlayer(); //Change the player to asign the first player a mark
        char move = '_'; //Define variable move that store the players "move"

        std::cout << "Haga su jugada" << std::endl;
        std::cin >> move; //Store the players move in the "move" variable

        _player.Play(_player.GetMatrix(), _player.GetMark(), move); //Play
        
        system("cls"); //clear the terminal behind
        
        _drawer.UpdateBoard(_player.GetMatrix()); //Update the board

    } while (!_validator.Validate(_player.GetMatrix(), _player.GetMark())); //Validate if theres a winner
    
    std::cout << "Fin del juego el ganador es " << _player.GetMark() << std::endl; //Proclaim the winner
}