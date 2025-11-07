/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:02:12 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/07 19:10:45 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string s)
:name(s),
hit_point(10),
energy_point(10),
attack_damage(10)
{
	std::cout << "player stats constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hit_point == 0)
		std::cout << "ClapTrap " << name << "is already dead." << std::endl;
	else if (energy_point == 0)
		std::cout << "ClapTrap " << name << "have no more energy points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_point--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point == 0)
		std::cout << "ClapTrap " << name << "is already dead." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " took " << amount << " amount of damage" << std::endl;
		if (amount >= hit_point)
			hit_point = amount;	
		hit_point -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point == 0)
		std::cout << "ClapTrap " << name << " is already dead and wan't be repaired." << std::endl;
	else if (energy_point == 0)
		std::cout << "ClapTrap " << name << " have no more energy points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " have been repaired with " << amount << " hit points" << std::endl;
		hit_point += amount;
		energy_point--;
	}
}

unsigned int ClapTrap::get_hit_point()
{
	return (hit_point);
}

unsigned int ClapTrap::get_energy_point()
{
	return (energy_point);
}
