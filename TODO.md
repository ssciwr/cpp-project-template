This TODO list is automatically generated from the cookiecutter-cpp-project template.
The following tasks need to be done to get a fully working project:

* Set up a remote repository. You can e.g. create a project in GitHub or GitLab and run
  the following commands in your locally generated project folder: `git remote add origin <Remote-URL>`
  For a seamless integration, the name of the project should also be `your-project`.
* Make sure that the following software is installed on your computer:
  * A C++-20-compliant C++ compiler
  * CMake `>= 3.9`
  * The testing framework [Catch2](https://github.com/catchorg/Catch2)
* Enable the integration of Readthedocs with your Git hoster. In the case of Github, this means
  that you need to login at [Read the Docs](https://readthedocs.org) and click the button
  *Import a Project*.
* Make sure that doxygen is installed on your system, e.g. by doing `sudo apt install doxygen`
  on Debian or Ubuntu.
* Enable the integration with `codecov.io` by heading to the [Codecov.io Website](https://codecov.io),
  log in (e.g. with your Github credentials) and enable integration for your repository. In order to do
  so, you need to select it from the list of repositories (potentially re-syncing with GitHub). Then, head
  to the "Settings" Tab and select "Global Upload Token". Here, you should select the "not required" option.
