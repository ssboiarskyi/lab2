#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Завдання Integer12

    cout << "Завдання Integer12. Перевернуте трицифрове число" << endl;

    int n;
    cout << "Введiть трицифрове число: ";
    cin >> n;

    // Перевірка коректності введення
    if (abs(n) < 100 || abs(n) > 999) {
        cout << "Помилка: число не є трицифровим!" << endl;
    } else {
        int sign = (n < 0) ? -1 : 1; // зберігаємо знак, якщо число від’ємне
        n = abs(n);

        // Розбиваємо число на цифри
        int a = n / 100;         // перша цифра (сотні)
        int b = (n / 10) % 10;   // друга цифра (десятки)
        int c = n % 10;          // третя цифра (одиниці)
        
        int reversed = c * 100 + b * 10 + a;
        cout << "Результат: " << sign * reversed << endl;
    }

    // Завдання Boolean37

    cout << "\nЗавдання Boolean37. Хiд короля на шахiвницi" << endl;

    int x1, y1, x2, y2;
    cout << "Введiть x1, y1: ";
    cin >> x1 >> y1;
    cout << "Введiть x2, y2: ";
    cin >> x2 >> y2;

    // Перевірка правильності координат (1..8)
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ||
        x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        cout << "Помилка: координати мають бути в межах 1..8!" << endl;
    } else if (x1 == x2 && y1 == y2) {
        cout << "Помилка: поля не повиннi збiгатися!" << endl;
    } else {
        bool canMove = (abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1);
        cout << boolalpha << "Може перейти за один хiд: " << canMove << endl;
    }

    // Завдання Math22

    cout << "\nЗавдання Math22. Обчислення математичного виразу" << endl;

    const double pi = 3.141592; // константа пі
    double x;
    cout << "x = ";
    cin >> x;

    // Перевірка діапазону допустимих значень
    if (x <= 0) {
        cout << "Помилка: для логарифма потрiбно x > 0!" << endl;
    } else if ((2 * x) < 0 || (5 * x) < 0) {
        cout << "Помилка: пiдкореневий вираз не може бути вiд’ємним!" << endl;
    } else {
        double numerator = log(fabs(x)) * sqrt(fabs(pow(x, 2) * pow(sin(x), 3) * sqrt(fabs(cos(x)))));
        double denominator = cos(x) + (1.0 / 5.0) * sqrt(2 * x) + sqrt(5 * x);

        if (denominator == 0) {
            cout << "Помилка: знаменник дорiвнює нулю!" << endl;
        } else {
            double y = (1.0 / 4.0) * (numerator / denominator);
            cout << "y = " << y << endl;
        }
    }

    return 0;
}
