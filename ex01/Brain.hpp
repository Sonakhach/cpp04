#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
class Brain
{
private:
    std::string m_ideas[100];
public:
    Brain();
    Brain(const Brain &obj);
    Brain& operator=(const Brain &obj);
    ~Brain();
};

#endif
