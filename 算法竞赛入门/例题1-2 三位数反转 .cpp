#include <iostream>

int main() {
	int num, a, b, c;
	scanf("%d", &num);

	a = num / 100;
	num = num % 100;
	b = num / 10;
	num = num % 10;
	c = num;
	/* SOLU1:�޷������λ����0�����
	printf("%d%d%d\n", c, b, a);*/
	printf("%03d\n", c * 100 + b * 10 + a);
	/*SOL2:�����0 %d�� �����0��%03d����*/
	system("pause");
	return 0;
}