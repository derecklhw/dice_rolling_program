# Dice Rolling Program

This is a simple dice rolling program implemented in C. It allows users to simulate dice rolls and calculate the occurrence of each face in percentage.

## Prerequisites

Before running the program, ensure that you have a C compiler installed on your system. This program is written in C and requires a C compiler to compile and execute.

## Getting Started

1. Clone the repository or copy the code into a C source file (e.g., `dice_generator.c`).

2. Compile the code using a C compiler. For example, using GCC, run the following command in the terminal:

  ```bash
  gcc main.c -o dice_generator
  ```

3. Run the compiled executable:

  ```bash
  ./dice_generator
  ```

## Usage

1. Upon running the program, you will see a welcome message.

2. Press any key to launch the dice generator or press the ESC button to terminate the program.

3. If you choose to launch the generator, you will be prompted to enter the number of faces of a dice (between 1 and 25) and the number of throws (between 1 and 500).

4. The program will simulate the dice rolls and display the result of each throw, showing the throw number and the rolled face value.

5. After all throws are completed, the program will calculate and display the number of occurrences for each face in percentage.

6. You will then be asked if you want to use the dice generator again. Enter "YES" to repeat the process or "NO" to terminate the program.

7. If you choose to continue, the program will repeat the dice rolls and result display. Repeat this step as desired.

8. Once you choose to terminate the program or after multiple simulations, a "Thanks for your visit" message will be displayed, and the program will exit.

## Notes

- The program uses the `srand` function to set the seed value for the random number generator based on the computer's internal clock. This ensures different random sequences on each program execution.

- The program validates the user input for the number of faces and throws, ensuring they are within the specified ranges. If invalid parameters are entered, the program will prompt for valid input.

- The program uses the `rand` function to generate random numbers. The `%` operator is used to restrict the range of generated numbers to match the number of faces of the dice.

- The program keeps track of the occurrences of each face using an array and calculates the percentage of occurrences for each face.

- The program includes basic error handling for input validation but does not handle all possible error scenarios.
