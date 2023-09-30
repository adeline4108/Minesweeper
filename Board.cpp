#include "Board.h"

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
	createBoard();

}

Board::Board(int r, int c, int n) {
	m_row = r;
	m_column = c;
	m_numBombs = n;
	m_numFlags = 0;
	m_correctFlags = 0;
	createBoard();
}