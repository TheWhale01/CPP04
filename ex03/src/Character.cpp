#include "Materias.hpp"
#include "Character.hpp"

int Character::_inv_index;

Character::Character(void): _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(Character const &rhs)
{
	*this = rhs;
	return ;
}

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		if (rhs._inventory[i]->getType() == "ice")
			this->_inventory[i] = new Ice();
		else
			this->_inventory[i] = new Cure();
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (this->_inv_index == 4)
	{
		std::cout << "Inventory full." << std::endl;
		return ;
	}
	this->_inventory[this->_inv_index++] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Index not in range (0, 4)" << std::endl;
		return ;
	}
	
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_inv_index || idx < 0)
	{
		std::cout << "Index not in range (0, " << this->_inv_index << ")" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}