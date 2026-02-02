# Enable CMake's FetchContent module, which allows downloading dependencies like Catch2 automatically at configure time.
include(FetchContent)

# Declare a dependency on Catch2 via FetchContent. This will clone the Catch2 GitHub repository during configuration.
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.12.0)

# Make Catch2 available in this project. This defines the imported targets Catch2::Catch2 and Catch2::Catch2WithMain.
FetchContent_MakeAvailable(Catch2)

# Include Catch2's CMake helper functions (e.g., catch_discover_tests).
include(Catch)

# Create a single test binary that compiles all test files.
add_executable(your-project_tests)

# Add the implementation file
target_sources(your-project_tests
  PRIVATE
    your-project_t.cpp
)

# Link the test binary
target_link_libraries(your-project_tests
  PUBLIC
    your-project
    Catch2::Catch2WithMain
)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(your-project_tests
  TEST_PREFIX "your-project."
)
