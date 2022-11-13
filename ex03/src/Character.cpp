#include "Character.hpp"

Character::Character(void): _name("default")
{
	return ;
}

Character::~ICharacter(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character::Character(Character const &rhs)
{
	*this = rhs;
	return ;
}

Character::Character(std::string const &name): _name(name)
{
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	return (*this);
}

void Character::use(int idx, ICharacter &target)
{

}