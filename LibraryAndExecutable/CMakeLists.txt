cmake_minimum_required(VERSION 3.21)
project(MyApp)

add_library(MyLibrary STATIC MyLib.cpp MyLib.h)
target_compile_features(MyLibrary PUBLIC cxx_std_17)

add_executable(MyLibApp main.cpp)
target_compile_features(MyLibApp PUBLIC cxx_std_17)
target_link_libraries(MyLibApp MyLibrary)

#set(CMAKE_CXX_STANDARD 17)
# addding a message. It will be shown during cmake configure
message("Configuring cmakebasic")

