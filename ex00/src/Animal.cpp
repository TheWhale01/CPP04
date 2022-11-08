#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called." << std::endl;
	return ;
}

Animal::Animal(Animal const &rhs)
{
	*this = rhs;
	return ;
}

Animal::~Animal(void)
{
	return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}