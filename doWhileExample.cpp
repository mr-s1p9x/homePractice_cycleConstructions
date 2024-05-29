#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial of a number " << number << "! equals: ";

    do
    {
        // Выполняем тело цикла, пока number > 0
        if (number == 0)
        {
            factorial = 1;
            break;
        }
        // Факториал числа = произведение всех чисел до этого числа
        factorial = factorial * number;
        number--;

    } while (number > 0);

    cout << factorial << endl;

    return 0;
}