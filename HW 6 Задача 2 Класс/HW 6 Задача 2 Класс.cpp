// HW 6 Задача 2 Класс.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include "Counter.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter counter;
    std::string input;
    int val;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> input;
    ;
    if (input == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> val;
        counter.set(val);
    }
    else if (input == "нет")
    {
        counter.get();
    }

    do {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> input;

        if (input == "=") {
            std::cout << counter.get() << std::endl;
        }
        else if (input == "+") {
            counter.inc();
        }
        else if (input == "-") {
            counter.dec();
        }
        else if (input == "х") {
            std::cout << "До свидания!";
            break;
        }

    } while (true);

    return 0;
}

