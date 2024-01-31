/***********************************************************************
 * Source File:
 *    MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    Everything we need to know about a single chess move
 ************************************************************************/

#include "move.h"
#include "pieceType.h"
#include <cassert>
#include <iostream>
#include <sstream>

using namespace std;

/***************************************************
 * MOVE : DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move()
	: promote(INVALID),
	  capture(INVALID),
	  moveType(MOVE_ERROR),
	  isWhite(false)
{
}

/***************************************************
 * MOVE : NON-DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move(char* input)
{
	source = input[0] + input[1];
	dest = input[2] + input[3];
	if (input[4] != '/0')
	{
		switch (input[4])
		{
		case 'c':
			// IMPLEMENT king castle side
			break;
		case 'C':
			// IMPLEMENT queen side castle
			break;
			// IMPLEMENT OTHER CASES
		}
	}

}

/***************************************************
 * MOVE : LETTER FROM PIECE TYPE
 ***************************************************/
char Move::letterFromPieceType(PieceType pt) const
{
	char letter;
	switch (pt)
	{
	case INVALID:
		letter = 'i';
		break;
	case SPACE:
		letter = ' ';
		break;
	case KING:
		letter = 'k';
		break;
	case QUEEN:
		letter = 'q';
		break;
	case ROOK:
		letter = 'r';
		break;
	case BISHOP:
		letter = 'b';
		break;
	case KNIGHT:
		letter = 'n';
		break;
	case PAWN:
		letter = 'p';
		break;
	}
	return letter;
}

/***************************************************
 * MOVE : PIECE TYPE FROM LETTER
 ***************************************************/
PieceType Move::pieceTypeFromLetter(char letter) const
{
	PieceType pt;
	switch (letter)
	{
	case 'i':
		pt = INVALID;
		break;
	case ' ':
		pt = SPACE;
		break;
	case 'k':
		pt = KING;
		break;
	case 'q':
		pt = QUEEN;
		break;
	case 'r':
		pt = ROOK;
		break;
	case 'b':
		pt = BISHOP;
		break;
	case 'n':
		pt = KNIGHT;
		break;
	case 'p':
		pt = PAWN;
		break;
	}
	return pt;
}
