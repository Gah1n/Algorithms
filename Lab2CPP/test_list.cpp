#include "../LibraryCPP/list.h"
#include <cassert>
#include <iostream>

int main()
{
    
    List *list = list_create();
    assert(list != nullptr);
    assert(list_first(list) == nullptr);

    
    list_insert(list, "A");
    assert(list_first(list) != nullptr);
    assert(list_item_data(list_first(list)) == "A");

    
    list_insert(list, "B");
    list_insert(list, "C");
    assert(list_item_data(list_first(list)) == "C");

    
    list_erase_first(list);
    assert(list_item_data(list_first(list)) == "B");

    list_erase_first(list);
    assert(list_item_data(list_first(list)) == "A");

    list_erase_first(list);
    assert(list_first(list) == nullptr);

    
    assert(list_erase_first(list) == nullptr);

    
    list_insert(list, "D");
    assert(list_item_data(list_first(list)) == "D");

   
    list_delete(list);

    std::cout << "All list tests passed!" << std::endl;
    return 0;
}
