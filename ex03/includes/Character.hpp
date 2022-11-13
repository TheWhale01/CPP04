#pragma once

#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory = NULL;

	public:
		Character(void);
		Character(Character const &rhs);
		Character(std::string const &name);

		Character &operator=(Character const &rhs);
};