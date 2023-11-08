#pragma once

#include <vector>
#ifndef BOARD_H_
#define BOARD_H_

class Board {
private:
	int m_row, m_column, m_numBombs, m_numFlags, m_correctFlags;
    std::vector<std::string> board;
	vector<vector<Tile*> > m_board;
	bool m_gameOver, m_win;
public:
	Board();
	Board(int r, int c, int n);
    bool isValueInBoard(const std::string& value) const {
        for (const auto& row : board) {
            if (std::find(row.begin(), row.end(), value) != row.end()) {
                return true;
            }
        }
        return false;
    }

    void setCellState(int row, int col, const std::string& state) {
        if (row >= 0 && row < m_row && col >= 0 && col < m_column) {
            board[row][col] = state;
        }
    }
};

#endif