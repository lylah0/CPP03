/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:18:16 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/28 19:12:00 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap {
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		ScavTrap&	operator=(const ScavTrap &rhs);
		~ScavTrap();

		void	attack(const std::string &target);
		void	guardGate();
};

#endif
