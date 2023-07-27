#include "Cat.hpp"

Cat::Cat()
{
    m_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "cats do not bark" << std::endl;
    // system("say cats do not bark");
}

Cat::Cat(const Cat& obj)
{
    m_type = obj.m_type;
    std::cout << "Cat copy  constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

std::string Cat::getType(void) const
{
    return (m_type);
}