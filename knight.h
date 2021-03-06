#ifndef KNIGHT_H
#define KNIGHT_H

#include "piece.h"

class Knight : public Piece
{
    Piece_type _type;

public:
    Knight(Piece_color icolor) : Piece(icolor), _type(Piece_type::KNIGHT) {}

    virtual void move(Piece_coords icoords);
    virtual bool is_move_correct(Piece_coords icoords);
    virtual Piece_type get_type();
};

#endif // KNIGHT_H
