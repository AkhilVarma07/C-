#include <iostream>
int main() {
    int integerNum;
    float floatNum;
    std::cout << "Enter an integer number: ";
    std::cin >> integerNum;
	std::cout << "Enter a float number: ";
    std::cin >> floatNum;
    if (integerNum != 0) {
        float result = floatNum / integerNum; 
        std::cout << "Result of floatNum / integerNum: " << result << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }
}


