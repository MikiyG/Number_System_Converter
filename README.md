Number System Converter

This is a simple command-line program written in C++ that allows users to convert numbers between binary, decimal, and hexadecimal systems. It provides six conversion options and takes user input to perform the selected conversion.
How to Use

To run this program, you need a C++ compiler installed on your system. Follow these steps:

    Clone the Repository: Download the code from this GitHub repository.
    text

git clone <repository-url>
Compile the Code: Use a C++ compiler like g++ to compile the program.
text
g++ -o converter main.cpp
Run the Program: Execute the compiled program.
text

    ./converter
    Follow the Prompts: The program will display a menu. Enter a number (1–6) to select a conversion type, then provide the input as prompted.

Menu Options

When you run the program, you’ll see the following options:

    Binary to Decimal: Convert a binary number (e.g., 1010) to its decimal equivalent.
    Binary to Hexadecimal: Convert a binary number to its hexadecimal equivalent.
    Decimal to Binary: Convert a decimal number (e.g., 10) to its binary equivalent.
    Decimal to Hexadecimal: Convert a decimal number to its hexadecimal equivalent.
    Hexadecimal to Decimal: Convert a hexadecimal number (e.g., A) to its decimal equivalent.
    Hexadecimal to Binary: Convert a hexadecimal number to its binary equivalent.

Examples

Here are some sample interactions with the program:

    Binary to Decimal:
    text

Enter your choice: 1
Enter a binary number: 1010
Decimal: 10
Decimal to Binary:
text
Enter your choice: 3
Enter a decimal number: 10
Binary: 1010
Hexadecimal to Decimal:
text

    Enter your choice: 5
    Enter a hexadecimal number: A
    Decimal: 10

Code Structure

The program is organized into several functions, each handling a specific conversion:

    int binaryToDecimal(const std::string &binary): Converts a binary string to a decimal integer using std::stoi.
    std::string binaryToHex(const std::string &binary): Converts a binary string to hexadecimal via decimal.
    std::string decimalToBinary(int decimal): Converts a decimal integer to a binary string, trimming leading zeros.
    std::string decimalToHex(int decimal): Converts a decimal integer to a hexadecimal string.
    int hexToDecimal(const std::string &hex): Converts a hexadecimal string to a decimal integer.
    std::string hexToBinary(const std::string &hex): Converts a hexadecimal string to a binary string via decimal.

The main() function handles user input and the menu logic using a switch statement.
Limitations

    Input Validation: The program assumes all inputs are valid (e.g., binary inputs contain only 0 and 1, hexadecimal inputs are valid hex digits). Invalid inputs may cause errors or undefined behavior.
    Number Range: Decimal numbers are stored as int, so inputs must be within the range of the int data type (typically -2,147,483,648 to 2,147,483,647).
    Single Conversion: The program performs one conversion and exits; it doesn’t loop for multiple conversions.

Requirements

    A C++ compiler (e.g., g++) supporting C++11 or later.
    Standard C++ libraries: <iostream>, <string>, <bitset>, <sstream>, <iomanip>, <cmath>.

Contributing

If you encounter bugs or have ideas for improvements (e.g., adding input validation or a loop for multiple conversions), feel free to:

    Open an issue on this GitHub repository.
    Submit a pull request with your changes.

License

This project is licensed under the MIT License. Feel free to use, modify, and distribute it as you see fit.
