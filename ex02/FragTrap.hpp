/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:11:06 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 23:13:42 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& from);
	~FragTrap();

	FragTrap& operator=(const FragTrap& from);

	void attack(const std::string& target);
	void highFiveGuys();
};