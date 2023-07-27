#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    m_brain = new Brain();
    m_type = "Dog";
}

Dog::~Dog()
{
   delete m_brain; 
   std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{

    std::cout << "dog do not mlavel" << std::endl;
}
Dog::Dog(const Dog& obj)
{
    m_brain = obj.m_brain;
    m_type = obj.m_type;
    std::cout << "Dog copy  constructor called" << std::endl;
}
Dog & Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        m_type = obj.m_type;
        m_brain = new Brain(*obj.m_brain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}



std::string Dog::getType(void) const
{
    return (m_type);
}