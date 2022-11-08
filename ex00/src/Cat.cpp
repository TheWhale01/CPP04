#include "Cat.hpp"

Cat::Cat(void): type("Cat")
{
	return ;
}

Cat::Cat(Cat const &rhs)
{
	*this = rhs;
}

Cat::~Cat(void)
{
	return ;
}

