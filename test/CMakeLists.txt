add_executable(tests 
               ../include/catch2/catch.hpp
               test_main.cpp
               test_factorial.cpp
               )

target_link_libraries(tests fact)
