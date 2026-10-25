// #include <iostream>

// int main(){
//     std::cout << "Hello, World!\n";
//     std::cout << "Kamil, 25.10.2026";
//     return 0;
// }

#include <iostream>

auto square(int x) -> int { return x * x; }

auto factorial(int n) -> long long {
    if (n < 0) {
        std::cerr << "Факториал определён только для неотрицательных чисел\n";
        return -1;
    }
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    auto number{7};

    auto result = square(number);

    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << result << std::endl;

    auto fact = factorial(number);
    std::cout << "Факториал: " << number << "! = " << fact << std::endl;

    return 0;
}