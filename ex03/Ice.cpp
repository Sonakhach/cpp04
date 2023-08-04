#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
   
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &obj):AMateria(obj.m_type)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    AMateria::operator=(obj);
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}


void Ice::use(ICharacter& target)
{
    std::cout << "Ice: " << "* shoots an ice bolt at " << target.getName() << "*" <<std::endl;
}

AMateria* Ice::clone()const
{
   AMateria* tmp = new Ice();
   return(tmp);
}