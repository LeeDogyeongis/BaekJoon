#include <stdio.h>
int minimum(int A, int B, int C) {
	if (A <= B && A <= C) {
		return A;
	}
	else if (B <= C) {
		return B;
	}
	else {
		return C;
	}
}

int main(void)
{
	int A, B, C, D, E;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
   
	int burger = minimum(A, B, C);
	int drink = minimum(D, E, 2000);

	printf("%d", burger + drink - 50);
}