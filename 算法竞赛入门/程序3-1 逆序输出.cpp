#include <iostream>
#define maxn 105
int a[maxn];	//比较大的数组应尽量声明在main外面，否则程序可能无法运行

int main() {
	int x, n = 0;

	while (scanf("%d", &x) == 1)
		a[n++] = x;

	for (int i = n - 1; i >= 1; i--)
		printf("%d ", a[i]);
	printf("%d\n", a[0]);

	system("pause");
	return 0;
}