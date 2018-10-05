/*SOL1: 开平方法——注意浮点数的计算不精确处理*
#include <iostream>
#include <cmath>

int main() {
	int a, b, num, m;

	for (b = 0; b <= 9; b++) {
		for (a = 1; a <= 9; a++) {
			num = a * 1000 + a * 100 + b * 10 + b;
			m = floor(sqrt(num) + 0.5);
			//由于浮点数sqrt的误差，我们使用下取整函数floor四舍五入来判断
			if (m*m == num) {
				printf("%d\n", num);
			}
		}
	}
	system("pause");
	return 0;
}*/


/*SOL2: 枚举平方根，判断范围*/
#include <iostream>

int main() {
	int n, num;

	for (int n = 10; n < 100; n++) {
		num = n*n;
		if ((num / 1000 == (num % 1000) / 100) && (num % 100) / 10 == (num % 10))
			printf("%d\n", num);
	}

	system("pause");
	return 0;
}