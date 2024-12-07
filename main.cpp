#include <iostream>
#include "TrigClass.h"

int main() {
    TrigClass trig;
    int n = 3; // Количество членов ряда
    std::cout << "Сумма первых " << n << " членов ряда Тейлора для sin(1): " << trig.FuncA(n) << std::endl;
    return 0;
}
