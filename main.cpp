#include <iostream>
using namespace std;
// Циклические конструкции

int main() {
    ///////////// increase
    int count = 5;

    for (int i = 0; i < count; i++)
    {
        cout << "Iteration " << i << endl;
    }

    cout << "This line is always executed";

    ///////////// decrease
    cout << endl << endl;

    int count2 = 0;

    for (int i = 5; i > count2; i--)
    {
        cout << "Count " << i << endl;
    }

    cout << "This line is always executed";

    ///////////// break
    cout << endl << endl;

    for (int i = 0; i < count; i++)
    {
        cout << "Interation " << i << endl;
        break; // Останавливает работу цикла, и предаст управление инструкции далее

        cout << "This line never executed";
    }
    cout << "This line is always executed";

    ///////////// continue
    cout << endl << endl;

    for (int i = 0; i < count; i++)
    {
        cout << "Iteration " << i << endl;
        continue; // Прекратит выполнение текущей итерации, и передаст управление секции изменения счетчика

        cout << "This line never executes";
    }
    cout << "This line is always executed";

    ///////////// for in for
    cout << endl << endl;

    for (int i = 0; i < 5; i++)
    {
        // Выводим строку из 5 звездочек
        for (int j = 0; j < 5; j++)
        {
            cout << "*" << "\t";
        }
        cout << endl;
    }

    return 0;
}
