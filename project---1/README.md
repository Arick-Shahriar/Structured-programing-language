# Organisation Management System

A simple **C programming project** for managing an organisation and its employees. This project was created as a Structured Programming Language assignment and demonstrates the use of structures, arrays, loops, conditional statements, and user input in C.

## Features

- Enter the organisation's name and location.
- Add employee records with an ID, name, and salary.
- Display all employees currently stored.
- Calculate the combined salary of all employees.
- Use a menu to choose an operation or exit the program.

## Technologies

- **Language:** C
- **Standard library:** `stdio.h`
- **Concepts used:** `struct`, arrays, `scanf()`, `printf()`, `do-while`, `if-else`, and `for` loops.

## Project Files

- `pro.c` — C source code for the Organisation Management System.
- `pro.exe` — compiled Windows executable (if you are using Windows).
- `.c` and `.c.exe` — additional source/executable files currently included in this folder.

## How to Compile and Run

You need a C compiler such as GCC (for example, through MinGW-w64 on Windows).

1. Open a terminal in this folder.
2. Compile the source file:

   ```bash
   gcc pro.c -o organisation
   ```

3. Run it:

   **Windows (Command Prompt / PowerShell):**
   ```powershell
   .\organisation.exe
   ```

   **Linux / macOS:**
   ```bash
   ./organisation
   ```

You can also open `pro.c` in Visual Studio Code and run it using a configured C compiler.

## How to Use

1. Enter the organisation's name and location.
2. Select an option from the menu:

   | Option | Action |
   | --- | --- |
   | `1` | Add an employee |
   | `2` | Display all employees |
   | `3` | Calculate total salary |
   | `0` | Exit the program |

3. Follow the prompts to enter employee details.

## Example

```text
Enter organisation name: Tech Solutions
Enter location: Sylhet

1.Add employee  2.Show all  3.Total salary  0.Exit
Choice: 1
ID: 101
Name: Rahim
Salary: 25000

1.Add employee  2.Show all  3.Total salary  0.Exit
Choice: 3
Total salary = 25000.00
```

*Example output is illustrative; your results depend on the information you enter.*

## Notes and Limitations

- The program stores employee records in memory, so the data is not saved after the program exits.
- The employee array has a capacity of **100 records**. Do not add more than 100 employees.
- Enter valid numeric values for the employee ID, salary, and menu choice.

## Purpose

This project is intended for learning and practising fundamental C programming concepts through a small, menu-driven application.
