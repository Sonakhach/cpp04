#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
class AMateria;

class Character : public ICharacter
{
    protected:
        std::string m_name;
        AMateria* m_materia[4];

    public:
        Character();
        Character(const Character& obj);
        Character(const std::string& name);
        Character& operator=(const Character& obj);
        ~Character();
    public:
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};


#endif