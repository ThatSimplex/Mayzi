#include "Piece.h"

namespace Core {
	Piece::Piece() {
		
	}

	Piece::~Piece() {
	
	}

	int Piece::PieceType(int piece) {
		return piece & TypeMask;
	}

	bool Piece::IsColour(int piece, int colour) {
		return (piece & ColourMask) == colour && piece != None;
	}

	bool Piece::IsWhite(int piece) {
		return IsColour(piece, White);
	}

	char Piece::GetSymbol(int piece) {
		char symbol = ' ';
		int pieceType = PieceType(piece);

		switch (pieceType) {
		case Rook:
			symbol = 'R';
			break;
		case Knight:
			symbol = 'N';
			break;
		case Bishop:
			symbol = 'B';
			break;
		case Queen:
			symbol = 'Q';
			break;
		case King:
			symbol = 'K';
			break;
		case Pawn:
			symbol = 'P';
			break;
		default:
			symbol = ' ';
			break;
		}

		symbol = IsWhite(piece) ? symbol : std::tolower(symbol);
		return symbol;
	}

	int Piece::GetPieceTypeFromSymbol(char symbol) {
		symbol = std::toupper(symbol);

		switch (symbol)
		{
		case 'R':
			return Rook;
		case 'N':
			return Knight;
		case 'B':
			return Bishop;
		case 'Q':
			return Queen;
		case 'K':
			return King;
		case 'P':
			return Pawn;
		default:
			return None;
		}
	}
}