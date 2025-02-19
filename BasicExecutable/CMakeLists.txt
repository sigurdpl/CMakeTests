cmake_minimum_required(VERSION 3.21)
project(cmakebasic)

add_executable(cmakebasic main.cpp)
target_compile_features(cmakebasic PUBLIC cxx_std_17)

#set(CMAKE_CXX_STANDARD 17)
# addding a message. It will be shown during cmake configure
message("Configuring cmakebasic")

