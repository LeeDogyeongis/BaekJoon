#include <stdio.h>
int main() {
    int array[30] = {0, }, check;
    for(int i = 0; i < 28; i++) {
        scanf("%d", &check);
        array[check - 1] = check;
    }
    for(int j = 0; j < 30; j++) {
        if(array[j] == 0) 
        {
            printf("%d\n", j + 1);
        }
    }
}