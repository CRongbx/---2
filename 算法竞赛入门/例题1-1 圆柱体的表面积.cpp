#include <iostream>
#include <cmath>

int main() {
	double r, h, s1, s2;
	//ʵ�ʻ����У�double������float���ܶ࣬���������ȿ���double
	const double pi = acos(-1.0);
	//���������Ǻ�����pi����ֵcos(pi)=-1.0
	scanf("%lf %lf", &r, &h);
	s1 = pi*r*r;
	s2 = 2 * pi*r*h;
	printf("Area = %.3f\n", 2 * s1 + s2);
	system("pause");
	return 0;
}