#include <iostream>
#include <vector>

// Функція для перевірки, чи є число цілим степенем двійки
bool is_power_of_two(int x) {
    // Число має бути більшим за 0 і задовольняти бітову умову
    return (x > 0) && ((x & (x - 1)) == 0);
}

int main() {
    int n;
    std::cout << "Введіть розмір масиву N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Помилка: розмір масиву має бути більшим за 0." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Введіть " << n << " натуральних чисел:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Підрахунок чисел, які є степенями двійки
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (is_power_of_two(arr[i])) {
            count++;
        }
    }

    std::cout << "Кількість цілих степенів двійки в масиві: " << count << std::endl;

    return 0;
}
