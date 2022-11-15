#include "Materias.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// Will return a NULL pointer
	tmp = src->createMateria("bonsoir");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	//cannot use 1 index anymore
	me->unequip(1);
	me->use(1, *bob);
	// 3 index does not exists
	me->use(3, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}