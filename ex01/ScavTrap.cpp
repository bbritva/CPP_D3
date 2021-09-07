#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->setParameters(10, 10, 0);
	std::cout << CONS_MSG;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << COPY_MSG;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	std::cout << ASSIGN_MSG;
	this->_name = other._name;
	(*this).setParameters(other._hitPoints, other._energyPoints, other._attackDamage);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << DES_MSG;
}

void ScavTrap::setParameters(unsigned int hp, unsigned int ep, unsigned int ad)
{
	this->_attackDamage = ad;
	this->_energyPoints = ep;
	this->_hitPoints = hp;
}


void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacked " << target << ", causing " << this->_attackDamage
	<< " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " took " << amount << " points of damage!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " was repaired for " << amount << " points!\n";
}
