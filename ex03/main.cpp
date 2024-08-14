/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:43 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 23:30:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){

	ClapTrap	clap("Teodoro");
	ScavTrap	scav("Scav");
	FragTrap	frag("Frag");
	DiamondTrap diamond("Diamond");

	std::cout << "\n\n";
	std::cout << "Clap hit points, should be 10: " << clap.getHitPoints() << std::endl;
	std::cout << "Clap energy points, should be 10: " << clap.getEnergyPoints() << std::endl;
	std::cout << "Clap attack points, should be 0: " << clap.getAttackPoints() << std::endl;

	std::cout << "\n\n";

	std::cout << "Scav hit points, should be 100: " << scav.getHitPoints() << std::endl;
	std::cout << "Scav energy points, should be 50: " << scav.getEnergyPoints() << std::endl;
	std::cout << "Scav attack points, should be 20: " << scav.getAttackPoints() << std::endl;
	
	std::cout << "\n\n";

	std::cout << "Frag hit points, should be 100: " << frag.getHitPoints() << std::endl;
	std::cout << "Frag energy points, should be 100: " << frag.getEnergyPoints() << std::endl;
	std::cout << "Frag attack points, should be 30: " << frag.getAttackPoints() << std::endl;
	
	std::cout << "\n\n";

	std::cout << "Diamond hit points, should be 100 from FragTrap: " << diamond.getHitPoints() << std::endl;
	std::cout << "Diamond energy points, should be 50 from ScavTrap: " << diamond.getEnergyPoints() << std::endl;
	std::cout << "Diamond attack points, should be 30 from FragTrap: " << diamond.getAttackPoints() << std::endl;
	

	std::cout << "\n\n";

	clap.attack("Manel");
	clap.takeDamage(9);
	
	clap.attack("Manel");
	clap.beRepaired(1);
	clap.takeDamage(2);
	clap.attack("Manel");
	std::cout << "\n\n";


	scav.attack("Enemy");
	scav.takeDamage(99);
	scav.beRepaired(1);
	scav.takeDamage(2);
	scav.attack("Enemy");
	scav.guardGate();
	std::cout << "\n\n";

	frag.attack("Manel 2.0");
	frag.takeDamage(99);
	frag.beRepaired(1);
	frag.takeDamage(2);
	frag.attack("Manel 2.0");
	frag.highFivesGuys();
	std::cout << "\n\n";
	
	diamond.attack("Manel 3.0");
	diamond.takeDamage(3);
	diamond.beRepaired(1);
	diamond.whoAmI();
	std::cout << "\n\n";

	return 0;
	
}