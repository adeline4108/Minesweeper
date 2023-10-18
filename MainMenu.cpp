#include "MainMenu.h"
#include <iostream>
#include "Game.h"

using namespace std;
Game::Game() {
	m_action = 'o';
	m_row = 0;
	m_column = 0;
	m_difficulty = 'e';
	m_boardType = 'd';
	m_board = new Board;
	delete m_board;
	time(&m_start);
	time(&m_end);
	m_timeTaken = 0;
}

Game::~Game() {
}