/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:53:39 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 23:06:59 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

// In the context of inheritance, constructors of the base class are called
// first before the constructors of the derived class.


class   ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		~ScavTrap();
        
		ScavTrap& operator=(const ScavTrap& scavtrap);
		void    guardGate();
		void 	attack(const std::string& target);
		int 	getAttackPoints(void);

	
	protected:
		int m_attack;
};

#endif