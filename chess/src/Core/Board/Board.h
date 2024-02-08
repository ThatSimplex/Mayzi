#pragma once

namespace Core {
	class Board {
	public:
		Board();
		~Board();

		int Square[64];
		int KingSquare[2];
	};
}