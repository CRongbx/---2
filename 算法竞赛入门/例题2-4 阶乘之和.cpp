#include <iostream>

int main() {
	long long s, t;
	int n;
	scanf("%d", &n);
	s = 0;
	for (int m = 1; m <= n; m++) {
		t = 1;
		for (int i = 1; i <= n; i++)
			t *= i;
		s += t;
		m++;
	}
	printf("%lld", s);
	system("pause");
	return 0;
}