/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:43 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 18:39:57 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

int	main(){

	ClapTrap	clap("Teodoro");

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

	return 0;
	
}