cmake_minimum_required(VERSION 3.29)
project(Pong_Game_with_Cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pong_Game_with_Cpp main.cpp
        Bat.cpp
        Bat.h)


set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/Project 3/SFML/include/SFML)


target_link_libraries(Pong_Game_with_Cpp sfml-system sfml-window sfml-graphics sfml-audio)