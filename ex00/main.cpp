/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:44:57 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/14 16:04:16 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap	a("jenny");
	ClapTrap	b("marie");
	ClapTrap	c("eloise");

	std::cout << "\n===test 1 : all functions" << std::endl;
	a.attack("mark");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << "\n===test 2 : death" << std::endl;
	b.takeDamage(11);
	b.attack("mark");
	b.beRepaired(5);

	std::cout << "\n===test 3 : out of energy" << std::endl;
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");
	c.attack("mark");

	std::cout << "\n" << std::endl;
	return(0);
}
