#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}
int sum(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return sum(n - 1) + sum(n - 2); 
    }
}