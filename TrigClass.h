#ifndef TRIGCLASS_H
#define TRIGCLASS_H

class TrigClass {
public:
    // FuncA вычисляет сумму первых n элементов ряда Тейлора для sin(x)
    double FuncA(int n);

private:
    // Вспомогательная функция для вычисления факториала
    int factorial(int n);
};

#endif
