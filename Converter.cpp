#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <iomanip>
#include <cmath> 

int binaryToDecimal(const std::string &binary) {
    return std::stoi(binary, nullptr, 2);
}

std::string binaryToHex(const std::string &binary) {
    int decimal = binaryToDecimal(binary);
    std::stringstream ss;
    ss << std::hex << std::uppercase << decimal;
    return ss.str();
}

std::string decimalToBinary(int decimal) {
    return std::bitset<32>(decimal).to_string().erase(0, std::bitset<32>(decimal).to_string().find('1'));
}

std::string decimalToHex(int decimal) {
    std::stringstream ss;
    ss << std::hex << std::uppercase << decimal;
    return ss.str();
}

int hexToDecimal(const std::string &hex) {
    return std::stoi(hex, nullptr, 16);
}

std::string hexToBinary(const std::string &hex) {
    int decimal = hexToDecimal(hex);
    return decimalToBinary(decimal);
}

int main() {
    int choice;
    std::cout << "Number System Converter" << std::endl;
    std::cout << "1. Binary to Decimal" << std::endl;
    std::cout << "2. Binary to Hexadecimal" << std::endl;
    std::cout << "3. Decimal to Binary" << std::endl;
    std::cout << "4. Decimal to Hexadecimal" << std::endl;
    std::cout << "5. Hexadecimal to Decimal" << std::endl;
    std::cout << "6. Hexadecimal to Binary" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::string binary;
            std::cout << "Enter a binary number: ";
            std::cin >> binary;
            std::cout << "Decimal: " << binaryToDecimal(binary) << std::endl;
            break;
        }
        case 2: {
            std::string binary;
            std::cout << "Enter a binary number: ";
            std::cin >> binary;
            std::cout << "Hexadecimal: " << binaryToHex(binary) << std::endl;
            break;
        }
        case 3: {
            int decimal;
            std::cout << "Enter a decimal number: ";
            std::cin >> decimal;
            std::cout << "Binary: " << decimalToBinary(decimal) << std::endl;
            break;
        }
        case 4: {
            int decimal;
            std::cout << "Enter a decimal number: ";
            std::cin >> decimal;
            std::cout << "Hexadecimal: " << decimalToHex(decimal) << std::endl;
            break;
        }
        case 5: {
            std::string hex;
            std::cout << "Enter a hexadecimal number: ";
            std::cin >> hex;
            std::cout << "Decimal: " << hexToDecimal(hex) << std::endl;
            break;
        }
        case 6: {
            std::string hex;
            std::cout << "Enter a hexadecimal number: ";
            std::cin >> hex;
            std::cout << "Binary: " << hexToBinary(hex) << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}
