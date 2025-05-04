# Simple Employee Tracking System

This repository contains a basic Employee Tracking System developed using C++. It provides fundamental functionalities for managing employee records, including registration, listing, and removal.

## Overview

This console-based application allows users to interact with a simple menu to manage employee data. It utilizes a class named `employee` to represent employee attributes such as name, surname, position, ID number, and salary. The system supports adding new employees, displaying a list of all registered employees, and removing employees based on their ID.

## Features

* **Employee Registration:** Easily add new employees to the system by providing their name, surname, position, unique ID number, and salary.
* **Employee Listing:** Display a clear and formatted list of all currently registered employees, showing their key information.
* **Employee Removal:** Remove an employee from the system by entering their unique ID number. The system confirms successful removal or indicates if the ID is not found.
* **Simple Console Interface:** A straightforward and user-friendly menu-driven interface for easy interaction.

## How to Run

1.  **Prerequisites:** Ensure you have a C++ compiler (like g++) installed on your system.
2.  **Compilation:** Navigate to the project directory in your terminal or command prompt and compile the `main.cpp` file using the following command:
    ```bash
    g++ main.cpp -o employee_tracker
    ```
    (Adjust the filename if your main source file is named differently.)
3.  **Execution:** After successful compilation, run the executable with the command:
    ```bash
    ./employee_tracker
    ```
    (On Windows, this might be `employee_tracker.exe`.)

## Usage

Once the program is running, you will see a menu with the following options:

1.  **Register an employee:** Enter `1` and follow the prompts to input the employee's details.
2.  **List employees:** Enter `2` to view a list of all registered employees.
3.  **Fire an employee:** Enter `3` and then provide the ID number of the employee you wish to remove.
4.  **Exit:** Enter `4` to terminate the program.

The program will guide you through each step with clear instructions.

## Contributing

This is a basic project intended for learning and demonstration purposes. Contributions for enhancements, bug fixes, or new features are welcome. Please feel free to fork the repository and submit pull requests.

## License

This project is open for use and modification without any specific license restrictions.

## Acknowledgements

This project was developed as a simple example of basic data management in C++.

---

**Note:** This README provides a comprehensive overview of the project as it currently stands. Feel free to enhance it with more details as the project evolves.
