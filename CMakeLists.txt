cmake_minimum_required(VERSION 3.5)
project(MyRaylibGame C)

find_package(raylib CONFIG REQUIRED)

add_executable(mygame main.c)
target_link_libraries(mygame PRIVATE raylib)
