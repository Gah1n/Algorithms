
add_executable(Lab2CPP main.cpp)

target_link_libraries(Lab2CPP PRIVATE LibraryCPP)

target_include_directories(Lab2CPP PRIVATE
    ${CMAKE_SOURCE_DIR}/LibraryCPP
)

add_test(
    NAME Lab2CPPTest1
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test1.txt
)

set_tests_properties(Lab2CPPTest1 PROPERTIES
    PASS_REGULAR_EXPRESSION "^YES"
)

add_test(
    NAME Lab2CPPTest2
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test2.txt
)

set_tests_properties(Lab2CPPTest2 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest3
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test3.txt
)

set_tests_properties(Lab2CPPTest3 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest4
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test4.txt
)

set_tests_properties(Lab2CPPTest4 PROPERTIES
    PASS_REGULAR_EXPRESSION "^YES"
)

add_test(
    NAME Lab2CPPTest5
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test5.txt
)

set_tests_properties(Lab2CPPTest5 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest6
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test6.txt
)

set_tests_properties(Lab2CPPTest6 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest7
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test7.txt
)

set_tests_properties(Lab2CPPTest7 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest8
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test8.txt
)

set_tests_properties(Lab2CPPTest8 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest9
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/test9.txt
)

set_tests_properties(Lab2CPPTest9 PROPERTIES
    PASS_REGULAR_EXPRESSION "^NO"
)

add_test(
    NAME Lab2CPPTest10
    COMMAND Lab2CPP ${CMAKE_CURRENT_SOURCE_DIR}/missing_file.txt
)

set_tests_properties(Lab2CPPTest10 PROPERTIES
    WILL_FAIL TRUE
)

add_test(
    NAME Lab2CPPTest11
    COMMAND Lab2CPP
)

set_tests_properties(Lab2CPPTest11 PROPERTIES
    WILL_FAIL TRUE
)

add_executable(TestList
    test_list.cpp
    ../LibraryCPP/list.cpp
)

target_include_directories(TestList PRIVATE
    ${CMAKE_SOURCE_DIR}/LibraryCPP
)

add_test(
    NAME TestList
    COMMAND TestList
)

# Тесты стека
add_executable(TestStack
    test_stack.cpp
    ../LibraryCPP/list.cpp
    ../LibraryCPP/stack.cpp
)

target_include_directories(TestStack PRIVATE
    ${CMAKE_SOURCE_DIR}/LibraryCPP
)

add_test(
    NAME TestStack
    COMMAND TestStack
)
