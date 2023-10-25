#include <iostream>

int main() {
#ifdef LOCAL
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    std::cout << "Hello, world!";
}