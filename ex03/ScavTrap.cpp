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

void ScavTrap::attack(const std::string& target) {
	if (m_energy != 0 && m_points){
		m_energy--;
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack << " points of damage!\n";
	}
	else if (!m_points)
		std::cout << "ScavTrap " <<  m_name << " is dead\n";
	else
		std::cout << "ScavTrap " << m_name << " can't attack, no more energy points left\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (m_points != 0){
		m_points -= amount;
		std::cout << "ScavTrap " << m_name << " took " << amount << " of damage\n";
	}
	else
		std::cout << "ScavTrap " <<  m_name << " is dead\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (m_energy != 0 && m_points){
		m_energy--;
		m_points += amount;
		std::cout << "ScavTrap " << m_name << " repaired " << amount << " points back\n";
	}
	else if (!m_points)
		std::cout << "ScavTrap " <<  m_name << " is dead\n";
	else
		std::cout << "ScavTrap " << m_name << " is dead, no more energy points left\n";
}
