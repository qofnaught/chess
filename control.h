#ifndef CONTROL_H
#define CONTROL_H

//controls of the game

#include "types.h"
#include "console.h"

#include <string>
#include <limits>
#include <conio.h>

using namespace std;

class Control : virtual public Console
{
public:
    Control();
    Piece_coords choose_piece(); //make a choose of the first field where a piece is
    Piece_coords choose_field(); //make a choose of the second field where a previously chosen piece will be moved
    Piece_type exchange_piece(); //choose piece that will be exchanged for pawn in pawn promotion

};

#endif // CONTROL_H
