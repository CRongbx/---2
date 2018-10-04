#include <iostream>

int main() {
	double c, f;
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9.0;
	printf("%.3lf\n", c);

	system("pause");
	return 0;
}