#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_diamName = name;
	ClapTrap::_name = "cp_name_" + name;
	this->setParameters(FragTrap::_hitPoints, ScavTrap::_energyPoints, 
						FragTrap::_attackDamage);
	std::cout << "diam: " DT_CONS_MSG;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	std::cout << "diam: " DT_COPY_MSG;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& other)
{
	std::cout << "diam: " DT_ASSIGN_MSG;
	this->_name = other._name;
	(*this).setParameters(other._hitPoints, other._energyPoints, other._attackDamage);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diam: " DT_DES_MSG;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
