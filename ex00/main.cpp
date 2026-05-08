#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 2);
    try {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(42);
    try {
        std::list<int>::iterator it2 = easyfind(lst, 1);
        std::cout << "Found: " << *it2 << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found: " << e.what() << std::endl;
    }
    return 0;
}
