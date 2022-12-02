#include <stdio.h>
int main() {
	int n;
    scanf("%d", &n);
    char array[n];
    scanf("%s", array);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i]-'0';
    }
    printf("%d", sum);
}