#include "AMateria.hpp"
#include "Materias.hpp"

AMateria::AMateria(std::string const &type): type(type)
{
	return ;
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}