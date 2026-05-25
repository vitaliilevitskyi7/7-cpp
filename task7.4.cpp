#include <iostream>

// Функция ввода массива
void input_array(int arr[], int size) {
    std::cout << "Введіть " << size << " елементів масиву:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

// Функция поиска максимального значения
int find_max(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Функция вывода массива
void print_array(int arr[], int size) {
    std::cout << "Масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int SIZE = 5;
    int my_array[SIZE];

    input_array(my_array, SIZE);
    print_array(my_array, SIZE);

    int max_element = find_max(my_array, SIZE);
    std::cout << "Максимальне значення у масиві: " << max_element << std::endl;

    return 0;
}
