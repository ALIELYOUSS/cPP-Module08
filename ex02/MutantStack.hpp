#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack() {}
    MutantStack(MutantStack const &other) : std::stack<T, Container>(other) {}
    MutantStack &operator=(MutantStack const &other) { std::stack<T, Container>::operator=(other); return *this; }
    ~MutantStack() {}
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif