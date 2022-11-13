#pragma once

#include <iostream>
#include "Character.hpp"

class AMateria
{
	protected:
		std::string const type;

	public:
		AMateria(std::string const &type);
	
		std::string const &getType(void) const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};