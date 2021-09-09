//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DT_CONS_MSG "DT " CONS_MSG
#define DT_COPY_MSG "DT " COPY_MSG
#define DT_ASSIGN_MSG "DT " ASSIGN_MSG
#define DT_DES_MSG "DT " DES_MSG
//#define GATE_KEEPER_MSG "ScavTrap have enterred in Gate keeper mode\n"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _diamName;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &other);
	DiamondTrap & operator=(DiamondTrap const &num);
	~DiamondTrap();
	void attack(std::string const &target);
	};

#endif //DIAMONDTRAP_HPP
