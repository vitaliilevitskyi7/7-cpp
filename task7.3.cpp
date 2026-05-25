#include <iostream>

// Функция для подсчета суммы элементов, больших числа Эйлера
double sum_greater_than_e(double arr[], int size) {
    const double E = 2.7182818284590452354;
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > E) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    const int N = 10;
    double arr[N];

    std::cout << "Введіть " << N << " елементів масиву типу double:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    double result = sum_greater_than_e(arr, N);
    std::cout << "Сума елементів, більших за число Ейлера: " << result << std::endl;

    return 0;
}
