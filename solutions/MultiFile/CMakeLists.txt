cmake_minimum_required(VERSION 3.16)
project(MultiFile CXX)

add_executable(MultiFile
    main.cpp
    greet.cpp
    math.cpp
)

target_compile_features(MultiFile PRIVATE cxx_std_20)