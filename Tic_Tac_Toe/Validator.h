#pragma once
#include <string>

class Validator
{
public: 
    Validator();
    bool Validate(std::string matrix[3][3], std::string mark);
    std::string GetMark();
    void SetMark(std::string mark);
    std::string (*GetMatrix())[3];
    void SetMatrix(std::string matrix[3][3]);
    bool ValidateFirstDiagonal();
    int _cnt;//Counter
private:
    bool ValidateSecondDiagonal();
    bool ValidateHorizontal();
    bool ValidateVertical();
    std::string _matrix[3][3];
    std::string _mark;
};