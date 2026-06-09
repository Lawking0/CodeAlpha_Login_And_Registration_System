# CodeAlpha_Login_And_Registration_System

## Project Title

Login and Registration System

## Description

This project is a console-based Login and Registration System developed using C++. It allows users to register by creating a username and password, and later log in using their saved credentials.

User information is stored in a text file using file handling techniques. The project was designed to strengthen fundamental C++ programming concepts and provide hands-on experience with building a simple authentication system.

## Features

* User Registration
* User Login Authentication
* File-based data storage using text files
* Input validation for empty usernames and passwords
* Menu-driven interface
* Repeated program execution until the user chooses to exit

## Programming Concepts Practiced

This project demonstrates:

1. Program hierarchy and structure
2. Function decomposition
3. Control flow statements (`if`, `else`, loops)
4. String manipulation and comparison
5. File handling using `fstream`
6. User input validation
7. Authentication logic and debugging
8. Problem decomposition and program flow analysis

## Programming Language

* C++

## Software Used

* Visual Studio Code
* GNU Compiler Collection (G++)

## Project Structure
CodeAlpha_Login_And_Registration_System/
│
├── src/
│   └── main.cpp
│
│
├── RegisterUser.txt      (save the user registration info. i.e username and password)
│
└── README.md
## How to Run the Program
1. Clone or download this repository.
2. Open the project folder in Visual Studio Code.
3. Compile the source file using G++.
4. Run the generated executable.
5. Follow the instructions displayed on the screen.

## Compilation Instructions

Compile the program:

```bash
g++ src/main.cpp -o build/main.exe
```

Run the program:

```bash
./build/main.exe
```

## Example Usage

```text
-------------Login---And---Registration---System------

1. Register
2. Login
3. Exit

Select the number: 1

---------Registration---------
Enter your username: john
Enter your password: 1234

Registration successful!
```

## Challenges Faced

During the development of this project, the following challenges were encountered:

* Designing the login authentication flow
* Reading and verifying user credentials from a text file
* Handling incorrect login attempts
* Validating user input
* Tracing program execution and debugging logical errors
* merge commits


These challenges provided practical experience in understanding data flow, control flow, and problem-solving in C++.

## Future Improvements

Possible enhancements include:

* Preventing duplicate usernames during registration
* Encrypting or hashing passwords before storage
* Implementing a limited number of login attempts
* Refactoring the program using classes and object-oriented programming principles
* Migrating from text-file storage to a database system

## Author

Lawrence Nelson Barry

## Date

9th June 2026
