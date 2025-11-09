/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:01:55 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/08 17:04:38 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	 name;
		unsigned int hit_point;
		unsigned int energy_point;
		unsigned int attack_damage;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &old);
		ClapTrap(const std::string s);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap(void);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned int get_hit_point();
		unsigned int get_energy_point();
};

#endif