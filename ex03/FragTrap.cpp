/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:25:13 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 23:15:39 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

#define PROG_NAME "FragTrap"

FragTrap::FragTrap() :
	ClapTrap()
{
	std::cout << PROG_NAME " default constructor called" << std::endl;
	this->points = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) :
	ClapTrap(name)
{
	std::cout << PROG_NAME " constructor (with name parameter) called" << std::endl;
	this->points = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &from) :
	ClapTrap(from)
{
	std::cout << PROG_NAME " copy constructor called" << std::endl;
	this->points = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << PROG_NAME " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &from)
{
	this->attackDamage = from.attackDamage;
	this->energyPoints = from.energyPoints;
	this->name = from.name;
	this->points = from.points;

	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ERR: Not enough enegy points" << std::endl;
		return;
	}
	std::cout
		<< PROG_NAME " " << this->name
		<< " attacks " << target
		<< ", causing " << this->attackDamage
		<< " points of damage!"
		<< std::endl;
	this->energyPoints--;
}

void FragTrap::highFiveGuys()
{
	std::cout
		<< PROG_NAME " " << this->name
		<< ": Requests positive high fives" << std::endl;
}
