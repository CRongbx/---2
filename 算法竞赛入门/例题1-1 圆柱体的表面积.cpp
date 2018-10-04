#include <iostream>
#include <cmath>

int main() {
	double r, h, s1, s2;
	//实际机器中，double并不比float慢很多，浮点数优先考虑double
	const double pi = acos(-1.0);
	//反余弦三角函数，pi的求值cos(pi)=-1.0
	scanf("%lf %lf", &r, &h);
	s1 = pi*r*r;
	s2 = 2 * pi*r*h;
	printf("Area = %.3f\n", 2 * s1 + s2);
	system("pause");
	return 0;
}