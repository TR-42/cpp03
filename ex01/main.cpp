/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:52:47 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/24 19:55:09 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap v;
	ClapTrap n(v);

	v.attack("abc");
	v.takeDamage(5);
	v.beRepaired(8);

	return (0);
}
