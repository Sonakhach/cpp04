#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* m_materia[4];
        int m_index;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource &obj);
        ~MateriaSource();

    public:
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const& type);

};


#endif
