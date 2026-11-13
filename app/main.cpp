/// @file main.cpp
/// @brief The Arcade menu

#include <iostream>
#include <string>

#include "arcade.h"
#include "blackjack_game.h"
#include "dungeon_game.h"
#include "hangman_game.h"
#include "input.h"
#include "minesweeper_game.h"

int main() {
              Arcade arcade;
 
 arcade.add(new Hangman());
 
 arcade.add(new Dungeon());
 
 arcade.add(new Blackjack());
 
 arcade.add(new Minesweeper());

 arcade.run();

 std::cout << "Goodbye\n";
return 0;
}
