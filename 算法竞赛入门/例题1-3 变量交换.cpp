#include <iostream>

int main() {
	int a, b;
	int temp;
	scanf("%d %d", &a, &b);

	/*SOL1:��������
	temp = a;
	a = b;
	b = temp;
	*/

	/*SOL2:�������κα�������ֻ�����ڶ����˼Ӽ�������������*/
	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d\n", a, b);

	system("pause");
	return 0;
}