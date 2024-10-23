#pragma once
#include <string>

class Player
{
public:
    Player();
    void ChangePlayer();
    char GetMark();
    void SetMark(char mark);
    std::string (*GetMatrix())[3];
    void SetMatrix(std::string matrix[3][3]);
    void Play(std::string matrix[3][3], char mark, char position);
private:
    std::string _matrix[3][3];
    char _mark = 'X';
};