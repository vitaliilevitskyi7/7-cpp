#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Введіть кількість елементів n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Помилка: кількість елементів має бути більшою за 0." << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    std::cout << "Введіть " << n << " цілих чисел:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Ініціалізуємо мінімум значенням для першого елемента: 1 * a[0]
    long long min_val = 1LL * a[0];

    // Проходимо по масиву та шукаємо мінімум серед (i + 1) * a[i]
    for (int i = 1; i < n; ++i) {
        long long current_val = 1LL * (i + 1) * a[i];
        if (current_val < min_val) {
            min_val = current_val;
        }
    }

    std::cout << "Мінімум min(a_1, 2*a_2, ..., n*a_n) дорівнює: " << min_val << std::endl;

    return 0;
}
