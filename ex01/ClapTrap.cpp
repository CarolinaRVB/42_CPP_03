/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:18:38 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 21:51:11 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name ("Temp"), m_energy (10), m_points (10), m_attack (0) {
	std::cout << "Default constructor for ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string name) : m_name (name), m_energy (10), m_points (10), m_attack (0) {
	std::cout << "Name constructor for ClapTrap called\n";
}

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
	*this = claptrap;
	std::cout << "Copy constructor for ClapTrap was called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor for ClapTrap was called\n";
}

void ClapTrap::attack(const std::string& target) {
	if (m_energy != 0 && m_points){
		m_energy--;
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack << " points of damage!\n";
	}
	else if (!m_points)
		std::cout << "ClapTrap " <<  m_name << " is dead\n";
	else
		std::cout << "ClapTrap " << m_name << " can't attack, no more energy points left\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (m_points != 0){
		m_points -= amount;
		std::cout << "ClapTrap " << m_name << " took " << amount << " of damage\n";
	}
	else
		std::cout << "ClapTrap " <<  m_name << " is dead\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (m_energy != 0 && m_points){
		m_energy--;
		m_points += amount;
		std::cout << "ClapTrap " << m_name << " repaired " << amount << " points back\n";
	}
	else if (!m_points)
		std::cout << "ClapTrap " <<  m_name << " is dead\n";
	else
		std::cout << "ClapTrap " << m_name << " is dead, no more energy points left\n";
}


ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
	m_name = claptrap.m_name;
	m_energy = claptrap.m_energy;
	m_points = claptrap.m_points;
	m_attack = claptrap.m_attack;
	
	std::cout << "Copy assignment for ClapTrap constructed\n";
	return (*this);
}
