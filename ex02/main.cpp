//
// Created by Gregorio Velva on 8/29/21.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap ct("Garlic pie");
	ScavTrap st("Peanut butter");


	ct.attack("vampire");
	ct.takeDamage(20);
	ct.beRepaired(20);
	st.attack("allergic neighbor");
	st.takeDamage(40);
	st.beRepaired(40);
	st.guardGate();
	return 0;
}
