/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:30:30 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/14 16:31:27 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(){
	std::cout << "\n===test 1 :" << std::endl;
	ScavTrap	a("Alice");
	ScavTrap	b("marie");
	ScavTrap	c("eloise");

	a.attack("jules");
	a.takeDamage(6);
	a.beRepaired(3);

	std::cout << "\n===test 2 :" << std::endl;
	b.guardGate();
	b.takeDamage(101);
	b.takeDamage(1);
	b.attack("jules");
	b.guardGate();

	std::cout << "\n===test 3 :" << std::endl;
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	c.attack("jules");
	std::cout << "\n" << std::endl;

	return (0);
}
