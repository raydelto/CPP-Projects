#include "Validator.h"
#include <iostream>

Validator::Validator()
{
    
}

void Validator::SetMark(char mark)
{
    Validator::_mark = mark;
};

char Validator::GetMark()
{
    return Validator::_mark;
};

void Validator::SetMatrix(char matrix[3][3])
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };
};

char (*Validator::GetMatrix())[3]
{
    return _matrix;
};

bool Validator::Validate(char matrix[3][3], char mark)
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };

    _mark = mark;
    return Validator::ValidateFirstDiagonal() || Validator::ValidateSecondDiagonal() || Validator::ValidateVertical() || Validator::ValidateHorizontal() ? true : false;
}

bool Validator::ValidateFirstDiagonal()
{
    Validator::_cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                _matrix[i][j] == _mark ? _cnt++ : _cnt;  
            }
        };
    };
    //std::cout << "Conteo en validacion diagonal 1: " << _cnt << std::endl;
    return _cnt == 3;

}

bool Validator::ValidateSecondDiagonal()
{
    Validator::_cnt = 0;
    for (int i = 0; i < 3; i++)
	{
		for (int j = 2; j > -1; j--)
		{
            if((i+j) == 2)
            {
				_matrix[i][j] == _mark ? _cnt++ : _cnt;
			}
		};
	};
    //std::cout << "Conteo en validacion diagonal 2: " << _cnt << std::endl;
	return _cnt == 3;
}

bool Validator::ValidateVertical()
{
    Validator::_cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            _matrix[j][i] == _mark ? _cnt++ : _cnt;  
        };
        //std::cout << "Conteo en validacion vertical: " << _cnt << std::endl;
        if(_cnt == 3){ return true; }else { continue; };
    };
    return false;
}

bool Validator::ValidateHorizontal()
{
    Validator::_cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            _matrix[i][j] == _mark ? _cnt++ : _cnt;  
        };
        //std::cout << "Conteo en validacion horizontal: " << _cnt << std::endl;
        if(_cnt == 3){ return true; }else { continue; };
    };
    return false;
}