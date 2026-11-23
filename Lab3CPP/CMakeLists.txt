add_executable(Lab3CPP main.cpp)

target_include_directories(Lab3CPP PRIVATE
    ${CMAKE_SOURCE_DIR}/LibraryCPP
)

target_link_libraries(Lab3CPP PRIVATE LibraryCPP)

