#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string m_type;
public:
    Animal();
    Animal(const Animal & obj);
    Animal &operator=(const Animal& obj);
    virtual ~Animal();
    virtual  void makeSound() const = 0;
    void setType(std::string type);
    std::string getType(void) const;
};

#endif