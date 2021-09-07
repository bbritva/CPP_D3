//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define CONS_MSG "Default ST constructor called\n"
#define COPY_MSG "Copy ST constructor called\n"
#define ASSIGN_MSG "ST assignation operator called\n"
#define GRB_MSG "ST getRawBits member function called\n"
#define DES_MSG "ST destructor called\n"

class ScavTrap: public ClapTrap
{

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &other);
	ScavTrap & operator=(ScavTrap const &num);
	~ScavTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setParameters(unsigned int hp, unsigned int ep, unsigned int ad);
	};

#endif //SCAVTRAP_HPP
