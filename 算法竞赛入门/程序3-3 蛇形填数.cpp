#include <iostream>
#define maxn 10
int a[maxn][maxn];

int main() {
	int n, tot = 1, i, j;
	scanf("%d", &n);

	memset(a, 0, sizeof(a));
	//该函数多维数组也同样适用
	tot = a[i = 0][j = n - 1] = 1;
	while (tot < n*n) {
	/*while (tot <= n*n){
		for (int k = n - 1; k > 0; k -= 2,a[++i][j] = ++tot) {
			for (int m = 1; m <= k;m++)//down
				if (a[1+i][j] == 0)	a[++i][j] = ++tot;
			for (int m = 1; m <= k;m++)//left
				if (a[i][j-1] == 0)	a[i][--j] = ++tot;
			for (int m = 1; m <= k;m++)//up
				if (a[i-1][j] == 0)	a[--i][j] = ++tot;
			for (int m = 1; m <= k;m++)//right
				if (a[i][j+1] == 0)a[i][++j] = ++tot;
		}
	}*/
	//注意i+1和--i的使用情况不同;
	//注意while中两个条件时顺序不能颠倒！
		while (i + 1 < n && !a[i + 1][j]) a[++i][j] = ++tot;
		while (j - 1 >= 0 && !a[i][j - 1]) a[i][--j] = ++tot;
		while (i - 1 >= 0 && !a[i - 1][j]) a[--i][j] = ++tot;
		while (j + 1 < n && !a[i][j + 1]) a[i][++j] = ++tot;
	}

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++)
			printf("%3d", a[x][y]);
		printf("\n");
	}
	system("pause");
	return 0;
}