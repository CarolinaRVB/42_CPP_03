/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:53:36 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 22:13:43 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	m_name = "";
	m_energy = 50;
	m_points = 100;
	m_attack = 20;
	std::cout << "Default constructor for Scav was called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	m_name = name;
	m_energy = 50;
	m_points = 100;
	m_attack = 20;
	
	std::cout << "Name constructor for Scav was called\n";
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap) {
	*this = scavtrap;
	std::cout << "Copy constructor for Scav was called\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor for Scav was called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) {
	this->m_name = scavtrap.m_name;
	this->m_energy = scavtrap.m_energy;
	this->m_points = scavtrap.m_points;
	this->m_attack = scavtrap.m_attack;
	
	std::cout << "Copy assignment for Scavtrap constructed\n";
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}
