/*SOL1: ��ƽ��������ע�⸡�����ļ��㲻��ȷ����*
#include <iostream>
#include <cmath>

int main() {
	int a, b, num, m;

	for (b = 0; b <= 9; b++) {
		for (a = 1; a <= 9; a++) {
			num = a * 1000 + a * 100 + b * 10 + b;
			m = floor(sqrt(num) + 0.5);
			//���ڸ�����sqrt��������ʹ����ȡ������floor�����������ж�
			if (m*m == num) {
				printf("%d\n", num);
			}
		}
	}
	system("pause");
	return 0;
}*/


/*SOL2: ö��ƽ�������жϷ�Χ*/
#include <iostream>

int main() {
	int n, num;

	for (int n = 10; n < 100; n++) {
		num = n*n;
		if ((num / 1000 == (num % 1000) / 100) && (num % 100) / 10 == (num % 10))
			printf("%d\n", num);
	}

	system("pause");
	return 0;
}