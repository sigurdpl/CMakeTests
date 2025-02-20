cmake_minimum_required(VERSION 3.21)
project(MyApp)

# make a static library
add_library(MyLibrary STATIC MyLib.cpp MyLib.h)
target_compile_features(MyLibrary PUBLIC cxx_std_17)

# make the app
add_executable(MyLibApp main.cpp)
target_compile_features(MyLibApp PUBLIC cxx_std_17)
target_link_libraries(MyLibApp MyLibrary)




