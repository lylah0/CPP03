/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:26:38 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/15 13:00:00 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energy = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (_hitPoints <= 0)
		std::cout << _name << " has no hp left and therefore cannot attack." << std::endl;
	else if (_energy <= 0)
		std::cout << _name << " has no energy left." << std::endl;
	else{
		_energy--;
		std::cout << "ScavTrap " << _name << " attacks " << target
				  << " for " << _attackDamage << " amount of damage "
				  << std::endl;
	}
}

void	ScavTrap::guardGate(){
	if (_energy && _hitPoints)
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
	else{
		if (!_hitPoints){
			std::cout << _name << " has no hp left and therefore cannot guard the gate." << std::endl;
		}
		else
			std::cout << _name << " has no energy left and therefore cannot guard the gate." << std::endl;
	}
}
