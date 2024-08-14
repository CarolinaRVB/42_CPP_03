/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:40 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 21:54:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getAttackPoints(void);
		int getEnergyPoints(void);
		int getHitPoints(void);

		
	protected:
		std::string	m_name;
		int m_energy;
		int	m_points;
		int m_attack;
};



#endif