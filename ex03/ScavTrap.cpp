/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:25:13 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/27 00:01:44 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

#define PROG_NAME "ScavTrap"

ScavTrap::ScavTrap() :
	ClapTrap()
{
	std::cout << PROG_NAME " default constructor called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

ScavTrap::ScavTrap(const std::string &name) :
	ClapTrap(name)
{
	std::cout << PROG_NAME " constructor (with name parameter) called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

ScavTrap::ScavTrap(const ScavTrap &from) :
	ClapTrap(from)
{
	std::cout << PROG_NAME " copy constructor called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

ScavTrap::~ScavTrap()
{
	std::cout << PROG_NAME " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &from)
{
	this->ClapTrap::operator=(from);

	std::cout << PROG_NAME " assignment operator called" << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string &target)
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

void ScavTrap::guardGate() const
{
	std::cout
		<< PROG_NAME " " << this->name
		<< ": Now in Gate keeper mode!" << std::endl;
}
