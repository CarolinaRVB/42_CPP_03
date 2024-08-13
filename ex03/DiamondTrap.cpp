/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:21:04 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 23:28:21 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {

	m_name = "";
	ClapTrap::m_name= m_name + "_clap_name";
	m_points = FragTrap::m_points;
	m_energy = ScavTrap::m_energy;
	m_attack = FragTrap::m_attack;
		
	std::cout << "Default constructor for Diamond was called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	
	m_name = name;

	ClapTrap::m_name = name + "_clap_name";
	m_points = FragTrap::m_points;
	m_energy = ScavTrap::m_energy;
	m_attack = FragTrap::m_attack;
	std::cout << "ATTACK " << m_attack << std::endl;
	std::cout << "Default name constructor for Diamond was called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap) : ClapTrap(), FragTrap(), ScavTrap() {
	*this = diamondtrap;
	std::cout << "Copy constructor for Diamond was called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondtrap) {
	m_name = diamondtrap.m_name;
	ClapTrap::m_name = diamondtrap.m_name + "_clap_name";
	m_points = diamondtrap.m_points;
	m_energy = diamondtrap.m_energy;
	m_attack = diamondtrap.m_attack;

	std::cout << "Diamond assignment operator was called\n";
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond destructor was called\n";
	
}

void	DiamondTrap::whoAmI() {
	std::cout << "This is my Diamond name: " << m_name << std::endl;
	std::cout << "This ClapTrap's name: " << ClapTrap::m_name << std::endl;	
}