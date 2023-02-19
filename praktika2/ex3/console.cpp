#include <iostream>
#include <cmath>
#include "figure.h"
#include <vector>
using namespace std;

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
