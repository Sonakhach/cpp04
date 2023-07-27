#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
private:
    std::string m_type;
public:
    void makeSound() const;
    Cat();
    Cat(const Cat & obj);
    Cat &operator=(const Cat& obj);
    ~Cat();
    std::string getType(void) const;
};


#endif 
