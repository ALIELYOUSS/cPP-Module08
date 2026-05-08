#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span(unsigned int n) : _capacity(n) {}

Span::Span(Span const &other) : _capacity(other._capacity), _numbers(other._numbers) {}

Span::~Span() {}

Span &Span::operator=(Span const &other) {
    if (this != &other) {
        _capacity = other._capacity;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int nbr) {
    if (_numbers.size() >= _capacity)
        throw std::out_of_range("Span is full");
    _numbers.push_back(nbr);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::vector<int> copy = _numbers;
    std::sort(copy.begin(), copy.end());
    int minDiff = INT_MAX;
    for (size_t i = 1; i < copy.size(); ++i) {
        int diff = copy[i] - copy[i - 1];
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    int minV = *std::min_element(_numbers.begin(), _numbers.end());
    int maxV = *std::max_element(_numbers.begin(), _numbers.end());
    return maxV - minV;
}
