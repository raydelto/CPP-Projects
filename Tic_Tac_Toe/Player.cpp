#include <Player.h>
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

void Player::ChangePlayer()
{
    GetMark() == 'X' ? SetMark('O') : SetMark('X');
};

void Player::Play(std::string matrix[3][3], char mark, char position)
{
    switch (position)
    {
    case 'Q':
            if(Q != "")
            {
                std::cout << Q << std::endl;
                Q = GetMark();
                SetMatrix(matrix);
            }
            else
            {
                std::cout << "La posición ya fue marcada." << std::endl;
            };
        break;
    case 'W':
            if(W != "")
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
            if(E != "")
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
            if(R != "")
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
            if(T != "")
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
            if(Y != "")
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
            if(U != "")
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
            if(I != "")
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
            if(O != "")
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
            std::cout << "Ingrese una posición valida." << std::endl;
        break;
    };
};