# Simple Shell Project

This is a simple UNIX command-line interpreter project for the ALX SE Foundations curriculum. The goal is to create a basic shell that can execute commands, handle built-in functionalities, and implement various advanced features.

## Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Building the Shell](#building-the-shell)
- [Running the Shell](#running-the-shell)
- [Testing](#testing)
- [Contributors](#contributors)
- [License](#license)

## Overview

The Simple Shell project is a part of the ALX SE Foundations curriculum. It involves creating a basic UNIX shell that can interpret and execute commands, handle built-in functionalities like `exit` and `env`, and support various advanced features such as logic operators and comments.

## Project Structure
```bash
simple_shell
│
├── README.md
├── AUTHORS
├── .gitignore
├── Makefile
├── src
│ ├── shell.c
│ ├── prompt.c
│ ├── execute.c
│ ├── builtin.c
│ ├── helper_functions.c
│ └── parser.c
├── include
│ └── shell.h
├── test
│ └── test_shell.c
├── builtins
│ ├── alias.c
│ ├── setenv.c
│ └── unsetenv.c
├── variables
│ └── variables.c
├── logic_operators
│ └── logical_operators.c
├── comments
│ └── comments.c
├── advanced
│ └── (additional advanced features)
└── tests
├── test_shell.c
└── test_scripts
└── (shell scripts for testing)
```


- **README.md:** Project documentation providing an overview, structure, and instructions.
- **AUTHORS:** File listing contributors to the project.
- **.gitignore:** Specifies files and directories to be ignored by version control.
- **Makefile:** Automates the build process.
- **src:** Source code directory containing various components of the shell.
- **include:** Header files for the shell components.
- **test:** Directory for testing-related files.
- **builtins, variables, logic_operators, comments, advanced:** Subdirectories for specific features/modules.
- **tests:** Additional test files and scripts.

## Building the Shell

To build the shell, use the provided Makefile. Open a terminal and navigate to the project root directory. Run the following command:

```bash
make
```
* This will compile the source code and generate the executable.

### Running the Shell
* After building the shell, run it with the following command: 
```bash
./simple_shell
```
* This will start the shell, and you can interact with it by entering commands.

### Testing
* To run tests, use the provided test scripts. Navigate to the tests directory and execute the test script:
```bash
./test_scripts/test_script.sh
```
* Ensure that the shell behaves as expected and passes all relevant tests.

### Contributors
* Antoyjuma
* Official0mega

### License
* This project is licensed under the MIT License.