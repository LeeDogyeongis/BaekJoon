#include <stdio.h>
int main(){
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    int oven;
    scanf("%d", &oven);
 
    if(minute + oven < 60)
        printf("%d %d", hour, minute + oven);
    else{ 
        int a, b;
        a = (minute + oven) / 60;
        b = (minute + oven) % 60;
        if(hour + a < 24)
            printf("%d %d", hour + a, b);
        else {
            printf("%d %d", hour + a - 24, b);
        }
    }
}