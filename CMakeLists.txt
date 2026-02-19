cmake_minimum_required(VERSION 3.15)
project(autofilesorter)

set(CMAKE_CXX_STANDARD 20)

add_executable(autofilesorter main.cpp
        main.cpp
        src/file-sorter/file_sorter.cpp
        src/file-sorter/file_sorter.h
)

