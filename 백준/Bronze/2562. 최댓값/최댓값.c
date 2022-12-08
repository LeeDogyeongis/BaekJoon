#include <stdio.h>
int main() {
    int array[9];
    int max = 0, index;
    for(int i = 0; i < 9; i++) {
        scanf("%d", &array[i]);
        if(array[i] > max) {
            max = array[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index + 1);
}