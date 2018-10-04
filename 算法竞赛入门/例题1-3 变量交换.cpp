#include <iostream>

int main() {
	int a, b;
	int temp;
	scanf("%d %d", &a, &b);

	/*SOL1:三变量法
	temp = a;
	a = b;
	b = temp;
	*/

	/*SOL2:不借助任何变量——只适用于定义了加减法的数据类型*/
	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d\n", a, b);

	system("pause");
	return 0;
}