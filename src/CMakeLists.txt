# Declare a new library target
add_library(your-project)

# Add the implementation file and mark the public headers that belong to this library
target_sources(your-project
  PRIVATE
    your-project.cpp

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS ../include
    FILES
      ../include/your-project/your-project.hpp
)

# Request a minimum C++ standard for this target
target_compile_features(your-project
  PUBLIC
    cxx_std_20
)
