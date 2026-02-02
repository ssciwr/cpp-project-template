# Declare an executable target
add_executable(your-project_app)

# Add source files to the executable target
target_sources(your-project_app
  PRIVATE
    your-project_app.cpp
)

# Link the executable against the library
target_link_libraries(your-project_app
  PRIVATE
    your-project
)
