#include "Validator.h"
#include <iostream>

Validator::Validator()
{
    
}

void Validator::SetMark(std::string mark)
{
    Validator::_mark = mark;
};

std::string Validator::GetMark()
{
    return Validator::_mark;
};

void Validator::SetMatrix(std::string matrix[3][3])
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };
};

std::string (*Validator::GetMatrix())[3]
{
    return _matrix;
};

bool Validator::Validate(std::string matrix[3][3], std::string mark)
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
                //std::cout <<_matrix[i][j] << std::endl;
                _cnt = _matrix[i][j] == _mark ? _cnt++ : _cnt;  
            }
        };
    };
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
                std::cout <<_matrix[i][j] << std::endl;
				_cnt = _matrix[i][j] == _mark ? _cnt++ : _cnt;
			}
		};
	};
	return _cnt == 3;
}

bool Validator::ValidateVertical()
{
    Validator::_cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            _cnt = _matrix[j][i] == _mark ? _cnt++ : _cnt;  
        };

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
            _cnt = _matrix[i][j] == _mark ? _cnt++ : _cnt;  
        };
        
        if(_cnt == 3){ return true; }else { continue; };
    };
    return false;
}