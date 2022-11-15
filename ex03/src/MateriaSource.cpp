#include "Materias.hpp"
#include "MateriaSource.hpp"

int MateriaSource::_index;

MateriaSource::MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	*this = rhs;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < rhs._index; i++)
	{
		delete this->_tmp[i];
		if (rhs._tmp[i]->getType() == "ice")
			this->_tmp[i] = new Ice();
		else
			this->_tmp[i] = new Cure();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_index == 4)
		this->_index = 0;
	this->_tmp[this->_index++] = m;
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}