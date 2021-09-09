//
// Created by Gregorio Velva on 8/29/21.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap ct("Garlic pie");
	ScavTrap st("Peanut butter");
	FragTrap ft("Dirty panties");
	DiamondTrap dt("Nettle bush");


	ct.attack("vampire");
	ct.takeDamage(20);
	ct.beRepaired(20);
	st.attack("allergic neighbor");
	st.takeDamage(40);
	st.beRepaired(40);
	st.guardGate();
	ft.attack("priest");
	ft.takeDamage(40);
	ft.beRepaired(40);
	ft.highFivesGuys();
	dt.attack("naked people");
	dt.takeDamage(60);
	dt.beRepaired(60);
	dt.highFivesGuys();
	dt.guardGate();
	return 0;
}
