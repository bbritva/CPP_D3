//
// Created by Gregorio Velva on 8/29/21.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap ct("Garlic pie");
	ScavTrap st("Peanut butter");
	FragTrap ft("Dirty panties");


	ct.attack("vampire");
	ct.takeDamage(20);
	ct.beRepaired(20);
	st.attack("allergic neighbor");
	st.takeDamage(40);
	st.beRepaired(40);
	ft.attack("allergic neighbor");
	ft.takeDamage(40);
	ft.beRepaired(40);
	ft.highFivesGuys();
	return 0;
}
