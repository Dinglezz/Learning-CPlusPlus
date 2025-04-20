#include <iostream>
#include <cmath>

int main() {
    // Title
    std::cout << "\n" << "-----------Hypotenuse Calculator-----------" << "\n";
    std::cout << "Hey there partner!" << '\n';

    // Side A
    double a;
    std::cout << "Please enter side A: ";
    std::cin >> a;

    // Side B
    double b;
    std::cout << "Please enter side B: ";
    std::cin >> b;

    // Side C (Result)
    a = pow(a, 2);
    b = pow(b, 2);
    double c = sqrt(a + b);
    std::cout << "Side C is " << c << '\n';

    std::cout << "-------------------------------------------" << "\n";

    return 0;
}