#include "Circle.h"
#include <cmath>
using namespace std;

Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
	x_center = x;
	y_center = y;
	radius = r;
}

float Circle::square() {
	return  3.14159 * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return radius == (a * b * c) / (4 * s);
}

bool Circle::triangle_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return radius == (2 * s) / (a + b + c);
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	double d = sqrt(pow((x_center - x_cntr), 2) + pow((y_center - y_cntr), 2));
	return d <= (r + radius);
}
