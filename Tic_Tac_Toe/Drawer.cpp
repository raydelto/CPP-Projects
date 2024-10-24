#include "Drawer.h"
#include <iostream>

Drawer::Drawer()
{

};

void Drawer::DrawBoard()
{
    std::cout << "" << std::endl;
    std::cout <<  "                                |   |                                  " << std::endl;
    std::cout <<  "                             -----------                               " << std::endl;
    std::cout <<  "                                |   |                                  " << std::endl;
    std::cout <<  "                             -----------                               " << std::endl;
    std::cout <<  "                                |   |                                  " << std::endl;
    std::cout << "" << std::endl;
};

void Drawer::DrawInstructions()
{
    std::cout << "Bienvenido al TIC TAC TOE, a continuacion se mostraran las instrucciones." << std::endl;
    std::cout << "Para facilitar la jugabilidad cada una de las letras represanta un espacio en casilla " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "                                Q | W | E                                " << std::endl;
    std::cout << "                               -----------                               " << std::endl;
    std::cout << "                                R | T | Y                                " << std::endl;
    std::cout << "                               -----------                               " << std::endl;
    std::cout << "                                U | I | O                                " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Para colocar su marca en la casilla deseada, ingrese la letra correspondiente a dicha casilla" << std::endl;
};

void Drawer::UpdateBoard(char matrix[3][3])
{
    std::cout << "" << std::endl;
    std::cout << "                               " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << "                                 " << std::endl;
    std::cout << "                               -----------                               " << std::endl;
    std::cout << "                               " << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2] << "                                 " << std::endl;
    std::cout << "                               -----------                               " << std::endl;
    std::cout << "                               " << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2] << "                                 " << std::endl;
    std::cout << "" << std::endl;
};