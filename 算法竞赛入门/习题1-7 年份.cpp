#include <iostream>

int main() {
	int year;
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 400 == 0 || year % 100 != 0)
			printf("yes\n");
		else 
			printf("no\n");
	}
	else
		printf("no\n");
	system("pause");
	return 0;
}