add_executable(tests tests.cpp adder_t.cpp)
target_link_libraries(tests PUBLIC adder)
target_include_directories(tests PUBLIC ../ext)
target_compile_features(tests PUBLIC cxx_std_11)

# allow user to run tests with `make test` or `ctest`
include(../cmake/Catch.cmake)
catch_discover_tests(tests)