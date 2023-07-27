
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): m_type(" WrongAnimal ")
{
    
     std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    m_type = obj.m_type;
    std::cout << "WrongAnimal copy  constructor called" << std::endl;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return (*this);
}
void WrongAnimal::makeSound(void)const
{
    std::cout << "WrongAnimal sound" << std::endl;
}



std::string WrongAnimal::getType(void) const
{
    return (m_type);
}