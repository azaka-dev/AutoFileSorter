cmake_minimum_required(VERSION 3.15)
project(autofilesorter)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(autofilesorter
        main.cpp
        src/file-sorter/file_sorter.cpp
)

target_include_directories(autofilesorter PRIVATE src/file-sorter)