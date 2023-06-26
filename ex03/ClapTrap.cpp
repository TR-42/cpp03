/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:38:48 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/26 22:53:25 by kfujita          ###   ########.fr       */
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

ClapTrap::ClapTrap(
	const std::string& name
) :
	name(name),
	points(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap constructor (with name parameter) called" << std::endl;
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

	std::cout << "ClapTrap assignment operator called" << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ERR: Not enough enegy points (ClapTrap(" << this->name << ")::attack(" << target << "))" << std::endl;
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
		std::cout << "ERR: cannot sub some points (ClapTrap(" << this->name << ")::takeDamage(" << amount << "))" << std::endl;
		this->points = 0;
	}

	std::cout << "ClapTrap(" << this->name << "): takeDamage(" << amount << ") -> Current Point: " << this->points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ERR: Not enough enegy points (ClapTrap(" << this->name << ")::beRepaired(" << amount << "))" << std::endl;
		return;
	}
	this->points += amount;
	this->energyPoints--;

	std::cout
		<< "ClapTrap(" << this->name
		<< "): beRepaired(" << amount
		<< ") -> Current Point: " << this->points
		<< ", Current Energy Point: " << this->energyPoints
		<< std::endl;
}
