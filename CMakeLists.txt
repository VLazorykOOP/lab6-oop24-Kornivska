cmake_minimum_required(VERSION 3.5)

project(6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(6 main.cpp base.h d1.h d1v.h d2.h d2v.h d11.h d11v.h d21.h d21v.h d22.h d22v.h Task2.h Task3.h)

install(TARGETS 6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
