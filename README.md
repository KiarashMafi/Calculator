# C++ Calculator

A simple command-line calculator written in C++.

## Features

- Basic arithmetic operations: addition, subtraction, multiplication, division
- Support for integer and floating point numbers
- Simple, single-file implementation
- Input validation for invalid operators and division by zero

## Requirements

- A C++ compiler with C++11 support or newer (e.g. `g++`, `clang++`, or MSVC)
- A terminal / command prompt

## Build

### Using g++ (Linux / macOS)

```bash
g++ -std=c++11 -O2 -o calculator main.cpp
```

### Using g++ (Windows, with MinGW)

```bash
g++ -std=c++11 -O2 -o calculator.exe main.cpp
```

If your source file has a different name, replace `main.cpp` with that filename.

## Run

After building, run the executable from the terminal.

Linux / macOS:

```bash
./calculator
```

Windows:

```bash
calculator.exe
```

## Example Usage

Example interaction:

```text
Enter first number: 10
Enter operator (+ - * /): *
Enter second number: 3.5
Result: 35
```

## Project Structure

A minimal layout could look like this:

```text
.
├── main.cpp       # Calculator implementation
└── README.md
```

If your project grows, you can split code into multiple files, for example:

```text
.
├── include/
│   └── calculator.hpp
├── src/
│   └── calculator.cpp
├── main.cpp
└── README.md
```

## Notes

- Division by zero is checked and should be handled with an error message instead of crashing.
- You can extend the calculator to support more operations (power, modulo, parentheses, etc.) or expression parsing.
