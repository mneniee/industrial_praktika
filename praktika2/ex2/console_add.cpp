#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle mas[3];
    float radius, x, y, x_cntr, y_cntr, r;
    float a, b, c;
    for(int i = 0; i < 3; i ++) {
        cout << "Введите радиус и координаты окружности " << i + 1  << "через пробел : ";
        cin >> r >> x >> y;
        mas[i].set_circle (r, x, y);
    }

    for(int i = 0; i < 3; i ++) {
        cout << "Введите стороны треугольника " << i + 1 <<"через пробел :  ";
        cin >> a >> b >> c;
        mas[i].set (a, b, c);
        if(!mas[i].treug()){
            cout << "Такого треугольника не существует " << endl;
            i --;

        }
        cout << "Можно ли вписать треугольник  " << i + 1 <<"Значение: "<<  mas[i].triangle_around(a, b, c) << endl;
        cout << "Можно ли описать треугольник  " << i + 1 << "Значение: " <<  mas[i].triangle_in(a, b, c) << endl;
        cout << "Площадь окружности: " << mas[i].square() << endl;
    

    }
    
        
   
    cout << "Введите радиус и координаты окружности для пересечения через пробел : ";
    cin >> r >> x_cntr >> y_cntr;
  
    for(int i = 0; i < 3; i ++) {
        cout << "Окружность песесекает окружность " << i + 1 << "значение: " << mas[i].check_circle(r, x_cntr, y_cntr) << endl;
    }
  

    return 0;
}