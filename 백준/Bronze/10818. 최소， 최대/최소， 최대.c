#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
 
    int min = array[0], max = array[0];
    
    for(int j = 0; j < n; j++){
        if (array[j] < min) {
            min = array[j];
        }
        if (array[j] > max) {
            max = array[j];
        }
    }
    printf("%d %d", min, max);
}