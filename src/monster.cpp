#include "monster.h"

Monster::Monster (std::string name, int health)
  : m_name{name}, m_health{health} {}

  const std::string &Monster::name() const{
    return m_name;
  }

  bool Monster::is_dead() const { 
  return m_health <= 0;
  }

  void Monster::take_damage(int amount) {
    if (amount > 0) { 
        if (amount >= m_health) { 
            m_health=0; 
            }
            else {
            m_health-= amount;
            }
            }
            }

 std::string Monster::describe() const {
 return "You face " +  m_name + ".";
 }
