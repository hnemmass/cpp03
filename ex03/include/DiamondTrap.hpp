/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:27:57 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/10 15:30:12 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
	
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(const std::string s);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();

		void attack(const std::string &target);
		void whoAmI();
};

#endif