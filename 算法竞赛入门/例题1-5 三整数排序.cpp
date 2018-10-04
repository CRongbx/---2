#include <iostream>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	/*SOL1:穷举6种排序方式
	if (a <= b && b <= c)
		printf("%d %d %d\n", a, b, c);
	else if (a <= c && c <= b)
		printf("%d %d %d\n", a, c, b);
	else if (b <= a && a <= c)
		printf("%d %d %d\n", b, a, c);
	else if (b <= c &&c <= a)
		printf("%d %d %d\n", b, c, a);
	else if (c <= a && a <= b)
		printf("%d %d %d\n", c, a, b);
	else if(c <= b && b <= a)
		printf("%d %d %d\n", c, b, a);*/

	/*SOL2:交换三个数的顺序，将三个变量改变为a<=b<=c*/
	int t;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	 if (a > c){
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}