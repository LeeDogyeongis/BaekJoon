#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int firstresult = n;
    int result, a, b, c, count = 0;
    while(1) {
        a = n / 10;
        b = n % 10;
        c = (a + b) % 10;
        n = (b * 10) + c;
        count++;
        if (n == firstresult) {
            break;
        }
    }
    printf("%d", count);
}