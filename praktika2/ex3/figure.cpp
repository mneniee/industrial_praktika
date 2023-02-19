#include"figure.h"
#include<cmath>
using namespace std;

Figure::Figure(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4){
  a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
  c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
  d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

}

void Figure::show(){
  p = a + b + c + d;
  zn1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
  zn2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
  zn3 = ((x3 - x1)*(x4 - x2) + (y3 - y1)*(y4 - y2))/(sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2))*(pow(x4 - x2, 2) + pow(y4 - y2, 2)));
  zn4 = sqrt(1 - zn3*zn3);
  s = 0.5 * zn1 * zn2 * zn4;

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



