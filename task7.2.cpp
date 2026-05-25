#include <iostream>

int main() {
    int arr[6] = {5, 112, 4, 3, 112, 5};

    std::cout << "Масив навпаки: ";
    for (int i = 5; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
