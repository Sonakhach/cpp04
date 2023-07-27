#include "WrongCat.hpp"

WrongCat::WrongCat()
{   
     m_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
     std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& obj)
{
    m_type = obj.m_type;
    std::cout << "WrongCat copy  constructor called" << std::endl;
}
WrongCat & WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return (*this);
}


std::string WrongCat::getType(void) const
{
    return (m_type);
}
void WrongCat::makeSound(void)const
{
    std::cout << "WrongCat sound" << std::endl;
    // system("say WrongCat sound");
}