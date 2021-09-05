//
// Created by Gregorio Velva on 8/29/21.
//

#include "ClapTrap.hpp"

int main()
{
	ClapTrap cp("Garlic pie");


	cp.attack("vampire");
	cp.takeDamage(20);
	cp.beRepaired(20);
	return 0;
}
