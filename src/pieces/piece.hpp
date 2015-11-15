#ifndef PIECE_HPP
#define PIECE_HPP

enum rotationState
{
    START,
    CW90,
    CW180,
    CW270,
    CCW90,
    CCW180,
    CCW270
};

enum blockState
{
    FULL,
    FREE,
};

class Piece
{
    protected:
        int _x;
        int _y;
        rotationState _currState; 
        Piece(int x, int y);
        virtual void rotateFSM(void) = 0;
        virtual blockState* getPiece(void) = 0;

    public:
        int getX(void);
        int getY(void);
        void setX(int x);
        void setY(int y);
        virtual void rotate_cw(void) = 0;
};
#endif
