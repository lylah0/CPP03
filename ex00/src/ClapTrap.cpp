/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:36:31 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/29 13:21:29 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), _attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){
	_attackDamage = src._attackDamage;
	_energy = src._energy;
	_hitPoints = src._hitPoints;
	_name = src._name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs){
	if (this != &rhs){
		this->_attackDamage = rhs._attackDamage;
		this->_energy = rhs._energy;
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (_energy > 0 && _hitPoints > 0){
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage."
				  << std::endl;
	}
	else {
		if (_energy == 0){
			std::cout << "ClapTrap " << _name << " doesn't have enough energy left."
					  << std::endl;
		}
		else{
			std::cout << "ClapTrap " << _name << " doesn't have enough hp left"
					  << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energy != 0 && _hitPoints){
		_hitPoints += amount;
		_energy -= 1;
		std::cout << "ClapTrap " << _name << " has repaired "
				  << amount << " of health" << std::endl;
	}
	else {
		if (_energy == 0){
			std::cout << "ClapTrap " << _name << " doesn't have enough energy left."
					  << std::endl;
		}
		else{
			std::cout << "ClapTrap " << _name << " doesn't have enough hp left"
			<< std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints != 0){
		_hitPoints -= static_cast<int>(amount);
		if (_hitPoints < 0)
			_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has taken "
				  << amount << " point of damage." << std::endl;
				}
	else{
		std::cout << _name << " is already dead." << std::endl;
	}
}
