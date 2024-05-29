#include <iostream>
using namespace std;


// Цикл While
// Цикл с предусловием - While, выполняется до тех пор, пока условие удовлетворяет истинности

int main()
{
    // Casual while
    int count = 5;

    while (count > 0)
    {
        cout << "Count " << count << endl;
        count--;
    }
    cout << "This line is always executed" << endl;

    cout << endl << endl;
    //////////

    // While with break

    int count2 = 5;

    while (count2 > 0)
    {
        cout << "Count " << count2 << endl;
        count2--;
        break;

        cout << "This line never executed";
    }
    cout << "This line is always executed" << endl;

    cout << endl << endl;
    //////////

    // While with continue

    int count3 = 5;

    while (count3 > 0)
    {
        cout << "Count " << count3 << endl;
        count3--;
        continue; // Прекращает выполнение текущей итерации, и передаст управление секции изменения счетчика

        cout << "This line never executed";
    }
    cout << "This line is always executed" << endl;

    cout << endl << endl;
    //////////




    return 0;
}
