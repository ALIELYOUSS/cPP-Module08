C++ Module 08 - Templated containers, iterators, algorithms
===========================================================

This repository contains solutions for Module 08 exercises (ex00, ex01, ex02).

Structure
- ex00/: easyfind template (easyfind.hpp / easyfind.h) and a test main.cpp.
- ex01/: Span class (Span.hpp / Span.cpp) with tests and a Makefile.
- ex02/: MutantStack template (MutantStack.hpp / MutantStack.h) and test main.cpp.

Build
-----
Each exercise folder contains a `Makefile`. From the exercise folder run:

```
make
./ex0n   # ex00 -> ./ex00, ex01 -> ./ex01, ex02 -> ./ex02
```

Notes
-----
- Code is compliant with C++98 and compiled with flags -Wall -Wextra -Werror -std=c++98.
- Templates are implemented in headers where appropriate.
- No external libraries are used.

See each exercise folder for details and example output.
