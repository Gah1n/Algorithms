add_library(LibraryCPP STATIC list.cpp stack.cpp)

add_library(LibraryCPPInt STATIC list.cpp stack.cpp)

target_compile_definitions(LibraryCPPInt PUBLIC LIBRARY_DATA_INT)

add_subdirectory(Tests)