#pragma once
#include <string>

class Player
{
public:
    Player();
    void ChangePlayer();
    char GetMark();
    void SetMark(char mark);
    char (*GetMatrix())[3];
    void SetMatrix(char matrix[3][3]);
    void Play(char matrix[3][3], char mark, char position);
private:
    char _matrix[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'}
    };;
    char _mark = 'X';
};