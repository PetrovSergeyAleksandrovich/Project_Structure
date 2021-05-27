cmake_minimum_required(VERSION 3.19)


add_executable(Project_Structure main.cpp ${dir}/header.h header.cpp)
target_include_directories(Project_Structure PUBLIC ${dir})