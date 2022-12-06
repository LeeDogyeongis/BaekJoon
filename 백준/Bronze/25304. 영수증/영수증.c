#include <stdio.h>
int main() {
    int total;
    scanf("%d", &total);
    int n;
    scanf("%d", &n);
    int product, count, sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &product, &count);
        sum += (product * count);
    }
    if (total == sum) {
        printf("Yes");
    } else {
        printf("No");
    }
}