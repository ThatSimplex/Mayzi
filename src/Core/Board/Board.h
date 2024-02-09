#pragma once

#include <iostream>
#include <string>
#include <locale>

#include "Piece.h"

namespace Core {
	class Board {
	public:
		Board();
		~Board();

		void LoadPositionFroFEN(std::string fen);

		int Square[64];
		int KingSquare[2];
	private:
		std::string StartFen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
	};
}