#pragma once

#include <iostream>

namespace Core {
	class Piece {
	public:
		Piece();
		~Piece();

		int PieceType(int piece);
		bool IsColour(int piece, int colour);
		bool IsWhite(int piece);
		char GetSymbol(int piece);
		int GetPieceTypeFromSymbol(char symbol);

		static const int None = 0;
		static const int Pawn = 1;
		static const int Knight = 2;
		static const int Bishop = 3;
		static const int Rook = 4;
		static const int Queen = 5;
		static const int King = 6;
		
		static const int White = 0;
		static const int Black = 8;

		const int TypeMask = 0b0111;
		const int ColourMask = 0b1000;

		const int WhitePawn = Pawn | White;
		const int WhiteKnight = Knight | White;
		const int WhiteBishop = Bishop | White;
		const int WhiteRook = Rook | White;
		const int WhiteQueen = Queen | White;
		const int WhiteKing = King | White;

		const int BlackPawn = Pawn | Black;
		const int BlackKnight = Knight | Black;
		const int BlackBishop = Bishop | Black;
		const int BlackRook = Rook | Black;
		const int BlackQueen = Queen | Black;
		const int BlackKing = King | Black;

		const int PieceIndices[12] = {
			WhitePawn, WhiteKnight, WhiteBishop, WhiteRook, WhiteQueen, WhiteKing,
			BlackPawn, BlackKnight, BlackBishop, BlackRook, BlackQueen, BlackKing
		};
	};
}