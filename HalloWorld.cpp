#include <iostream>

int main() {
    // Title
    std::cout << "-----------------Da Adder-----------------" << "\n";
    std::cout << "Hey there partner!" << '\n';

    // First Number
    int firstNumber;
    std::cout << "Please insert your first number: ";
    std::cin >> firstNumber;

    // Second Number
    int secondNumber;
    std::cout << "Please insert your second number: ";
    std::cin >> secondNumber;

    // Result
    int result = firstNumber + secondNumber;
    std::cout << firstNumber << " + " << secondNumber << " = " << result << '\n';

    std::cout << "------------------------------------------" << "\n";

    return 0;
}