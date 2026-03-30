#include <iostream>

int add(int x, int y) {
    int result = x + y;
    return result;
}

int main() {
    int a = 5;
    int b = 7;
    int sum = add(a, b);
    std::cout << sum << std::endl;
    return 0;
}
