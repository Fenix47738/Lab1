#include <iostream>
using namespace std;

// Виконував завдання Begin45-Begin47
int main()
{
    cout << "Task Begin45\n";

    // Створення змінних
    double s; // Шлях
    double t = 0; // Година

    cout << "Enter S and hour:\n"; // Виведення повідомлення у консоль для користувача

    // Введення інформації від користувача для змінних
    cin >> s;
    cin >> t;

    double v = s/t; // ділення та зберігання результату у змінну швидкість

    cout << "\nyou need " << v << " for to cover this distance in this hour\n"; // Виведення рузультату

    // Begin46
    cout << "\nTask Begin46\n";

    double grn; // Гривні
    double kurs; // Курс долара

    cout << "Enter hryvnia and exchange rate of the dollar:\n"; //Виведення повідомлення у консоль для користувача
    
    // Введення інформації від користувача для змінних
    cin >> grn;
    cin >> kurs;

    double dollars = grn / kurs; // Ділення та зберігання результату у змінну долари

    cout << "\namount in dollars: " << dollars << "\n"; // Виведення результату

    // Begins47
    cout << "\nTask Begin47\n";

    double kgApple; // Ціна за кілограм

    cout << "Enter the cost one kilogram of apples \n";

    cin >> kgApple; // Введення інформації від користувача для змінних

    double polKg = kgApple * 0.5; // Множення ціну за кілограм на 0.5 кілограм та збереження інформації у змінну
    double twoDotThree = kgApple * 2.3;  // Множення ціну за кілограм на 2.3 кілограм та збереження інформації у змінну

    cout << "\n0.5 kg: " << polKg << "\n2.3: "<< twoDotThree << "\n"; // Виведення результату

    // Закінчення программи
    system("pause");
    return 0;
}