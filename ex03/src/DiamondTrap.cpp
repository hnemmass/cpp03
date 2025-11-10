/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:27:45 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/10 15:37:57 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DianmondTrap default constructor called" << std::endl;
	this->name = "DefaultDT";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_v2;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DianmondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::DiamondTrap(const std::string s):
ClapTrap(s + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DianmondTrap Default constructor called" << std::endl;
	this->name = s;
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_v2;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DianmondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
		this->hit_point = other.hit_point;
		this->energy_point = other.energy_point;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name
			<< " and ClapTrap name is " << ClapTrap::name
			<< "." << std::endl;
}
