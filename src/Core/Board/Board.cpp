#include "Board.h"

namespace Core {
	Board::Board() {
		LoadPositionFroFEN(StartFen);
	}

	Board::~Board() {

	}

	void Board::LoadPositionFroFEN(std::string fen) {
		int file = 0;
		int rank = 7;

		for (char& symbol : fen) {
			if (symbol == '/') {
				file = 0;
				rank--;
			} else {
				if (std::isdigit(symbol)) {
					file += (int)std::stoi(&symbol);
				} else {
					int pieceColour = std::isupper(symbol) ? Piece::White : Piece::Black;
					int pieceType = Piece::None;
					
					switch (std::tolower(symbol)) {
					case 'k':
						pieceType = Piece::King;
						break;
					case 'p':
						pieceType = Piece::Pawn;
						break;
					case 'n':
						pieceType = Piece::Knight;
						break;
					case 'b':
						pieceType = Piece::Bishop;
						break;
					case 'r':
						pieceType = Piece::Rook;
						break;
					case 'q':
						pieceType = Piece::Queen;
						break;
					default:
						pieceType = Piece::None;
						break;
					}

					Square[rank * 8 + file] = pieceType | pieceColour;
					file++;
				}
			}
		}
	}
}
