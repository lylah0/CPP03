/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:30:30 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/28 20:03:36 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"
#include "../ClapTrap.hpp"

int	main(){
	std::cout << "test 1" << std::endl;
	ScavTrap	a("Alice");
	a.attack("jules");
	a.takeDamage(6);
	a.beRepaired(3);

	std::cout << "test 2" << std::endl;
	ScavTrap	b("marie");
	b.takeDamage(101);
	b.takeDamage(1);
	b.attack("jules");
	b.guardGate();
	return (0);
}
