#include <iostream>
#include "../src/stack/stack.h"

int main(void) {
    Stack s = Stack();
    SValue val;

    std::cout << "Putting items on the stack: 1,2,3" << std::endl;
    s.push(1);
    s.push(2);
    s.push(3);
    std::cout << "Popping items off the stack and printing:" << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    try
    {
        //  try to pop from an empty stack
        val = s.pop();
        print(val);
    } catch( const char *msg )
    {
        std::cerr << msg << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Putting items on the stack: 4,5,6" << std::endl << "Pushing 4" << std::endl;
    s.push(4);
    std::cout << "Stack depth: " << s.size() << std::endl;
    std::cout << "Pushing 5" << std::endl;
    s.push(5);
    std::cout << "Stack depth: " << s.size() << std::endl;
    std::cout << "Pushing 6" << std::endl;
    s.push(6);
    std::cout << "Stack depth: " << s.size() << std::endl;
    std::cout << "Printing the stack:" << std::endl;
    s.print();

    return 0;
}
