#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " j " << std::endl;
    std::cout << i->getType() << " i " << std::endl;
    j->makeSound();
    i->makeSound(); 
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    const WrongAnimal* x = new WrongAnimal();
    const WrongAnimal* y = new WrongCat();

    std::cout << x->getType() << " x " << std::endl;
    std::cout << y->getType() << " y " << std::endl;
    x->makeSound();
    y->makeSound();
    delete x;
    delete y;

    return 0;
}