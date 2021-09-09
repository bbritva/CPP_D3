#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "FragTrap";
	this->setParameters(100, 100, 30);
	std::cout << "frag: " FT_CONS_MSG;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->setParameters(100, 100, 30);
	std::cout << "frag: " FT_CONS_MSG;
}

FragTrap::FragTrap(FragTrap &other)
{
	std::cout << "frag: " FT_COPY_MSG;
	*this = other;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
	std::cout << FT_ASSIGN_MSG;
	this->_name = other._name;
	(*this).setParameters(other._hitPoints, other._energyPoints, other._attackDamage);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "frag: " FT_DES_MSG;
}

void FragTrap::highFivesGuys()
{
	std::cout << HIGH_FIVE_MSG;
}
