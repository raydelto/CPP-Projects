#pragma once
#include <string>

/*
Class to validate the board of the game.
*/
class Validator
{
public: 
    Validator(); //Class base constructor
    bool Validate(char matrix[3][3], char mark); //Method to validate the whole board
    char GetMark(); //Mark getter
    void SetMark(char mark); //Mark setter
    char (*GetMatrix())[3]; //Matrix getter
    void SetMatrix(char matrix[3][3]); //Matrix setter
    bool ValidateFirstDiagonal(); //Method to validate the first diagonal of the tridimensional matrix
    int _cnt; //Counter
private:
    bool ValidateSecondDiagonal(); //Method to validate the second diagonal of the tridimensional matrix
    bool ValidateHorizontal(); //Method to validate the rows of the tridimensional matrix
    bool ValidateVertical(); //Method to validate the columns of the tridimensional matrix
    char _matrix[3][3]; //Board matrix
    char _mark; //Game mark
};