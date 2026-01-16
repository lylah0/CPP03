/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:00:40 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 15:03:02 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int    main(){
	FragTrap	a("Marie");
	FragTrap	b("Anna");
	FragTrap	c("Lysa");

	std::cout << "\n===test 1 : high five" << std::endl;
	a.attack("Jean");
	a.highFivesGuys();
	a.takeDamage(50);

	std::cout << "\n===test 2 : ran out of energy" << std::endl;
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.attack("Jean");
	b.beRepaired(10);
	b.attack("Jean");
	b.highFivesGuys();
	b.takeDamage(50);

	std::cout << "\n===test 3 : ran out of hp" << std::endl;
	c.takeDamage(50);
	c.takeDamage(50);
	c.attack("Jean");
	c.beRepaired(10);
	c.highFivesGuys();
	std::cout << "\n" << std::endl;
}
