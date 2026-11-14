#include "goblin.h"

Goblin::Goblin() : Monster{"Goblin",8} {}
int Goblin::attack_damage() const { 
return 3;
}

std::string Goblin:: describe() const {
return "A Goblin prepares to attack.";

}
