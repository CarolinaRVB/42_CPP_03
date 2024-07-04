/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:43 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 22:08:53 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){

	ClapTrap	clap("Teodoro");
	ScavTrap	scav("Scav");
	FragTrap	frag("Frag");

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


	scav.attack("Manel");
	scav.takeDamage(3);
	scav.beRepaired(1);
	scav.guardGate();

	frag.attack("Manel");
	frag.takeDamage(3);
	frag.beRepaired(1);


	return 0;
	
}