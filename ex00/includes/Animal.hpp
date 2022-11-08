#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &rhs);
		~Animal(void);

		Animal &operator=(Animal const &rhs);

		void makeSound(void) const;

	protected:
		std::string type;
};

#endif