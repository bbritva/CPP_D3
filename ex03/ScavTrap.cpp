#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "ScavTrap";
	this->setParameters(100, 50, 20);
	std::cout << ST_CONS_MSG;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->setParameters(100, 50, 20);
	std::cout << ST_CONS_MSG;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << ST_COPY_MSG;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	std::cout << ST_ASSIGN_MSG;
	this->_name = other._name;
	(*this).setParameters(other._hitPoints, other._energyPoints, other._attackDamage);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << ST_DES_MSG;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacked " << target << ", causing " << this->_attackDamage
	<< " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << GATE_KEEPER_MSG;
}
