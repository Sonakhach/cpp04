#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const int count = 2;
    Animal *p[count];
    
    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
            p[i] = new Dog();
        else
            p[i] = new Cat();
    } 
    for (int i = 0; i < count; i++)
    {
        delete p[i];
    }

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
   

    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;

    return 0;
}