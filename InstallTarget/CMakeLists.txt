cmake_minimum_required(VERSION 3.21)
project(MyApp VERSION 1.0)

set(CMAKE_INSTALL_PREFIX /Users/sigurd/novelda/sw-playground/install/installTarget)
# make a static library
# create a variable name that we can reference everywhere we use it. Also easy to change name of lib if necessary
set(MYINSTALL_LIB MyInstallLibrary)
#
add_library(${MYINSTALL_LIB} STATIC MyInstallLib.cpp MyInstallLib.h)
target_compile_features(${MYINSTALL_LIB} PUBLIC cxx_std_17)
target_include_directories(${MYINSTALL_LIB} PUBLIC $<INSTALL_INTERFACE:include>)


# make the app
set(MYAPP MyInstallLibApp)
add_executable(${MYAPP} main.cpp)
target_compile_features(${MYAPP} PUBLIC cxx_std_17)
target_link_libraries(${MYAPP} ${MYINSTALL_LIB})
target_include_directories(${MYAPP} PUBLIC
        "${PROJECT_BINARY_DIR}"
)

configure_file(version.in.h version.h)
# make install targets

install(TARGETS ${MYINSTALL_LIB} ARCHIVE DESTINATION lib)
install(FILES MyInstallLib.h DESTINATION include)
install(TARGETS ${MYAPP} DESTINATION bin)


