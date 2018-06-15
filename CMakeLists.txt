cmake_minimum_required(VERSION 2.6)
project(sfmlmushrooms)

add_executable(sfmlmushrooms main.cpp)

install(TARGETS sfmlmushrooms RUNTIME DESTINATION bin)
