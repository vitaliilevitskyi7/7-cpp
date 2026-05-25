#include <iostream>

// Функция ввода n-мерного вектора
void input_vector(double vec[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Компонента [" << i << "]: ";
        std::cin >> vec[i];
    }
}

// Функция вывода n-мерного вектора
void print_vector(double vec[], int n) {
    std::cout << "(";
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i];
        if (i < n - 1) std::cout << ", ";
    }
    std::cout << ")\n";
}

// Функция сложения двух векторов (результат записывается в res)
void sum_vectors(double vec1[], double vec2[], double res[], int n) {
    for (int i = 0; i < n; ++i) {
        res[i] = vec1[i] + vec2[i];
    }
}

int main() {
    int n;
    std::cout << "Введіть розмірність векторів n (n < 20): ";
    std::cin >> n;

    if (n >= 20 || n <= 0) {
        std::cout << "Помилка: невірна розмірність.\n";
        return 1;
    }

    double v1[20], v2[20], result[20];

    std::cout << "Введення першого вектора:\n";
    input_vector(v1, n);

    std::cout << "Введення другого вектора:\n";
    input_vector(v2, n);

    sum_vectors(v1, v2, result, n);

    std::cout << "Перший вектор: ";
    print_vector(v1, n);
    std::cout << "Другий вектор: ";
    print_vector(v2, n);
    std::cout << "Сума векторів: ";
    print_vector(result, n);

    return 0;
}
