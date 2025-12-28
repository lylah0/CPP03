/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:26:38 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/28 20:07:56 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energy = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
	_attackDamage = src._attackDamage;
	_energy = src._energy;
	_hitPoints = src._hitPoints;
	_name = src._name;
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
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
