add_library(fact fact.cpp)

add_executable(loxcpp main.cpp)

target_link_libraries(loxcpp fact)
