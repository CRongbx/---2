#include <iostream>
#define maxn 105
int a[maxn];	//�Ƚϴ������Ӧ����������main���棬�����������޷�����

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