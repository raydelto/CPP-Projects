#include "Player.h"
#include <iostream>

/*
I could avoid the use of the macros but for study reasons 
i decide to implement the macros usage
*/

#define Q matrix[0][0]
#define W matrix[0][1]
#define E matrix[0][2]
#define R matrix[1][0]
#define T matrix[1][1]
#define Y matrix[1][2]
#define U matrix[2][0]
#define I matrix[2][1]
#define O matrix[2][2]

Player::Player() //Implementation of the base constructor
{

};

void Player::SetMark(char mark) //Implementation of the mark setter
{
    Player::_mark = mark;
};

char Player::GetMark() //Implementation of the mark getter
{
    return _mark;
};

void Player::SetMatrix(char matrix[3][3]) //Implementation of the matrix setter
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };
};

char (*Player::GetMatrix())[3] //Implementation of the matrix getter
{
    return _matrix;
};

void Player::ChangePlayer() //Method to turn the players shifts
{
    //Evaluate if the current player is 'X' if so set the mark whit 'O' otherwise set the mark in 'X'
    GetMark() == 'X' ? SetMark('O') : SetMark('X');

    //shows in the terminal the current player
    std::cout << "Es el turno del jugador " << GetMark() << std::endl;
};

void Player::Play(char matrix[3][3], char mark, char position)
{
    //This switch evaluate the character that represents a box in the board
    switch (position)
    {
    case 'Q': 
            //It check out if that box is empty if it is not it sends a message
            if(Q == '_')
            {
                Q = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'W':
            //It check out if that box is empty if it is not it sends a message
            if(W == '_')
            {
                W = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'E':
            //It check out if that box is empty if it is not it sends a message
            if(E == '_')
            {
                E = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'R':
            //It check out if that box is empty if it is not it sends a message
            if(R == '_')
            {
                R = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'T':
            //It check out if that box is empty if it is not it sends a message
            if(T == '_')
            {   
                T = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'Y':
            //It check out if that box is empty if it is not it sends a message
            if(Y == '_')
            {
                Y = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'U':
            //It check out if that box is empty if it is not it sends a message
            if(U == '_')
            {
                U = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'I':
            //It check out if that box is empty if it is not it sends a message
            if(I == '_')
            {
                I = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    case 'O':
            //It check out if that box is empty if it is not it sends a message
            if(O == '_')
            {
                O = GetMark(); //It put the mark of the current player in the box
                SetMatrix(matrix); //It updates the board
            }
            else
            {
                std::cout << "La posicion ya fue marcada." << std::endl;
            };
        break;
    
    default:
            std::cout << "Ingrese una posicion valida." << std::endl;
        break;
    };
};