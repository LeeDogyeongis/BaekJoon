#include <stdio.h>
int main() {
	int L, A, B, C, D;
    int korean =0, math  = 0;
    scanf("%d", &L);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    korean = A/C;
    math = B/D;
    
    if(A % C != 0){
        korean++;
    }
    if(B % D != 0){
        math++;
    }
    
    if(math > korean){
        printf("%d", L-math);
    } else {
        printf("%d", L-korean);
    }
}