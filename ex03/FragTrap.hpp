//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define FT_CONS_MSG "FT " CONS_MSG
#define FT_COPY_MSG "FT " COPY_MSG
#define FT_ASSIGN_MSG "FT " ASSIGN_MSG
#define FT_DES_MSG "FT " DES_MSG
#define HIGH_FIVE_MSG "FragTrap high five!\n"

class FragTrap: public virtual ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &other);
	FragTrap & operator=(FragTrap const &num);
	~FragTrap();
	void highFivesGuys();
	};

#endif //FRAGTRAP_HPP
