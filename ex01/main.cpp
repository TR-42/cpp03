/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:52:47 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 23:07:08 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap v;
	std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;
	ClapTrap n(v);
	std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;

	v.attack("abc");
	v.takeDamage(5);
	v.beRepaired(8);
	v.guardGate();

	std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;

	n.attack("abc");
	n.takeDamage(50);
	n.beRepaired(8);
	n.takeDamage(60);

	std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;

	{
		ScavTrap m("Sun");
		std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;
		
		m.attack("abc");
		m.takeDamage(5);
		m.beRepaired(8);
		m.beRepaired(16);
		m.guardGate();
	}

	std::cout << std::endl << "// " << __FILE__ << ':' << __LINE__ << std::endl << std::endl;

	return (0);
}
