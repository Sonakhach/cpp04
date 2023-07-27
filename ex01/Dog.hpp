#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

 class Dog: public Animal
 {
  private:
    std::string m_type;
    Brain* m_brain;
 public:
    Dog();
    Dog(const Dog & obj);
    Dog & operator=(const Dog& obj);
    void makeSound(void) const;
    ~Dog();
    std::string getType(void) const;
 };
 
 #endif 
 