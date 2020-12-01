cmake_minimum_required(VERSION 3.8.2)

# Set a name and a version number for your project:
project(cpp-project-template VERSION 0.0.1 LANGUAGES CXX)

# this needs to be in the top level CMakeLists.txt:
include(CTest)

# compile the library
add_subdirectory(src)

# compile the tests
add_subdirectory(tests)

# compile the application
add_subdirectory(app)