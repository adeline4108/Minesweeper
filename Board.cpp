#include "Board.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>
using namespace std;

Board::Board() {
	m_row = 9;
	m_column = 9;
	m_numBombs = 9;
	m_gameOver = false;
	m_win = false;
	m_numFlags = 0;
	m_correctFlags = 0;

}

Board::Board(int r, int c, int n) {
	m_row = r;
	m_column = c;
	m_numBombs = n;
	m_numFlags = 0;
	m_correctFlags = 0;
}

Board::Board(const Board& other) {
	m_row = other.m_row;
	m_column = other.m_column;
	m_numBombs = other.m_numBombs;
	m_numFlags = other.m_numFlags;
	m_correctFlags = other.m_correctFlags;
	m_gameOver = other.m_gameOver;
	m_win = other.m_win;
}

public:

	Board& operator=(const Board& other) {
		if (this != &other) {

			m_row = other.m_row;
			m_column = other.m_column;
			m_numBombs = other.m_numBombs;
			m_numFlags = other.m_numFlags;
			m_correctFlags = other.m_correctFlags;
			m_gameOver = other.m_gameOver;
			m_win = other.m_win;

		}
		return *this;
	}