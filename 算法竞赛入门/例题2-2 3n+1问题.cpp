#include <iostream>

int main() {
	int i;
	long long n;
	scanf("%lld", &n);

	i = 0;
	while (n > 1) {
		if (n % 2 == 0)
			n = n / 2;
		else
			n = 3 * n + 1;
			//此处可能乘法溢出，故n要为long long型
		i++;
	}
	printf("%d\n", i);
	
	system("pause");
	return 0;
}