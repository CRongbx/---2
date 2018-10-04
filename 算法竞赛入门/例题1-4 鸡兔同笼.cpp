#include <iostream>

int main() {
	int n, m;
	int r, c;
	scanf("%d %d", &n, &m);

	if ((m < 2*n) || (m > 4*n) || (m - n * 2) % (4 - 2) != 0) {
		printf("No answer\n");
	}
	else {
		r = (m - n * 2) / (4 - 2);
		c = n - r;
		printf("%d %d\n", c, r);
	}

	system("pause");
	return 0;
}