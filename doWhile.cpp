#include <iostream>
using namespace std;

// Цикл do-while
// Цикл с постусловием do-while - это ицкл, в котором условие проверяется после выполнения тела цикла
// При этом цикл do-while гарантированно выполнится хотя бы один раз

int main()
{
     int count = 5;
     // В данном случае, даже если мы count опеределим как 0
     // цикл выполнится 1 раз, тк это цикл с пост-условием
     // проверка в конце
     do
     {
         cout << "Count " << count << endl;
         count--;
     } while (count > 0);

     cout << "This line is always executed";

     ////////////////////
     cout << endl << endl;

     // Еще один пример данного цикла с break
     int count2 = 5;

     do
     {
         cout << "Count " << count2 << endl;
         count2--;
         break;

         cout << "This line never executed";
     } while (count2 > 0);

     cout << "This line is always executed";

    ////////////////////
    cout << endl << endl;

    // Еще один пример данного цикла с continue

    int count3 = 5;

    do
    {
        cout << "Count " << count3 << endl;
        count3--;
        continue;

        cout << "This line never executed";
    } while (count3 > 0);

    cout << "This line is always executed";


    return 0;
}
