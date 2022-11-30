#include <stdio.h>
int main() {
	int A, B, C;
    scanf("%d %d %d",&A, &B, &C);
    
    if(A == B && B == C){
        printf("%d", 10000 + 1000 * A);
    } else if (A == B || B == C) {
        printf("%d", 1000 + 100 * B);
    } else if (C == A) {
        printf("%d", 1000 + 100 * A);
    } else {
        if(A > B && A > C){
            printf("%d", A * 100);
        } else if(B > A && B > C){
            printf("%d", B * 100);
        } else {
            printf("%d", C * 100);
        }
    }
}