#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;


class AMateria
{
    protected:
        std::string m_type;

    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &obj);
        AMateria& operator=(const AMateria &obj);
        virtual ~AMateria();
    public:
        virtual std::string const &getType()const;
        virtual AMateria* clone()const = 0;
        virtual void use(ICharacter& target);
};


#endif