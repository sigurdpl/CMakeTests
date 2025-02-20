cmake_minimum_required(VERSION 3.21)
project(MySharedApp)

message(${CMAKE_CURRENT_BINARY_DIR})

# make a shared library
add_library(MySharedLibrary SHARED MySharedLib.cpp MySharedLib.h)
target_compile_features(MySharedLibrary PUBLIC cxx_std_17)

# make the app
add_executable(MySharedLibApp main.cpp)
target_compile_features(MySharedLibApp PUBLIC cxx_std_17)
#find_library(MYSHAREDLIB MySharedLibrary)
find_library(MYSHAREDLIB MySharedLibrary PATHS ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(MySharedLibApp ${MYSHAREDLIB})


#set(CMAKE_CXX_STANDARD 17)
# addding a message. It will be shown during cmake configure
message("Configuring cmakebasic")

