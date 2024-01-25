#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");
    char operation;
    double num1, num2, result;

    while (true) {
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите операцию (+, -, *, /, ^, s, %, !, 9 для выхода): ";
        cin >> operation;

        if (operation == '9') {
            cout << "До свидания!";
            break;
        }

        if (operation != '!' && operation != 's' && operation != '%') {
            cout << "Введите второе число: ";
            cin >> num2;
        }

        switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                cout << "Ошибка: деление на ноль." << endl;
                continue;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 's':
            if (num1 >= 0) {
                result = sqrt(num1);
            }
            else {
                cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа." << endl;
                continue;
            }
            break;
        case '%':
            result = (num1 * num2) / 100;
            break;
        case '!':
            result = 1;
            for (int i = 1; i <= num1; i++) {
                result *= i;
            }
            break;
        default:
            cout << "Ошибка: неправильная операция." << endl;
            continue;
        }
        cout << "Результат: " << result << endl;
    }
    return 0;
}