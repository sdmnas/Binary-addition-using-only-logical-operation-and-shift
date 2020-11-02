#include <stdio.h>

int main() {
	int A, B, a, b;
	printf("请输入两个求和的数\n");
	scanf("%d%d", &a, &b);
	do{
		A = a & b;
		B = a ^ b;
		A = A << 1;
		a = A;
		b = B;
	} while (A != 0);
	printf("二者之和是%d", B);
	return 0;
}
