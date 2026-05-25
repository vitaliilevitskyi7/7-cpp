#include <iostream>

// Функция подсчета четных и нечетных элементов
void count_even_odd(int arr[], int size, int &even_count, int &odd_count) {
    even_count = 0;
    odd_count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
}

int main() {
    const int MAX_SIZE = 50;
    int arr[MAX_SIZE];
    int size = 0;
    int num;

    std::cout << "Введіть натуральні числа (0 - кінець введення):\n";
    while (size < MAX_SIZE) {
        std::cin >> num;
        if (num == 0) break;
        arr[size] = num;
        size++;
    }

    int evens, odds;
    count_even_odd(arr, size, evens, odds);

    std::cout << "Кількість парних елементів: " << evens << "\n";
    std::cout << "Кількість непарних елементів: " << odds << "\n";

    return 0;
}
