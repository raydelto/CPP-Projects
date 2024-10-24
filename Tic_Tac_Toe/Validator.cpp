#include "Validator.h"
#include <iostream>

/*
Implementation of the class validator
*/

Validator::Validator() //Implementation of the base constructor
{
    
}

void Validator::SetMark(char mark) //Implementation of the mark setter
{
    Validator::_mark = mark;
};

char Validator::GetMark() //Implementation of the mark getter
{
    return Validator::_mark;
};

void Validator::SetMatrix(char matrix[3][3]) //Implementation of the matrix setter
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };
};

char (*Validator::GetMatrix())[3] //Implementation of the matrix getter
{
    return _matrix;
};

bool Validator::Validate(char matrix[3][3], char mark)
{
    //Loop to asign to the _matrix property the values in the matrix parameter
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            _matrix[i][j] = matrix[i][j];
        };
    };

    _mark = mark; //Asign to the _mark property the value of the mark parameter

    //Validate the whole board
    return Validator::ValidateFirstDiagonal() || Validator::ValidateSecondDiagonal() || Validator::ValidateVertical() || Validator::ValidateHorizontal() ? true : false;
}

bool Validator::ValidateFirstDiagonal()
{
    Validator::_cnt = 0; //Initialize counter of marks in-line.

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j) 
            {
                //if it find a match in that position whit the mark it add a point to the counter
                _matrix[i][j] == _mark ? _cnt++ : _cnt;  
            }
        };
    };
    //if the counter got 3 in-line it return true
    return _cnt == 3;

}

bool Validator::ValidateSecondDiagonal()
{
    Validator::_cnt = 0; //Initialize counter of marks in-line.

    for (int i = 0; i < 3; i++)
	{
		for (int j = 2; j > -1; j--)
		{
            if((i+j) == 2)
            {
                //if it find a match in that position whit the mark it add a point to the counter
				_matrix[i][j] == _mark ? _cnt++ : _cnt;
			}
		};
	};
    //if the counter got 3 in-line it return true
	return _cnt == 3;
}

bool Validator::ValidateVertical()
{
    Validator::_cnt = 0; //Initialize counter of marks in-line.

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            /*if it find a match in that position whit the mark it add a point to the counter
            in this case it invert the positions of j and i to evaluate first the columns 
            */
            _matrix[j][i] == _mark ? _cnt++ : _cnt;  
        };
        //if the counter got 3 in-line it return three.
        if(_cnt == 3){ return true; }else { _cnt = 0; };
    };
    return false;
}

bool Validator::ValidateHorizontal()
{
    Validator::_cnt = 0; //Initialize counter of marks in-line.

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            //if it find a match in that position whit the mark it add a point to the counter
            _matrix[i][j] == _mark ? _cnt++ : _cnt;  
        };
        //if the counter got 3 in-line it return three.
        if(_cnt == 3){ return true; }else { _cnt = 0; };
    };
    return false;
}