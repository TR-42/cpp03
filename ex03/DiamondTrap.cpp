/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:54:18 by kfujita           #+#    #+#             */
/*   Updated: 2023/07/24 23:38:29 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

#define PROG_NAME "DiamondTrap"
#define NAME_SUFFIX "_clap_name"

DiamondTrap::DiamondTrap() :
	FragTrap(),
	ScavTrap()
{
	std::cout << PROG_NAME " default constructor called" << std::endl;
	this->points = this->FragTrap::DEFAULT_POINTS;
	this->energyPoints = this->ScavTrap::DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->FragTrap::DEFAULT_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(const std::string &name) :
	FragTrap(),
	ScavTrap(),
	name(name)
{
	std::cout << PROG_NAME " constructor (with name parameter) called" << std::endl;

	this->ClapTrap::name = name + NAME_SUFFIX;
	this->points = this->FragTrap::DEFAULT_POINTS;
	this->energyPoints = this->ScavTrap::DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->FragTrap::DEFAULT_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(const DiamondTrap &from) :
	FragTrap(from),
	ScavTrap(from),
	name(from.name)
{
	std::cout << PROG_NAME " copy constructor called" << std::endl;
	// this->ClapTrap::name = name + NAME_SUFFIX;
	this->points = this->FragTrap::DEFAULT_POINTS;
	this->energyPoints = this->ScavTrap::DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->FragTrap::DEFAULT_ATTACK_DAMAGE;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PROG_NAME " destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &from)
{
	this->FragTrap::operator=(from);
	this->ScavTrap::operator=(from);

	this->name = from.name;

	std::cout << PROG_NAME " assignment operator called" << std::endl;

	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout
		<< "Who am I...? -> "
		<< "DiamondTrap Name: " << this->name
		<< ", "
		<< "ClapTrap Name: " << this->ClapTrap::name
		<<std::endl
		;
}
