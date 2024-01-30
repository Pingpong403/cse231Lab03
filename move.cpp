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
	: isWhite(false)
{
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
	//	PieceType pt;
	//	switch (letter)
	//	{
	//	case 'i':
	//		pt = INVALID;
	//		break;
	//	case ' ':
	//		pt = SPACE;
	//		break;
	//	case KING:
	//		pt = 'k';
	//		break;
	//	case QUEEN:
	//		pt = 'q';
	//		break;
	//	case ROOK:
	//		pt = 'r';
	//		break;
	//	case BISHOP:
	//		pt = 'b';
	//		break;
	//	case KNIGHT:
	//		pt = 'n';
	//		break;
	//	case PAWN:
	//		pt = 'p';
	//		break;
	//	}
	//
		return SPACE;
}
