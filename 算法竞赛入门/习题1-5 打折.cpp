#include <iostream>

int main() {
	int n;
	scanf("%d", &n);

	if (n * 95 >= 300) {
		printf("%.2f\n", n * 95 * 0.85);
	}
	else {
		printf("%.2f\n", n * 95 * 1.0);
		//这里必须要*1.0
	}

	system("pause");
	return 0;
}