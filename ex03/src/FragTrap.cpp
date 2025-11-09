/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:25:41 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/08 21:39:31 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap("default")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const std::string s):
ClapTrap(s)
{
	std::cout << "FragTrap player stats constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other):
ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hit_point = other.hit_point;
		this->energy_point = other.energy_point;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (hit_point == 0)
		std::cout << "FragTrap " << name << "is already dead." << std::endl;
	else if (energy_point == 0)
		std::cout << "FragTrap " << name << "have no more energy points." << std::endl;
	else
	{
		std::cout << "FragTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_point--;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << ": You want a high five?\n\t🙌 There you go." << std::endl;
}
