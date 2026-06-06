cmake_minimum_required(VERSION 4.2)
project(RAM_Filler)

set(CMAKE_CXX_STANDARD 23) # Newest Standard for maximum features (26 is not supported yet, 23 is pre-release and 20 is stable)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Compiler halts on older standards that could possibly cause problems
set(CMAKE_CXX_EXTENSIONS OFF) # Disables Compiler Extensions for better compatibility
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic") # Compiler generates warnings more sensitive

add_executable(RAM_Filler main.cpp)
