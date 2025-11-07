/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:01:31 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/07 19:12:55 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main()
{

	ClapTrap tim("Tim");
	ClapTrap bernd("Bernd");

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

	return (0);
}