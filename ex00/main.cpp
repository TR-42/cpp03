/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:52:47 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 22:21:38 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap v;
	ClapTrap n(v);
	ClapTrap m("Sun");

	v.attack("abc");
	v.takeDamage(5);
	v.beRepaired(8);

	n.attack("dwf");
	n.takeDamage(8);
	n.beRepaired(2);

	m.attack("dwf");
	m.takeDamage(8);
	m.beRepaired(2);

	return (0);
}
