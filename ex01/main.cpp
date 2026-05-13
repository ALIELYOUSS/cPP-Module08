#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
    Span sp(6);
    sp.addNumber(7);
    sp.addNumber(8);
    sp.addNumber(18);
    sp.addNumber(10);
    sp.addNumber(12);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span big(1000);
    std::vector<int> values;
    for (int i = 0; i < 1000; ++i)
        values.push_back(i * 3 % 10000);
    big.addNumber(values.begin(), values.end());
    std::cout << "Big shortest: " << big.shortestSpan() << std::endl;
    std::cout << "Big longest: " << big.longestSpan() << std::endl;
    return 0;
}
