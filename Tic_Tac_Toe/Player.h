#pragma once
#include <string>

/*
Class to store the information of the game and 
manage the players.
*/

class Player
{
public:
    Player(); //Class base constructor
    void ChangePlayer(); //Method to turn the shifts of the players
    char GetMark(); //Mark getter
    void SetMark(char mark); //Mark setter
    char (*GetMatrix())[3]; //Matrix getter
    void SetMatrix(char matrix[3][3]); //Matrix setter
    void Play(char matrix[3][3], char mark, char position); //Method to mark the boxes of the board
private:
    char _matrix[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'}
    };; //Initialize the board
    char _mark = 'X'; //Initialize the mark player
};