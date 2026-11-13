#include "arcade.h"
#include "input.h"
#include <iostream>


Arcade::Arcade() : m_games{}, m_count{0} {}

void Arcade:: add(Game *game) {
    if (m_count == max_games) { 
        delete game; 
           return;
}

m_games[m_count] =game;
++m_count;
}

Arcade::~Arcade() 
{
    for (int i =0; i < m_count; i++) {
        delete m_games[i];
        }
}

void Arcade:: run() 
{
  while (true){
  for (int i = 0; i < m_count; ++i) {
    std::cout << i + 1 << ". " << m_games[i]->title() << '\n';
  }
  
std::cout << "0. Quit\n";

std:: string line; 
if (!prompt_line("Choice: ", line)) {

return;
}

int choice;

if (!parse_int (line,choice)) {

    std::cout <<"Invalid choice,\n";
continue; 
}

if (choice == 0) {

return;
}

if (choice < 1 || choice > m_count) {
    std::cout << "Invalid choice.\n";
continue;

}

Game *game = m_games[choice -1];

game->play();

std::cout << "score: " << game-> last_score() << '\n';
}
}
