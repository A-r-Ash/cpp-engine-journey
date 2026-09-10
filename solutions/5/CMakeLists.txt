cmake_minimum_required(VERSION 3.16)        
project(hello CXX)                           
add_executable(hello main.cpp)               
target_compile_features(hello PRIVATE cxx_std_20)  