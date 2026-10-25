#include "../LibraryCPP/stack.h"
#include <cassert>
#include <iostream>

int main()
{
   
    Stack *stack = stack_create();
    assert(stack != nullptr);
    assert(stack_empty(stack));

    
    stack_push(stack, "A");
    assert(!stack_empty(stack));
    assert(stack_get(stack) == "A");

   
    stack_push(stack, "B");
    stack_push(stack, "C");
    assert(stack_get(stack) == "C");

   
    stack_pop(stack);
    assert(stack_get(stack) == "B");

    stack_pop(stack);
    assert(stack_get(stack) == "A");

    
    stack_pop(stack);
    assert(stack_empty(stack));

   
    stack_pop(stack);
    assert(stack_empty(stack));
    assert(stack_get(stack) == "");

   
    stack_push(stack, "D");
    assert(stack_get(stack) == "D");

    stack_pop(stack);
    assert(stack_empty(stack));

    
    stack_delete(stack);

    std::cout << "All stack tests passed!" << std::endl;
    return 0;
}
