#include <iostream>
#include <vector>

int main() {
    int X;
    std::cout << "Enter the number of values: ";
    std::cin >> X;

    std::vector<double> numbers(X);

    std::cout << "Enter " << X << " numbers:\n";
    for (int i = 0; i < X; i++) {
        std::cin >> numbers[i];
    }

    double sum = 0.0;
    for (int i = 0; i < X; i++) {
        double result = (numbers[i] * 0.14) + numbers[i] + 0.34;
        sum += result;
    }

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
