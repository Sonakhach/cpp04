#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
    std::cout << "Parameter constructor called" << std::endl;
    this->m_type = type;

}

AMateria::AMateria(const AMateria& obj)
{
    this->m_type = obj.m_type;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->m_type = obj.m_type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void)const
{
    return(this->m_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Used some materia on " << target.getName() <<std::endl;
}