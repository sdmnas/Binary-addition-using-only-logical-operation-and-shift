#include <stdio.h>

int main() {
	int A, B, a, b;
	printf("please entet two number to add:\n");
	scanf("%d%d", &a, &b);
	do{
		A = a & b;
		B = a ^ b;
		A = A << 1;
		a = A;
		b = B;
	} while (A != 0);
	printf("The sum of the two is%d", B);
	return 0;
}

//The loop statement above is written to make it clear, but you can actually choose the simplified loop statement below.

//do{
//A=a&b;
//b^=a;
//}while(a=(A<<=1));
