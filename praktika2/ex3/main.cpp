#include <iostream>
#include <cmath>

#include <vector>
using namespace std;
class Figure {
  private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float s, zn1, zn2, zn3, zn4;
    float p;
    float a, b, c, d;
    float s1, s2;
    float c1, c2;

  public:
    Figure();
    Figure(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4);
    void show();
    bool is_prug();
    bool is_square();
    bool is_romb();
    bool is_in_circle();
    bool is_out_circle();



};

Figure::Figure(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4){
  this->x1 = x1; this->x2 = x2;this->x3 = x3; this->x4 = x4;this->y1 = y1;this->y2 = y2;this->y3 = y3; this->y4 = y4;
  a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
  c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
  d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
  zn1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
  zn2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
  zn3 = ((x3 - x1)*(x4 - x2) + (y3 - y1)*(y4 - y2))/(sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2))*(pow(x4 - x2, 2) + pow(y4 - y2, 2)));
  zn4 = sqrt(1 - zn3*zn3);
  this->p = a + b + c + d;
  this->s = 0.5 * zn1 * zn2 * zn4;

}

void Figure::show(){
  
  
  cout << "Периметр: " << p << endl;
  cout << "Площадь: " << s << endl;

}
bool Figure::is_prug(){
  s1 = (a*b);
  if(a == c && b == d && a != b && c != d && s1 == s) {
    return true;
  }
  else {
    return false;
  }
}
bool Figure::is_square() {
  if(b == a && b == c && a == c && a == d && b == d && c == d && zn4 == 1 && (zn2 * zn2 == d * d + a * a) && (zn2 * zn2 == c * c + b * b) && (pow(zn1, 2) == a * a + b * b)) {
    return true;
  }
  else {
    return false;
  }
}
bool Figure::is_romb() {
  s2 = 0.5*zn1*zn2;
  if(a == b && b == c && a == c && a == d && b == d && c == d && zn4 == 1 && s2 == s && zn2*zn2 != d*d + a * a){
    return true;

  }
  else {
    return false;
  }
}

bool Figure::is_out_circle(){
  if((a + c) == (b + d)) {
    return true;

  }
  else {
    return false;
  }
}

bool Figure::is_in_circle() {
  c1 = ((x2 - x1)*(x4 - x1) + (y2 - y1)*(y4 - y1))/(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))*(pow(x4 - x2, 2) + pow(y4 - y2, 2)));
  c2 = ((x2 - x3)*(x4 - x3) + (y2 - y3)*(y4 - y3))/(sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2))*(pow(x4 - x3, 2) + pow(y4 - y3, 2)));

  if((c1 + c2) == -1){
    return true;

  }
  else{
    return false;
  }
}





int main() {
  vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координаты четырехуголника № " << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
  for (int i = 0; i < 3; i++)
	{
		cout << "Параметры четырехугольника " << i + 1; mas[i].show();
    cout << "Четырехугольник" << i + 1 << " прямоугольник ?";mas[i].is_prug();
    cout << "Четырехугольник" << i + 1 << " квадрат ?";mas[i].is_square();
    cout << "Четырехугольник" << i + 1 << " ромб ?";mas[i].is_romb();
    cout << "Четырехугольник №" << i + 1 << " можно вписать в окружность ?";mas[i].is_in_circle();
    cout << "В четырехугольник №" << i + 1 << " можно вписать окружность ?";mas[i].is_out_circle();


	}





  return 0;
}
