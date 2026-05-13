
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 2);
    try {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "value found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> last;
    last.push_back(1337);
    try {
        std::list<int>::iterator it2 = easyfind(last, 1);
        std::cout << "value found: " << *it2 << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
