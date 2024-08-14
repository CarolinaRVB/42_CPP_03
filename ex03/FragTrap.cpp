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
	m_name = name;
	m_energy = 100;
	m_points = 100;
	m_attack = 30;
	std::cout << "Name constructor for FragTrap constructed\n";
}


FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap() {
	*this = fragtrap;
	std::cout << "Copy constructor for FragTrap constructed\n";
}

FragTrap::~FragTrap() {
	std::cout << "Destructor for FragTrap was called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
	m_name = fragtrap.m_name;
	m_energy = fragtrap.m_energy;
	m_points = fragtrap.m_points;
	m_attack = fragtrap.m_attack;
	
	std::cout << "Copy assignment for FragTrap constructed\n";
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "Frag trap " << m_name << " is asking for Highfives!\n";
}
