#include <iostream>
#include "j_piece.hpp"

J_Piece::J_Piece(int x, int y):Piece(x, y)
{
    loadPieceArrays();
/*
    rotations[4] =  
        {_start_array, _cw90_array, _cw180_array, _cw270_array};
        */
}

void Piece::toString(void)
{
    /*
    const BlockState **array = rotations[_currState];

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (array[y][x] == FREE)
                std::cout << "0";
            if (array[y][x] == FULL)
                std::cout << "X";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    */
}

void J_Piece::loadPieceArrays(void)
{
    static const BlockState _start_array[4][4] = 
    {
        {FREE, FULL, FREE, FREE},
        {FREE, FULL, FREE, FREE},
        {FREE, FULL, FULL, FREE}, 
        {FREE, FREE, FREE, FREE}
    };

    static const BlockState _cw90_array[4][4] = 
    {
        {FREE, FREE, FREE, FREE},
        {FREE, FULL, FULL, FULL},
        {FREE, FULL, FREE, FREE},
        {FREE, FREE, FREE, FREE},
    };

    static const BlockState _cw180_array[4][4] = 
    {
        {FREE, FULL, FULL, FREE},
        {FREE, FREE, FULL, FREE},
        {FREE, FREE, FULL, FREE},
        {FREE, FREE, FREE, FREE},
    };

    static const BlockState _cw270_array[4][4] =
    {
        {FREE, FREE, FREE, FULL},
        {FREE, FULL, FULL, FULL},
        {FREE, FREE, FREE, FREE},
        {FREE, FREE, FREE, FREE},
    };
}
