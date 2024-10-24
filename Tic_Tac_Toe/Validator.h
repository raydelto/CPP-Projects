#pragma once
#include <string>

class Validator
{
public: 
    Validator();
    bool Validate(char matrix[3][3], char mark);
    char GetMark();
    void SetMark(char mark);
    char (*GetMatrix())[3];
    void SetMatrix(char matrix[3][3]);
    bool ValidateFirstDiagonal();
    int _cnt;//Counter
private:
    bool ValidateSecondDiagonal();
    bool ValidateHorizontal();
    bool ValidateVertical();
    char _matrix[3][3];
    char _mark;
};