# cpp-project-template
A template repository to start a new C++ project using CMake.

This example project contains the `adder` library, an application `adder_app` which uses this library, and a test-suite which tests the library.

Any pull-requests or commits to the repository trigger GitHub Actions, which will compile the code and run the tests.

Project structure:

- [src](src)
  - the `adder` library source code
  - this is where the meat of the project is: the implementation
- [include/adder](include/adder)
  - the `adder` library headers
  - the public interface of the library
- [app](app)
  - the application which uses the `adder` library
- [tests](tests)
  - the test code
  - each `x.cpp` file has a corresponding `x_t.cpp` file here with tests
- [ext](ext)
  - external libraries, e.g. Catch2 testing framework