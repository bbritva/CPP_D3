//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define ST_CONS_MSG "ST " CONS_MSG
#define ST_COPY_MSG "ST " COPY_MSG
#define ST_ASSIGN_MSG "ST " ASSIGN_MSG
#define ST_DES_MSG "ST " DES_MSG
#define GATE_KEEPER_MSG "ScavTrap have enterred in Gate keeper mode\n"

class ScavTrap: public virtual ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &other);
	ScavTrap & operator=(ScavTrap const &num);
	~ScavTrap();
	void attack(std::string const &target);
	void guardGate();
	};

#endif //SCAVTRAP_HPP
