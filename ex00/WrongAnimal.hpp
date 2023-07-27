#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string m_type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal & obj);
    WrongAnimal & operator=(const WrongAnimal& obj);
    void makeSound(void)const;
    virtual ~WrongAnimal();
    std::string getType(void) const;
};
#endif