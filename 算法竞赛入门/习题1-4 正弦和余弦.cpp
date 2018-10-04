#include <iostream>
#include <cmath>

int main() {
	int n;
	const double pi = acos(-1.0);

	scanf("%d", &n);
	printf("%lf %lf\n", sin(n/180*pi), cos(n/180*pi));

	system("pause");
	return 0;
}