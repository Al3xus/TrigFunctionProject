#include "TrigClass.h"
#include <cmath>  // Для функции pow и факториала

double TrigClass::FuncA(int n) {
    double x = 1.0; // Угол в радианах для вычисления синуса, можно изменить
    double sum = 0.0; // Сумма ряда Тейлора
    int sign = 1;     // Знак слагаемого (чередуется между + и -)

    for (int i = 0; i < n; ++i) {
        int termIndex = 2 * i + 1; // Индекс степени и факториала
        double term = sign * std::pow(x, termIndex) / factorial(termIndex);
        sum += term;
        sign = -sign; // Меняем знак для следующего слагаемого
    }

    return sum;
}

// Вспомогательная функция для вычисления факториала
int TrigClass::factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
