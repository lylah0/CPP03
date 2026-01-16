/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:16:04 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/15 12:48:53 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap{
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energy;
		int				_attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		ClapTrap&	operator=(const ClapTrap &rhs);
		virtual	~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
