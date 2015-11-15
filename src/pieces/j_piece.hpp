#ifndef J_PIECE_HPP
#define J_PIECE_HPP

#include "piece.hpp"

class J_Piece: public Piece
{
    private:
        static const BlockState _start_array[4][4];
        static const BlockState _cw90_array[4][4];
        static const BlockState _cw180_array[4][4];
        static const BlockState _cw270_array[4][4];
        static const BlockState (*rotations[])[4]; 

        void loadPieceArrays(void);

    public:
        J_Piece(int x, int y);
};

#endif
