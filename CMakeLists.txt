cmake_minimum_required(VERSION 3.15)
project(nd-test CXX)




add_library(nd-test src/nd-test.cpp)
target_include_directories(nd-test PUBLIC include)



set_target_properties(nd-test PROPERTIES PUBLIC_HEADER "include/nd-test.h")
install(TARGETS nd-test)
