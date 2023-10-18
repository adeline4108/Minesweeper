#pragma once

#include <vector>
#ifndef BOARD_H_
#define BOARD_H_

class Board {
private:
	int m_row, m_column, m_numBombs, m_numFlags, m_correctFlags;
	vector<vector<Tile*> > m_board;
	bool m_gameOver, m_win;
public:
	Board();
	Board(int r, int c, int n);
};

#endif