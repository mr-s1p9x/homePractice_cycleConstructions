#include <iostream>
using namespace std;


int main()
{
    int lines = 16; // кол-во строк
    int symInLines = 30; // кол-во символов

    for (int i = 1; i <= lines; i++)
    {
        if (i == 1 || i == lines) // первая и последняя строка = рисуем *
        {
            // проходимся по символьно и рисуем *
            for (int j = 1; j <= symInLines; j++)
            {
                cout << "* ";
            }
        }
        else // все строки между первой и заключительной
        {
            cout << "* "; // рисуем * в начале строки
            // проходимся по символьно и рисуем пробел
            for (int j = 1; j <= symInLines - 2; j++)
            {
                cout << "  ";
            }
            cout << "* "; // ставим * в конце строки
        }
        cout << endl; // каждую итерацию начинаем с новой строки
    }
    cout << endl;

    return 0;
}