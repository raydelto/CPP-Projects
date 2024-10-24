#pragma once
#include <string>

/*
Class to draw in the terminal
*/

class Drawer
{
public:
    Drawer(); //Class base constructor
    void DrawInstructions(); //Method to draw to the instructions of the game
    void DrawBoard(); //Method to draw the game board
    void UpdateBoard(char matrix[3][3]); //Method to draw the game board whit a new mark
private:
};