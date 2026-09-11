cmake_minimum_required(VERSION 3.16)
project(D9_Crash CXX)

add_executable(D9_Crash main.cpp)

target_compile_features(D9_Crash PRIVATE cxx_std_20)