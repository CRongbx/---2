#include <iostream>

int main() {
	int num, a, b, c;
	scanf("%d", &num);

	a = num / 100;
	num = num % 100;
	b = num / 10;
	num = num % 10;
	c = num;
	/* SOLU1:无法处理个位数是0的情况
	printf("%d%d%d\n", c, b, a);*/
	printf("%03d\n", c * 100 + b * 10 + a);
	/*SOL2:不输出0 %d； 若输出0，%03d即可*/
	system("pause");
	return 0;
}