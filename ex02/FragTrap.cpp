/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:25:13 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/27 00:05:56 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

#define PROG_NAME "FragTrap"

FragTrap::FragTrap() :
	ClapTrap()
{
	std::cout << PROG_NAME " default constructor called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(const std::string &name) :
	ClapTrap(name)
{
	std::cout << PROG_NAME " constructor (with name parameter) called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(const FragTrap &from) :
	ClapTrap(from)
{
	std::cout << PROG_NAME " copy constructor called" << std::endl;
	this->points = this->DEFAULT_POINTS;
	this->energyPoints = this->DEFAULT_ENERGY_POINTS;
	this->attackDamage = this->DEFAULT_ATTACK_DAMAGE;
}

FragTrap::~FragTrap()
{
	std::cout << PROG_NAME " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &from)
{
	this->ClapTrap::operator=(from);

	std::cout << PROG_NAME " assignment operator called" << std::endl;

	return *this;
}

void FragTrap::highFiveGuys() const
{
	std::cout
		<< PROG_NAME " " << this->name
		<< ": Requests positive high fives" << std::endl;
}
