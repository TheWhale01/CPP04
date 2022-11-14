#include "Materias.hpp"

Ice::Ice(void)
{
	return ;
}

Ice::Ice(Ice const &rhs)
{
	*this = rhs;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *cln = new Ice(*this);

	return (cln);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* Cure */

Cure::Cure(void)
{
	return ;
}

Cure::Cure(Cure const &rhs)
{
	*this = rhs;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *cln = new Cure(*this);

	return (cln);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}