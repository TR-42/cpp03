/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:38:48 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/24 19:56:48 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	points(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &from) :
	name(from.name),
	points(from.points),
	energyPoints(from.energyPoints),
	attackDamage(from.energyPoints)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &from)
{
	this->attackDamage = from.attackDamage;
	this->energyPoints = from.energyPoints;
	this->name = from.name;
	this->points = from.points;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ERR: Not enough enegy points" << std::endl;
		return;
	}
	std::cout
		<< "ClapTrap " << this->name
		<< " attacks " << target
		<< ", causing " << this->attackDamage
		<< " points of damage!"
		<< std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->points)
		this->points -= amount;
	else
	{
		std::cout << "ERR: cannot sub some points" << std::endl;
		this->points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ERR: Not enough enegy points" << std::endl;
		return;
	}
	this->points += amount;
	this->energyPoints--;
}
