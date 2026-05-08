#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>

class Span {
public:
    Span(unsigned int n);
    Span(Span const &other);
    ~Span();
    Span &operator=(Span const &other);

    void addNumber(int nbr);

    template <typename InputIt>
    void addNumber(InputIt begin, InputIt end) {
        long dist = std::distance(begin, end);
        if (dist > static_cast<long>(_capacity - _numbers.size()))
            throw std::out_of_range("Not enough capacity to add range");
        _numbers.insert(_numbers.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;

private:
    unsigned int _capacity;
    std::vector<int> _numbers;
};

#endif
