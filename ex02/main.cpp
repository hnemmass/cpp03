/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:01:31 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/08 21:02:15 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{

	ClapTrap tim("Tim");
	ClapTrap bernd("Bernd");
	FragTrap lina("lina");
	FragTrap max;

	max = lina;
	
	lina.attack("a bear");
	lina.takeDamage(2);
	std::cout << "hit point : " << lina.get_hit_point() << std::endl;
	std::cout << "energy point : " << lina.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;

	max.attack("a bear");
	max.takeDamage(2);
	std::cout << "hit point : " << max.get_hit_point() << std::endl;
	std::cout << "energy point : " << max.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;

	tim.attack("a bear");
	tim.takeDamage(2);
	std::cout << "hit point : " << tim.get_hit_point() << std::endl;
	std::cout << "energy point : " << tim.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;

	bernd.takeDamage(2);
	std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;
	bernd.attack("house");
	bernd.beRepaired(5);
	std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;
	bernd.takeDamage(5);
	std::cout << "hit point : " << bernd.get_hit_point() << std::endl;
	std::cout << "energy point : " << bernd.get_energy_point() << std::endl;
	std::cout << "--------------------------" << std::endl;
	

	std::cout << "--------------------------" << std::endl;
	lina.highFivesGuys();
	std::cout << "--------------------------" << std::endl;

	return (0);
}