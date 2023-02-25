#include <iostream>
#include "Circle.h"
using namespace std;


int main(void) {

    Circle mas[3];
    float r, x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите радиус, x , y для окружности № " << i + 1 << " : " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
    }
    float a, b, c;
    for (int i = 0; i < 3; i++)
    {
        cout << "Площадь окружности № " << i + 1 << endl;
        cout << mas[i].square();
        cout << "Введите a, b , c для треугольника чтобы быть описаным окр № " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        cout << mas[i].triangle_in(a, b, c);
        cout << "Введите a, b , c для треугольника в который нужно вписать окр № " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        cout << mas[i].triangle_around(a, b, c);
        cout << "Введите радиус и координаты центра для окружности, для проверки касания";
        cout << mas[i].check_circle(a, b, c);
    }
    return 0;
    
}
