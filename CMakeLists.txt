cmake_minimum_required(VERSION 3.23)

# Set a name and a version number for your project:
project(your-project
  VERSION 0.0.1
  LANGUAGES CXX
)

# Initialize some default paths
include(GNUInstallDirs)

# Define build options
option(your-project_BUILD_TESTING "Enable building of tests" OFF)

if(PROJECT_IS_TOP_LEVEL)
  option(your-project_BUILD_DOCS "Enable building of documentation" ON)
else()
  option(your-project_BUILD_DOCS "Enable building of documentation" OFF)
endif()

# Compile the library
add_subdirectory(src)


if(PROJECT_IS_TOP_LEVEL)
  # Compile the application executable
  add_subdirectory(app)
endif()

if(PROJECT_IS_TOP_LEVEL)
  # Compile the tests
  include(CTest)
  if(your-project_BUILD_TESTING)
    add_subdirectory(tests)
  endif()
endif()

# Add the documentation
if(PROJECT_IS_TOP_LEVEL AND your-project_BUILD_DOCS)
  add_subdirectory(doc)
endif()

# Add an alias target for use if this project is included as a subproject in another project
add_library(your-project::your-project ALIAS your-project)

# Install the target and headers
install(
  TARGETS your-project
  EXPORT your-projectTargets
  FILE_SET HEADERS
)

# Install the exported targets (this creates your-projectTargets.cmake)
install(
  EXPORT your-projectTargets
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/your-project
  NAMESPACE your-project::
)

# Include helpers for calling configure_package_config_file
include(CMakePackageConfigHelpers)

# Generate the your-projectConfig.cmake file
configure_package_config_file(
  ${CMAKE_CURRENT_LIST_DIR}/cmake/your-projectConfig.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/your-projectConfig.cmake
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/your-project
)

# Install the generated Config file
install(
  FILES
    ${CMAKE_CURRENT_BINARY_DIR}/your-projectConfig.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/your-project
)

# Generate a version file
write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/your-projectConfigVersion.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion
)

# Install the version file
install(
  FILES
    ${CMAKE_CURRENT_BINARY_DIR}/your-projectConfigVersion.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/your-project
)

# This prints a summary of found dependencies
include(FeatureSummary)
feature_summary(WHAT ALL)
