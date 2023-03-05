#include "eq2.h"
#include <cmath>
#include<iostream>
using namespace std;


eq2::eq2(double a1, double b1, double c1){
  a = a1;
  b = b1;
  c = c1;
  D = pow(b, 2) - 4 * a * c;
}

void eq2::set(double a1, double b1, double c1) {
  a = a1;
  b = b1;
  c = c1;
  D = pow(b, 2) - 4 * a * c;
}


double eq2::find_X(){
  if(D < 0) {
    cout<<"Корней нет"<< endl;
    return 0 ;
  }
  else if(D == 0) {
    double x = -b / (2 * a);
    cout << "Корень один" << endl;
    cout << x << endl;
    return x;
  }
  else if(D > 0) {
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b + sqrt(D)) / (2 * a);
    cout << "Корня два, наибольший: " << endl;
    if(x1 > x2) {
      cout << x1 << endl;
      return x1;
    }
    if(x1 < x2) {
      cout << x2 << endl;
      return x2;

    }

  }
}

double eq2::find_Y(double x1) {
  return a*x1*x1 + b*x1 * c;
}



