#include "Stack.hpp"

// Test function - you can modify this to test your implementation
int main() {
    Stack<int> stack(5);
    
    std::cout << "Testing Stack..." << std::endl;
    
    // Test Push
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    stack.Print(); // Should print: Stack (top to bottom): 30 -> 20 -> 10
    
    // Test Top
    std::cout << "Top element: " << stack.Top() << std::endl; // Should print: 30
    
    // Test Pop
    std::cout << "Popped: " << stack.Pop() << std::endl; // Should print: 30
    stack.Print(); // Should print: Stack (top to bottom): 20 -> 10
    
    // Test Size
    std::cout << "Size: " << stack.Size() << std::endl; // Should print: 2
    
    // Test IsEmpty
    std::cout << "Is empty: " << (stack.IsEmpty() ? "Yes" : "No") << std::endl; // Should print: No
    
    // Pop remaining elements
    std::cout << "Popped: " << stack.Pop() << std::endl; // Should print: 20
    std::cout << "Popped: " << stack.Pop() << std::endl; // Should print: 10
    
    std::cout << "Is empty: " << (stack.IsEmpty() ? "Yes" : "No") << std::endl; // Should print: Yes
    
    return 0;
}
