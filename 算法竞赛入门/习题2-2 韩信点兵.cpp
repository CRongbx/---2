#include <iostream>

int main() {
	freopen("test_in.txt", "r", stdin);
	freopen("test_out.txt", "w", stdout);

	int a, b, c, i = 1;
	int n;
	int ans;

	while (scanf("%d %d %d", &a, &b, &c) == 3) {
		ans = 0;	//多组输入数据，一定要初始化！！
		printf("Case %d: ", i++);
		for (n = 10; n < 100; n++) {
			if (n % 3 == a && n % 5 == b && n % 7 == c) {
				ans = 1;
				printf("%d\n", n);
			}
		}
		if (!ans)
			printf("No answer\n");
	}

	return 0;
}