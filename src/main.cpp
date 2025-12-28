/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:44:57 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/28 15:03:19 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

int	main(){
	ClapTrap	a("jenny");
	ClapTrap	b("nils");

	std::cout << "test 1" << std::endl;
	a.attack("mark");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << "test 2" << std::endl;
	b.takeDamage(11);
	b.attack("mark");
	b.beRepaired(5);
	return(0);
}
