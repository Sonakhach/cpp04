#include "Animal.hpp"

Animal::Animal()
{
    m_type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
Animal::Animal(const Animal& obj)
{
    m_type = obj.m_type;
    std::cout << "Animal copy  constructor called" << std::endl;
}
Animal & Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return (*this);
}

void Animal::setType(std::string type )
{
    m_type = type;
}

std::string Animal::getType(void) const
{
    return (m_type);
}