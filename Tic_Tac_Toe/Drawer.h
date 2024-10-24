#pragma once
#include <string>

class Drawer
{
public:
    Drawer();
    void DrawInstructions();
    void DrawBoard();
    void UpdateBoard(char matrix[3][3]);
private:
};