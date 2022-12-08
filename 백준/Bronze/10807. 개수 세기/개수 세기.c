#include <stdio.h>
int main() {
    int n, result, check, count = 0;
    scanf("%d", &n);
    int array[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    scanf("%d", &check);
    for(int j = 0; j < n; j++) {
        if(array[j] == check) {
            count++;
        }
    }
    printf("%d", count);
}