#include "Player.h"
#include <iostream>

#define Q matrix[0][0]
#define W matrix[0][1]
#define E matrix[0][2]
#define R matrix[1][0]
#define T matrix[1][1]
#define Y matrix[1][2]
#define U matrix[2][0]
#define I matrix[2][1]
#define O matrix[2][2]

Player::Player()
{

};

void Player::SetMark(char mark)
{
    Player::_mark = mark;
};

char Player::GetMark()
{
    return _mark;
};

void Player::SetMatrix(char matrix[3][3])
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };
};

char (*Player::GetMatrix())[3]
{
    return _matrix;
};

void Player::ChangePlayer()
{
    GetMark() == 'X' ? SetMark('O') : SetMark('X');

    std::cout << "Es el turno del jugador " << GetMark() << std::endl;
};

void Player::Play(char matrix[3][3], char mark, char position)
{
    switch (position)
    {
    case 'Q':
            if(Q == '_')
            {
                //std::cout << Q << std::endl;
                Q = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'W':
            if(W == '_')
            {
                W = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'E':
            if(E == '_')
            {
                E = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'R':
            if(R == '_')
            {
                R = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'T':
            if(T == '_')
            {   
                T = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'Y':
            if(Y == '_')
            {
                Y = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'U':
            if(U == '_')
            {
                U = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'I':
            if(I == '_')
            {
                I = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'O':
            if(O == '_')
            {
                O = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    
    default:
            std::cout << "Ingrese una posicion valida." << std::endl;
        break;
    };
};