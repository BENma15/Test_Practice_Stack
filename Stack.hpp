#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Stack {
private:
    T* data;
    int capacity;
    int top;
    
public:
    // TODO: Implement constructor
    // Initialize data array with given capacity, top to -1
    Stack(int maxSize = 100) : capacity(maxSize), top(-1) {
        // TODO: Initialize data array with given capacity, top to -1
    }
    
    // TODO: Implement destructor
    ~Stack() {
        // TODO: Delete the data array to prevent memory leaks
    }
    
    // TODO: Implement Push(const T& value) operation
    void Push(const T& value) {
        // TODO: Add element to the top of the stack
        // Throw an exception if stack is full
    }
    
    // TODO: Implement Pop() operation
    T Pop() {
        // TODO: Remove and return the top element
        // Throw an exception if stack is empty
    }
    
    // TODO: Implement Top() operation
    T Top() const {
        // TODO: Return the top element without removing it
        // Throw an exception if stack is empty
    }
    
    // Utility functions
    bool IsEmpty() const {
        return top == -1;
    }
    
    bool IsFull() const {
        return top == capacity - 1;
    }
    
    int Size() const {
        return top + 1;
    }
    
    // Print function for debugging
    void Print() const {
        std::cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            std::cout << data[i];
            if (i > 0) {
                std::cout << " -> ";
            }
        }
        std::cout << std::endl;
    }
};

#endif // STACK_HPP
