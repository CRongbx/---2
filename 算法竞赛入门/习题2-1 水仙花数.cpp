#include <iostream>

int main() {
	int count = 0;
	int n, a, b, c;

	for (n = 100; n < 1000; n++) {
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		if (n = a*a*a + b*b*b + c*c*c)
			count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}