/***********************************************************************
 * Source File:
 *    POSITION
 * Author:
 *    <your name here>
 * Summary:
 *    The position of a piece, the cursor, or a possible move on a chess board
 ************************************************************************/

#include "position.h"
#include <iostream>

/******************************************
 * POSITION INSERTION OPERATOR
 ******************************************/
ostream & operator << (ostream & out, const Position & rhs)
{
   out << "error";
   return out;
}

/*************************************
 * POSITION EXTRACTION OPERATOR
 **************************************/
istream & operator >> (istream & in,  Position & rhs)
{
   return in;   
}

int Position::getCol() const
{
   int col = (int)colRow / 16;
   if (0 > col || col > 7)
   {
      return -1;
   }
   int row = (int)colRow % 16;
   if (0 > row || row > 7)
   {
      return -1;
   }
   return col;
}

int Position::getRow() const
{
   int row = (int)colRow % 16;
   if (0 > row || row > 7)
   {
      return -1;
   }
   int col = (int)colRow / 16;
   if (0 > col || col > 7)
   {
      return -1;
   }
   return row;
}
