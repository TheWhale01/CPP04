#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const &rhs);
		~Cat(void);

		Cat &operator=(Cat const &rhs);
};

#endif