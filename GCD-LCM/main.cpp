#include <iostream>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

// Function to calculate LCM using GCD
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);

    std::cout << "GCD: " << gcd << std::endl;
    std::cout << "LCM: " << lcm << std::endl;

    return 0;
}




