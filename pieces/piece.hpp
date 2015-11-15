#ifndef PIECE_HPP
#define PIECE_HPP

#include "enums.hpp"

class Piece
{
    protected:
        int _x;
        int _y;
        RotationState _currState; 
        Piece(void);
        Piece(int x, int y);
        virtual void rotateFSM(void) = 0;
        virtual BlockState* getPiece(void) = 0;
        virtual void loadPieceArrays(void) = 0;

    public:
        int getX(void);
        int getY(void);
        void setX(int x);
        void setY(int y);
        virtual void rotate_cw(void) = 0;
        void toString(void);
};
#endif
