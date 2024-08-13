/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:01:56 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/04 22:17:06 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	m_name = "";
	m_energy = 100;
	m_points = 100;
	m_attack = 30;

	std::cout << "Default for FragTrap constructed\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Default for FragTrap constructed\n";
}


FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap() {
	*this = fragtrap;
	std::cout << "Copy constructor for FragTrap constructed\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
	this->m_name = fragtrap.m_name;
	this->m_energy = fragtrap.m_energy;
	this->m_points = fragtrap.m_points;
	this->m_attack = fragtrap.m_attack;
	
	std::cout << "Copy assignment for FragTrap constructed\n";
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "Give me Highfives!\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	if (m_points != 0){
		m_points -= amount;
		std::cout << "FragTrap " << m_name << " took " << amount << " of damage\n";
	}
	else
		std::cout << "FragTrap " <<  m_name << " is dead\n";
}

void FragTrap::beRepaired(unsigned int amount) {
	if (m_energy != 0 && m_points){
		m_energy--;
		m_points += amount;
		std::cout << "FragTrap " << m_name << " repaired " << amount << " points back\n";
	}
	else if (!m_points)
		std::cout << "FragTrap " <<  m_name << " is dead\n";
	else
		std::cout << "FragTrap " << m_name << " is dead, no more energy points left\n";
}

