/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:49:37 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 15:07:17 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energy = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap&    FragTrap::operator=(const FragTrap &rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(const std::string &target){
	if (_energy > 0 && _hitPoints > 0){
		_energy--;
		std::cout << "FragTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage."
				  << std::endl;
	}
	else {
		if (_energy == 0){
			std::cout << "FragTrap " << _name << " doesn't have enough energy left."
					  << std::endl;
		}
		else{
			std::cout << "FragTrap " << _name << " doesn't have enough hp left."
					  << std::endl;
		}
	}
}

void	FragTrap::highFivesGuys(){
	if (_hitPoints <= 0)
		std::cout << "FragTrap " << _name << " doesn't have enough hp left." << std::endl;
	else if (_energy <= 0)
		std::cout << "FragTrap " << _name << " has no energy left." << std::endl;
	else
		std::cout << "Let's high five !" << std::endl;
}
