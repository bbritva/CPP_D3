//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define CONS_MSG "Default constructor called\n"
#define COPY_MSG "Copy constructor called\n"
#define ASSIGN_MSG "Assignation operator called\n"
#define DES_MSG "Destructor called\n"

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	ClapTrap & operator=(ClapTrap const &num);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setParameters(unsigned int hp, unsigned int ep, unsigned int ad);
	};

#endif //CLAPTRAP_HPP
