# Stack Implementation with Array

This project implements a Stack data structure using a dynamic array as the underlying storage mechanism.

## Project Structure

```
stack/
├── main.cpp          # Main program with test cases
├── Stack.hpp         # Header file with class declarations and implementations
├── CMakeLists.txt    # CMake build configuration
├── Makefile          # Make build configuration
└── README.md         # This file
```

## Files Description

- **main.cpp**: Contains the main function with test cases to demonstrate stack operations
- **Stack.hpp**: Header file containing the Stack class declaration and method implementations
- **CMakeLists.txt**: CMake configuration for building the project
- **Makefile**: Make configuration for building the project

## Stack Operations

The Stack class provides the following operations:
- `Push(value)`: Adds an element to the top of the stack
- `Pop()`: Removes and returns the top element
- `Top()`: Returns the top element without removing it
- `IsEmpty()`: Checks if the stack is empty
- `IsFull()`: Checks if the stack is full
- `Size()`: Returns the number of elements in the stack
- `Print()`: Displays the stack contents for debugging

## Compilation and Running

### Method 1: Using CMake (Recommended)

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Generate build files:
   ```bash
   cmake ..
   ```

3. Build the project:
   ```bash
   cmake --build .
   ```

4. Run the executable:
   ```bash
   ./bin/stack
   ```

### Method 2: Using Make (Alternative)

1. Build the project:
   ```bash
   make
   ```

2. Run the executable:
   ```bash
   ./stack
   ```

3. Or build and run in one command:
   ```bash
   make run
   ```

#### Additional Make Targets

- `make clean`: Remove build artifacts
- `make help`: Show available targets

## Requirements

- C++17 compatible compiler (g++, clang++, or MSVC)
- CMake 3.10 or later (for CMake method)
- Make (for Make method)

## Expected Output

When you run the program, you should see output similar to:

```
Testing Stack...
Stack (top to bottom): 30 -> 20 -> 10
Top element: 30
Popped: 30
Stack (top to bottom): 20 -> 10
Size: 2
Is empty: No
Popped: 20
Popped: 10
Is empty: Yes
```

## Implementation Notes

- The Stack uses a dynamic array as its underlying data structure
- The stack maintains a top index to track the current position
- Default capacity is 100 elements, but can be customized in the constructor
- All operations include proper error handling for empty/full stack conditions
- The implementation includes template support for different data types
- Memory is properly managed with dynamic allocation and deallocation
