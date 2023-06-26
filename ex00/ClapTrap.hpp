/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:33:02 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 22:19:08 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap
{
private:
	std::string name;
	unsigned int points;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& from);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& from);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
