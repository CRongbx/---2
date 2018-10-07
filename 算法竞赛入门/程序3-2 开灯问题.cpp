#include <iostream>
#define maxn 1010

int light[maxn];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	memset(light, 0, sizeof(light));
	//memset()把数组清零


	for (int i = 1; i <= k; i++)
		for (int j = i; j <= n; j += i) {
			light[j] == 1 ? light[j] = 0 : light[j] = 1;
		}

	for (int i = 1; i <= n; i++)
		if (light[i] == 1)
			printf("%d ", i);
	printf("\n");
	
	system("pause");
	return 0;
}