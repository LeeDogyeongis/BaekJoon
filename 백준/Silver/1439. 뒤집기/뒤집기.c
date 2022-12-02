#include <stdio.h>
#include <string.h> 
int main(){
    char array[20000];
	scanf("%s", array);
	int length = strlen(array);
	int cnt = 0;
	for(int i = 1; i < length; i++){
		if (array[i] != array[i - 1]) {
            cnt++;
        }
	}
	printf("%d", (cnt + 1) / 2);
}