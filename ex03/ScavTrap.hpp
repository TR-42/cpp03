/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:11:06 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 23:52:27 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	const static unsigned int DEFAULT_POINTS = 100;
	const static unsigned int DEFAULT_ENERGY_POINTS = 50;
	const static unsigned int DEFAULT_ATTACK_DAMAGE = 20;

public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& from);
	virtual ~ScavTrap();

	ScavTrap& operator=(const ScavTrap& from);

	void attack(const std::string& target);
	void guardGate() const;
};
