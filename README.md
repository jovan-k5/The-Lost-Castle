# The Lost Castle

A C terminal adventure game where the player explores an abandoned castle, solves puzzles, collects items, and attempts to recover the King's lost crown.

## Features

* **Interactive Story:** Make choices that determine how the game progresses
* **Inventory:** Collect items needed to advance
* **Multiple Locations:** Explore the castle entrance, courtyard, main hall, library, dungeon, and treasure room
* **Puzzle-Based:** Solve puzzles to unlock new areas and progress through the story
* **Replayability:** Play again after completing or losing the game
* **Terminal-Based:** Runs entirely in the command line

## How It Works

The player enters an abandoned castle searching for the King's lost crown.

Throughout the game, the player must make choices and collect items to progress.

The player must:

* Find the torch to navigate the main hall
* Solve the library puzzle to obtain the Keeper's Seal
* Use the Keeper's Seal to unlock the dungeon
* Solve the final puzzle in the treasure room
* Recover the King's crown

Incorrect choices or missing required items can result in a game over.

### Prerequisites

You need a C compiler installed on your system, such as GCC or Clang.

### Compilation and Running

Download the repository as a ZIP from GitHub and extract it. Open Terminal and navigate into the downloaded project folder.

From inside the project folder, run this command to compile and launch the game automatically:

```bash
gcc src/lost_castle.c -o lost_castle 
```
```bash
./lost_castle
```

## Play the Game

The game will start in your terminal.

1. Follow the instructions displayed on screen.
2. Enter the number corresponding to your choice.
3. Explore the castle and collect the items you need.
4. Solve the puzzles to progress.
5. Try to recover the King's crown.

After the game ends, you can choose whether to play again.

## What I Learned

This project helped me practice:

* Variables and data types
* if / else statements
* while loops
* Functions
* User input with scanf
* Conditional program flow
* State tracking using variables
* Debugging and testing a terminal-based program

## Problems I Encountered

* Had to learn how to structure a multi-stage terminal game using conditional logic.
* Initially used repetitive code to track individual items. I refactored the program to use variables for item tracking, making the code cleaner and easier to maintain.
* Different player choices had the same outcomes.
  
## Development Process

As I do with most of my projects, I developed this game incrementally, starting with the basic game flow and then adding the inventory system, puzzles, item-based progression, game-over conditions, and replay functionality.

I tested different choices and puzzle answers to make sure the game behaved as expected and that the correct items were required to progress.

## Future Improvements

* Adding more rooms and branching storylines
* Adding additional puzzles and collectible items
* Expanding the inventory system to more materials 
* Adding save/load functionality
* Creating a graphical version of the game
