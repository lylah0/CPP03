/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:25:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/15 12:58:38 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap&	operator=(const FragTrap &rhs);
		~FragTrap();

		void attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
