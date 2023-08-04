#include "Cure.hpp"

Cure::Cure()
{
    m_type = "cure";
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
    this->m_type = obj.m_type;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->m_type = obj.m_type;
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure constructor called" << std::endl;
}


void Cure::use(ICharacter& target)
{
    std::cout << "Cure: " << "* heals " << target.getName() << "'s wounds * " << std::endl;
}

AMateria* Cure::clone()const
{
    AMateria* tmp = new Cure();
    return(tmp);
}