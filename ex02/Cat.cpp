#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    m_brain = new Brain();
    m_type = "Cat";
}

Cat::~Cat()
{
    delete m_brain;
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "cats do not bark" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    m_type = obj.m_type;
    // m_brain = obj.m_brain;
    m_brain = new Brain(*obj.m_brain);
    std::cout << "Cat copy  constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& obj)
{
    // Animal::operator=(obj);
    if (this != &obj)
    {
        *m_brain = *obj.m_brain;
        m_type = obj.m_type;
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}



std::string Cat::getType(void) const
{
    return (m_type);
}