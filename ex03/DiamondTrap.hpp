/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:47:03 by kfujita           #+#    #+#             */
/*   Updated: 2023/07/24 23:35:42 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& from);
	virtual ~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& from);

	void attack(const std::string& target);

	void whoAmI() const;
};
