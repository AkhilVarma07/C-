#include <iostream>
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    std::cout << "Enter the number of terms for Fibonacci sequence: ";
    std::cin >> n;

    std::cout << "Fibonacci sequence up to " << n << " terms:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    //std::cout << std::endl;

    return 0;
}

