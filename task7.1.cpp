#include <iostream>

int main() {
    // Инициализация массива 5 целыми числами
    int arr[5] = {12, 4, 85, 23, 7};
    int limit;

    std::cout << "Введіть число для порівняння: ";
    std::cin >> limit;

    int count = 0;
    for (int i = 0; i < 5; ++i) {
        if (arr[i] < limit) {
            count++;
        }
    }

    std::cout << "Кількість елементів, менших за " << limit << ": " << count << std::endl;
    return 0;
}
