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

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& from);
	virtual ~FragTrap();

	FragTrap& operator=(const FragTrap& from);

	void highFiveGuys() const;
};
