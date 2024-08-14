/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:43 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 18:54:08 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){

	ClapTrap	clap("Teodoro");
	ScavTrap	scav("Scav");

	std::cout << "\n\n";

	clap.attack("Manel");
	clap.takeDamage(5);
	
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	clap.attack("Manel");
	
	clap.beRepaired(1);
	clap.takeDamage(5);
	clap.attack("Manel");

	std::cout << "\n\n";

	scav.attack("Manel");
	scav.takeDamage(3);
	scav.beRepaired(1);
	scav.guardGate();
	std::cout << "\n\n";

	return 0;
	
}