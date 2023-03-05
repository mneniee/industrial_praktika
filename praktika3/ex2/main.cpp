#include <iostream>
#include <vector>
#include "Rational.h"
using namespace std;

int main()
{
    int a, b, k;
    

    cout << "Введите количество дробей: ";
    cin >> k;
    vector <Rational> arr(k);

    for (int i = 0; i < k; i++) {
        cout << "Введите числитель и знаменатель дроби № " << i+1 << " : ";
        cin >> a >> b;
        arr[i].set(a, b);
    }

    cout << "Рац. дроби: " << endl;
    for (int i = 0; i < k; i++) {
        arr[i].show();
        cout << endl;
    }

    return 0;
}