/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:02:12 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/08 21:29:03 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
:name("Default"),
hit_point(10),
energy_point(10),
attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string s)
:name(s),
hit_point(10),
energy_point(10),
attack_damage(0)
{
	std::cout << "ClapTrap player stats constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = old;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hit_point = other.hit_point;
		this->energy_point = other.energy_point;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called" << std::endl;
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
