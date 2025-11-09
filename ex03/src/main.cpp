/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:01:31 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/09 23:32:02 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main()
{

	DiamondTrap a;
	std::cout << "--------------------------" << std::endl;
	DiamondTrap b("max");
	std::cout << "--------------------------" << std::endl;
	DiamondTrap c;
	c = b;
	std::cout << "--------------------------" << std::endl;
	
	a.attack("a bear");
	a.takeDamage(2);
	std::cout << "hit point : " << a.get_hit_point() << std::endl;
	std::cout << "energy point : " << a.get_energy_point() << std::endl;
	a.whoAmI();
	a.highFivesGuys();
	std::cout << "--------------------------" << std::endl;

	b.attack("a bear");
	b.takeDamage(2);
	std::cout << "hit point : " << b.get_hit_point() << std::endl;
	std::cout << "energy point : " << b.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;

	c.attack("a bear");
	c.takeDamage(2);
	std::cout << "hit point : " << c.get_hit_point() << std::endl;
	std::cout << "energy point : " << c.get_energy_point() << std::endl;
	c.whoAmI();
	std::cout << "--------------------------" << std::endl;

	// ClapTrap tim("Tim");
	// ClapTrap bernd("Bernd");
	// FragTrap lina("lina");
	// FragTrap max;

	// max = lina;
	
	// lina.attack("a bear");
	// lina.takeDamage(2);
	// std::cout << "hit point : " << lina.get_hit_point() << std::endl;
	// std::cout << "energy point : " << lina.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;

	// max.attack("a bear");
	// max.takeDamage(2);
	// std::cout << "hit point : " << max.get_hit_point() << std::endl;
	// std::cout << "energy point : " << max.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;

	// tim.attack("a bear");
	// tim.takeDamage(2);
	// std::cout << "hit point : " << tim.get_hit_point() << std::endl;
	// std::cout << "energy point : " << tim.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;

	// bernd.takeDamage(2);
	// std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	// std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;
	// bernd.attack("house");
	// bernd.beRepaired(5);
	// std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	// std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;
	// bernd.takeDamage(5);
	// std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	// std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	// std::cout << "--------------------------" << std::endl;
	

	// std::cout << "--------------------------" << std::endl;
	// lina.highFivesGuys();
	// std::cout << "--------------------------" << std::endl;

	return (0);
}