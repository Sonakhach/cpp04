#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    m_index = 0;
    for(int i = 0; i < 4; ++i)
    {
        this->m_materia[i] = NULL;
    }
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj) : IMateriaSource(obj)
{
    m_index = obj.m_index;
    for(int i = 0; i < 4; ++i)
    {
        delete m_materia[i];
        m_materia[i] = NULL;
    }
    for(int i = 0; i < 4; ++i)
    {
        if(obj.m_materia[i])
            this->m_materia[i] = obj.m_materia[i]->clone();
        else
            break;
    }
    std::cout << "Copy MateriaSource constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    m_index = obj.m_index;
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
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
        for(int i = 0; i < 4; ++i)
        {
            delete m_materia[i];
            m_materia[i] = NULL;
        }
    std::cout << "MateriaSource Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
        if (m_index < 4)
        {
            m_materia[m_index] = m->clone();
            m_index++;
        }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
       for(int i = 0; i < 4; ++i)
        {
            if(m_materia[i]->getType() == type)
                return(this->m_materia[i]->clone());
        }
        return 0;
}