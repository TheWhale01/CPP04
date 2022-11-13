#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &rhs);
		~Ice(void);

		Ice &operator=(Ice const &rhs);
};

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &rhs);
		~Cure(void);

		Cure &operator=(Cure const &rhs);
};