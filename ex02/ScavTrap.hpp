/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:53:39 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 22:13:11 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

// In the context of inheritance, constructors of the base class are called
// first before the constructors of the derived class.


class   ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		~ScavTrap();
        
		ScavTrap& operator=(const ScavTrap& scavtrap);
		void    guardGate();
		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
	private:
};

#endif