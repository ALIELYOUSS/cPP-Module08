# C++ Module 08: Templated Containers, Iterators, and Algorithms

Solutions for **42's C++ Module 08**, focused on generic programming and the
practical use of STL containers, iterators, and algorithms in C++98.

## Exercises

| Directory | Program | Topic | Main concept |
| --- | --- | --- | --- |
| `ex00` | `00` | `easyfind` | Generic search with iterators |
| `ex01` | `ex01` | `Span` | Range insertion and numerical spans |
| `ex02` | `02` | `MutantStack` | Iteration over an adapted container |

## Requirements

- A C++ compiler with C++98 support
- `make`
- Unix-like environment

The exercises are compiled with:

```text
c++ -Wall -Wextra -Werror -std=c++98
```

No external libraries are required.

## Build and Run

Each exercise has an independent Makefile. Build and run it from its own
directory:

### `ex00` - easyfind

```bash
cd ex00
make
./00
```

`easyfind` is a function template that searches for an integer in a compatible
container using `std::find`. It returns an iterator to the matching value and
throws an exception when the value is not found.

The test covers both `std::vector<int>` and `std::list<int>`.

### `ex01` - Span

```bash
cd ex01
make
./ex01
```

`Span` stores a bounded collection of integers and provides:

- `addNumber(int)` for individual values
- A range-based `addNumber` overload
- `shortestSpan()` for the smallest distance between two values
- `longestSpan()` for the largest distance between two values

The test also demonstrates inserting a range of 1,000 values.

### `ex02` - MutantStack

```bash
cd ex02
make
./02
```

`MutantStack` extends `std::stack` with `begin()` and `end()` iterators while
preserving the normal stack interface. The test demonstrates push/pop
operations, traversal, and construction of a standard stack from the adapter.

## Makefile Commands

Run these commands from an exercise directory:

```bash
make          # Build the exercise
make clean    # Remove object files
make fclean   # Remove object files and the executable
make re       # Rebuild from scratch
```

To clean every exercise from the repository root:

```bash
for directory in ex00 ex01 ex02; do make -C "$directory" fclean; done
```

## Project Structure

```text
.
├── ex00/
│   ├── easyfind.hpp
│   ├── Makefile
│   └── main.cpp
├── ex01/
│   ├── Makefile
│   ├── Span.cpp
│   ├── Span.hpp
│   └── main.cpp
├── ex02/
│   ├── Makefile
│   ├── MutantStack.hpp
│   └── main.cpp
└── README.md
```

## C++98 Concepts

This module practices function templates, class templates, iterator types,
STL algorithms, exception handling, range insertion, and container adapters.
Templates are implemented in header files so they can be instantiated by the
calling translation unit.
