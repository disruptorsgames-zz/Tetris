#include "j_piece.hpp"

int main(int, char**)
{

    J_Piece j;

    Piece* p = &j;

    p->toString();

    return 0;
}
