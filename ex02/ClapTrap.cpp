#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	this->setParameters(10, 10, 0);
	std::cout << CONS_MSG;
}

ClapTrap::ClapTrap(std::string name):_name(name)
{
	this->setParameters(10, 10, 0);
	std::cout << CONS_MSG;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << COPY_MSG;
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other)
{
	std::cout << ASSIGN_MSG;
	this->_name = other._name;
	(*this).setParameters(other._hitPoints, other._energyPoints, other._attackDamage);
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << DES_MSG;
}

void ClapTrap::setParameters(unsigned int hp, unsigned int ep, unsigned int ad)
{
	this->_attackDamage = ad;
	this->_energyPoints = ep;
	this->_hitPoints = hp;
}


void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_attackDamage
	<< " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " was repaired for " << amount << " points!\n";
}
