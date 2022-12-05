#include <stdio.h>
int main() {
	int hour, minute;
	scanf("%d %d", &hour, &minute);
	if (hour == 0) {
		if (minute < 45) {
			hour = 23; 
            minute = minute + 60 - 45;
			printf("%d %d", hour, minute);
		}
		else if (minute >= 45) {
			minute = minute - 45;
			printf("%d %d", hour, minute);
		}
	}
	else if (hour > 0) {
		if (minute < 45) {
			hour = hour - 1; minute = minute + 60 - 45;
			printf("%d %d", hour, minute);
		}
		else if (minute >= 45) {
			minute = minute - 45;
			printf("%d %d", hour, minute);
		}
	}
}