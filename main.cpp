// #include <iostream>

// int main(){
//     std::cout << "Hello, World!\n";
//     std::cout << "Kamil, 25.10.2026";
//     return 0;
// }

#include <iostream>

auto square(int x) -> int {
    return x * x;
}

int main() {
    auto number{7};

    auto result = square(number);

    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << result << std::endl;

    return 0;
}