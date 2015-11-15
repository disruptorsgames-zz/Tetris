#include "piece.hpp"

int Piece::getX(void) { return _x; }

int Piece::getY(void) { return _x; }

void Piece::setX(int x) { _x = x; }

void Piece::setY(int y) { _y = y; }

Piece::Piece(void)
{
    _x = 0;
    _y = 0;
    _currState = START;
}

Piece::Piece(int x, int y)
{
    _x = x;
    _y = y;
    _currState = START;
}

