#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    private: 
        float radius, x_center, y_center;
        float a, b, c;
  
    public:
        typedef struct circle 
        {
        float r;
        float x;
        float y;
      } circle;

      
        void set_circle(float r, float x, float y) {
            radius = r;
            x_center = x;
            y_center = y;

        }
        void set(float a1, float b1, float c1) {
            a = a1;
            b = b1; 
            c = c1;
        }

        float square(){
        
            float s = 3.1416 * radius * radius;
            return s;
        }
      
        bool triangle_around (float a, float b, float c){
            float p = (a + b + c) / 2;
            float s = sqrt(p * (p - a) * (p - b) * (p - c));
            radius == a * b * c / (4 * s);
            return radius;
        
        }
        bool triangle_in (float a, float b, float c){
            float p = (a + b + c) / 2;
            float s = sqrt(p * (p - a) * (p - b) * (p - c));
            return radius == 2 * s / (a + b + c);
        }
        bool check_circle(float r, float x_cntr, float y_cntr) {
            double d = sqrt(pow(x_center - x_cntr,2) + pow(y_center - y_cntr,2));
            return d <= (r + radius);
        }
        bool treug() {
            return ((a + b > c) && (b + c > a)&& (a + c > b));
        }

};




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