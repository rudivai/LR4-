#include <iostream>
#include <algorithm> // Необхідно для std::min
#include <limits> // Необхідно для numeric_limits
using namespace std;
//прототипи функції
void task_Proc29();
void task_Boolean27();
void task_Integer4();
int main() {

    int menu;
    cout << "Task number:";
    cin >> menu;
    // перемикання між завданнями
    switch (menu)
    {
    case 1: task_Proc29(); break; // Завдання 1
    case 2: task_Boolean27(); break; // Завдання 2
    case 3: task_Integer4(); break; // Завдання 3
    default: cout << "Wrong task! (Only 1,2)" << endl; //повідомлення про помилку
    }
    system("pause");
    return 0;
}


void task_Proc29();
    using namespace std;

    // Функція перевірки існування N-ї цифри в числі K
    bool DigitN(int K, int N)
     {
        // Перевірка коректності вхідних даних
        if (N <= 0 ,N<4 ,K<=0|| K >= 1000) {
            cerr << "Помилка: Некоректні вхідні дані (0 < N ≤ 4, 0 < K < 1000)" << endl;
            return false;
        }
        // Визначення кількості цифр у числі K без використання циклів
        int numDigits = 0;
        if (K >= 100) numDigits = 3;
        else if (K >= 10) numDigits = 2;
        else numDigits = 1;

        // Перевірка існування N-ї цифри
        return N <= numDigits;
    }

    int main() {
        int K[5], N[5];

        // Введення даних
        for (int i = 0; i < 5; ++i) {
            cout << "Введіть ціле додатне число K" << i + 1 << " (0 < K < 1000): ";
            cin >> K[i];
            cout << "Введіть номер цифри N" << i + 1 << " (0 < N ≤ 4): ";
            cin >> N[i];

            // Обробка помилок вводу
            if (cin.fail() K[i] K<= 0  K[i] >= 1000  N[i] <= 0  N[i] > 4) {
                cerr << "Помилка: Некоректні вхідні дані. Спробуйте ще раз." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                i--; // Повторюємо введення для поточного i
                continue;
            }

            // Виклик функції DigitN та виведення результату
            bool result = DigitN(K[i], N[i]);
            cout << "Чи існує " << N[i] << "-та цифра в числі " << K[i] << "? " << (result ? "Так" : "Ні") << endl;
        }

        
    }

    void task_Boolean27();

        // Функція перевірки вхідних даних
        bool checkInput(double& x, double& y) {
        std::cout << "Введіть координату x: ";
        std::cin >> x;
        std::cout << "Введіть координату y: ";
        std::cin >> y;
        if (std::cin.fail()) {
            std::cerr << "Помилка: Некоректний ввід координат.\n";
            std::cin.clear(); // Очищаємо стан потоку
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видаляємо неправильний ввід з буфера
            return false;
        }
        return true;
    }

    // Функція перевірки положення точки
    bool checkQuadrant(double x, double y) {
        if (x < 0 && y > 0) return true; // Друга чверть
        if (x < 0 && y < 0) return true; // Третя чверть
        return false;
    }

    int main() {
        double x, y;
        if (checkInput(x, y)) {
            if (checkQuadrant(x, y)) {
                std::cout << "Точка (" << x << ", " << y << ") лежить у другій або третій координатній чверті.\n";
            }
            else {
                std::cout << "Точка (" << x << ", " << y << ") не лежить у другій або третій координатній чверті.\n";
            }
        }
        
    }
    void task_Integer4();
    using namespace std;

    // Функція перевірки вводу цілого числа
    bool checkIntInput(int& num) {
        cout << "Введіть ціле додатне число: ";
        cin >> num;
        if (cin.fail() || num <= 0) {
            cerr << "Помилка: Некоректний ввід. Введіть додатне ціле число.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
        }
        return true;
    }

    // Функція підрахунку кількості відрізків
    int calculateSegments(int A, int B) {
        if (A <= 0 , B <= 0 ( A <= B)) {
            cerr << "Помилка: Некоректні вхідні дані (A > B > 0).\n";
            return -1; // Повертаємо -1 як індикатор помилки
        }
        return A / B;
    }

    // Функція виведення результату
    void outputResult(int count) {
        if (count == -1) return; // Не виводимо результат, якщо була помилка
        cout << "Кількість відрізків довжиною B, розміщених на відрізку A: " << count << endl;
    }

    int main() {
        int A, B;
        if (checkIntInput(A) && checkIntInput(B)) {
            int count = calculateSegments(A, B);
            outputResult(count);
        }
       
    }