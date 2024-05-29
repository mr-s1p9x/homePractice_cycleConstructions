#include <iostream>
using namespace std;


// Game: guess the color

int main()
{
    string str = "Guess the color. You have only 5 attempts.";

    int maxAttempt = 5; // Допустимое кол-во попыток
    int attempt = 0; // Номер текущей попытки
    string color = "green"; // Задуманный цвет

    while (attempt < maxAttempt)
    {
        attempt++;

        cout << "\n" << str << "\n" << "Attempt: " << attempt << endl;
        cout << "Type the color: ";
        string value = "";
        cin >> value;

        if (value == "")
        {
            break;
        }
        if (value != color)
        {
            cout << "You missed! Try again!" << endl;
            continue;
        }

        cout << "Congratulations, you guessed after " << attempt << " attempt!" << endl;
        break;
    }

    return 0;
}
