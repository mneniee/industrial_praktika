#include <iostream>
#include <vector>
#include "Rational.h"
using namespace std;

Rational operator-(Rational first, Rational second) {
    int new_a = first.a * second.b - first.b * second.a;
    int new_b = first.b * second.b;
    return Rational(new_a, new_b);
}

int main()
{
    int a, b, k;

    cout << "Введите кол-во дробей: ";
    cin >> k;
    vector <Rational> arr(k);

    for (int i = 0; i < k; i++) {
        cout << "Введите числитель и знаменатель дроби № " << i + 1 << " : ";
        cin >> a >> b;
        arr[i] = Rational(a, b);
    }

    cout << "Рац. дроби: " << endl;
    for (int i = 0; i < k; i++) {
        arr[i].show();
        cout << endl;
    }

    cout << "+ первых двух элементов: ";
    (arr[0] + arr[1]).show();
    cout << endl;

    cout << "- первых двух элементов: ";
    (arr[0] - arr[1]).show();
    cout << endl;

    cout << "+ на единицу числителя 1ого элементa: ";
    ++arr[0];
    arr[0].show();
    cout << endl;

    cout << "Сравнение = первых двух элементов: ";
    if (arr[0] == arr[1]) {
        cout << "Дроби =" << endl;
    }
    else {
        cout << "Дроби !=" << endl;
    }

    cout << "Сравнение > первых двух элементов: ";
    if (arr[0] > arr[1]) {
        cout << "Первая дробь > втлорой " << endl;
    }
    else {
        cout << "Первая дробь <= второй" << endl;
    }

    cout << "Присваивание : ";
    arr[1] = arr[0];
    arr[1].show();
    cout << endl;

    return 0;
}