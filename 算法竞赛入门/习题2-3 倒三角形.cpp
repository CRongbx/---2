#include <iostream>

int main() {
	int n;
	scanf("%d", &n);

	for (int lev = 1; lev <= n; lev++) {
		for (int i = lev - 1; i > 0; i--)
			printf(" ");
		for (int i = 1 + 2 * (n - lev);i > 0;i--)
			printf("#");
		for (int i = lev - 1; i > 0; i--)
			printf(" ");
		printf("\n");
	}
	system("pause");
	return 0;
}