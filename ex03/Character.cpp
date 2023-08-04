#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    std::cout << "Character default constructor called " << std::endl;
    for(int i = 0; i < 4; ++i)
    {
        this->m_materia[i] = NULL;
    }
    this->m_name = "default";
}

Character::Character(const Character& obj)
{
    for(int i = 0; i < 4; ++i)
    {
        delete m_materia[i];
        m_materia[i] = NULL;
    }
    for(int i = 0; i < 4; ++i)
    {
        if (obj.m_materia[i])
        {
            this->m_materia[i] = obj.m_materia[i]->clone();
        }
        else
            break;
    }
    this->m_name = obj.getName();
    std::cout << "Character copy constructor called" << std::endl;
}

Character::Character(const std::string& name)
{
    std::cout << "Parameter constructor called" << std::endl;
    for(int i = 0; i < 4; ++i)
    {
        this->m_materia[i] = NULL;
    }
    this->m_name = name;
}

Character& Character::operator=(const Character& obj)
{
    if(this != &obj)
    {
        for(int i = 0; i < 4; ++i)
        {
            delete m_materia[i];
            m_materia[i] = NULL;
        }
        for(int i = 0; i < 4; ++i)
        {
            if (obj.m_materia[i])
                this->m_materia[i] = obj.m_materia[i]->clone();
            else
                break;
        }
    }
    this->m_name = obj.getName();
    std::cout << "Character copy assignment operator called" << std::endl;
    return(*this);
}

std::string const &Character::getName() const
{
    return (m_name);
}

Character::~Character()
{
    for(int i = 0; i < 4; ++i)
    {
        delete m_materia[i];
        m_materia[i] = NULL;
    }
    std::cout << "Character destructor called" << std::endl;
}

void Character::equip(AMateria* m)
{

    for(int i = 0; i < 4; ++i)
    {
        if(this->m_materia[i] == NULL)
        {
            this->m_materia[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if((idx >= 0 && idx < 4) && m_materia[idx] != NULL)
    {
        this->m_materia[idx] = NULL;
    }
    else
    {
        std::cout << "Cannot unequip Materia of m_materia!" << std::endl;
        return ;
    }
 }


void Character::use(int idx, ICharacter& target)
{
    
    if((idx >= 0 && idx < 4) && m_materia[idx] != NULL)
    {
       
            this->m_materia[idx]->use(target);
    }
    else
    {
        std::cout << "Cannot use Materia of m_materia!" << std::endl;
        return;
    }

}
