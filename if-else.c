#include<stdio.h>
void main(){
	int n;
	printf("Enter a number\n");
	scanf("%d", &n);
	if(n > 0)
		printf("The given number is positive\n");
	else
		printf("The given number is negative\n");
}
