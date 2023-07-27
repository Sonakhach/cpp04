#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        m_ideas[i] = obj.m_ideas[i];
    }
}
Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &obj)
        for (int i = 0; i < 100; i++)
        {
            m_ideas[i] = obj.m_ideas[i];
        }
    return(*this);
}