#include <stdio.h>
#include <string.h>
int main() {
    char length[1000000];
    scanf("%s", length);
    int slice = strlen(length);
    
    if(slice % 3 == 1) {
        printf("%d", length[0] - '0');
        for(int i = 1; i < slice; i += 3){
            printf("%d",4 * (length[i] - '0') + 2 * (length[i + 1] - '0') + length[i + 2] - '0');
        }
    } else if(slice % 3 == 2) {
        printf("%d", 2 * (length[0] - '0') + length[1] - '0');
        for(int i = 2; i < slice; i += 3){
            printf("%d",4 * (length[i] - '0') + 2 * (length[i + 1] - '0') + length[i + 2] - '0');
        }
    } else {
        for(int i = 0; i < slice; i += 3) { //
            printf("%d",4 * (length[i] - '0') + 2 * (length[i + 1] - '0') + length[i + 2] - '0');
        }    
    }
}