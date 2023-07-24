/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:11:06 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/27 00:05:50 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	const static unsigned int DEFAULT_POINTS = 100;
	const static unsigned int DEFAULT_ENERGY_POINTS = 100;
	const static unsigned int DEFAULT_ATTACK_DAMAGE = 30;

public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& from);
	~FragTrap();

	FragTrap& operator=(const FragTrap& from);

	void highFiveGuys() const;
};
