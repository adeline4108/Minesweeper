A C++ console application

# Minesweeper

Tasks:
Game logic:
    - Implementation of algorithms for generating a playing field with mines.
    - Processing user clicks on field cells and performing corresponding actions (opening a cell, checking/unchecking a checkbox, etc.).
    - The logic of placing mines and calculating numbers in cells indicating the number of mines in neighboring cells.
    - Processing of victory conditions (all safe cells are open) and defeat (opening a cell with a mine).

Difficulty levels:
    - Creation of a system of difficulty levels with different field sizes and number of mines.
    - Implementation of adaptability of levels to different screens and devices.
Saving progress and statistics:
    - Implementation of a game save system and the ability to resume progress.
    - Maintain player statistics such as number of games played, playing time and other metrics.
Documentation and release:
    - Writing documentation for the game, including a user manual and description of the rules.
    - Preparation for the release of the game, including publication in application stores.

Minesweeper is a logic puzzle video game genre generally played on personal computers. 
The game features a grid of clickable squares, with hidden "mines" scattered throughout the board. 
The objective is to clear the board without detonating any mines, with help from clues about the number of neighboring mines in each field. Minesweeper is a puzzle video game. 
In the game, mines (that resemble naval mines in the classic theme) are scattered throughout a board, which is divided into cells. Cells have three states: unopened, opened, and flagged. 
An unopened cell is blank and clickable, while an opened cell is exposed. 
Flagged cells are unopened cells marked by the player to indicate a potential mine location; some implementations make flagged cells unopenable to reduce the risk of uncovering a suspected mine.