#include<stdio.h>
main() {
	int hour,mnt;
	printf("enter your time(24): ");
	scanf_s("%d:%d", &hour, &mnt);

	printf("the time(12) is %d:%d", hour > 12 ? hour - 12 : hour, mnt);

}